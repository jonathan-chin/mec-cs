const resources = ['wool', 'grain', 'lumber', 'brick', 'ore']; // causes side effect but makes our lives easier

const make_player = () => {
    return {
	resources: [],
	victory_points: 0
    };
};


/*
const make_players = (quantity) => {
    // assume quantity is 1+
    if(quantity === 1){
	return [make_player()];
    }
    
    return [
	make_player(),
	...make_players(quantity - 1)
    ];
};
*/

const get_random_number = (max) => {
    return Math.floor(
	Math.random() * 100
    ) % max;
}

const give_resource = (player) => {
    //const resources = ['wool', 'grain', 'lumber', 'brick', 'ore'];
    const random_index = get_random_number(resources.length);
    const random_resource = resources[random_index];
    return {
	...player,
	resources: [
	    ...player.resources,
	    random_resource
	]
    };
};

const give_resources_to_players = (players) => {
    return players.map(give_resource);
}

const count_resources = (resources, target_resource) => {
    return resources
	.filter(
	    (resource) => resource === target_resource
	)
	.length;
};

const reduce_resources = (resources, target_resources) => {
    return resources
	.filter(
	    (resource) => !target_resources.includes(resource)
	);
};

const give_victory_points = (player) => {
    //const resources = ['wool', 'grain', 'lumber', 'brick', 'ore'];
    const three_of_a_kind_resources = resources.filter(
	(resource) => {
	    return count_resources(player.resources, resource) === 3;
	}
    );

    return {
	...player,
	resources: reduce_resources(player.resources, three_of_a_kind_resources),
	victory_points: player.victory_points + three_of_a_kind_resources.length
    };
};

const give_victory_points_to_players = (players) => {
    return players.map(give_victory_points);
};

const array_of_x_hof = (count, generator) => {
    if(count === 0){
	return [];
    }
    if(count === 1){
	return [generator()];
    }

    // implied else
    return [
	generator(),
	...array_of_x_hof(count - 1, generator)
    ];
}

/*
const array_of_x = (count, resource) => {
    // assume count >= 0
    if(count === 0){
	return [];
    }
    
    if(count === 1){
	return [resource];
    }
    
    return [
	resource,
	...array_of_x(count - 1, resource)
    ]
}
*/

const rob_resource = (resources, target_resource) => {
    const count = count_resources(resources, target_resource);
    const new_count = Math.floor(count / 2);
    // let new_array = array_of_x(new_count, target_resource);
    let new_array = array_of_x_hof(new_count, () => {return target_resource;});
    return new_array;
}

const rob_resources = (player) => {
    if(player.resources.length < 6){
	return player;
    }
    //const resources = ['wool', 'grain', 'lumber', 'brick', 'ore'];
    const robbed_resources = resources.map(
	(target_resource) => rob_resource(player.resources, target_resource)
    ).reduce(
	(total, resource) => {
	    return [
		...total,
		...resource // an array from rob_resource
	    ]
	}, []
    );
    return {
	...player,
	resources: robbed_resources
    };
};

const rob_resources_from_players = (players) => {
    return players.map(rob_resources);
}

const check_winner = (player) => {
    return player.victory_points == 10;
}

const check_if_any_winners = (players) => {
    return players.filter(check_winner).length > 0;
}

const phases = [
    give_resources_to_players,
    give_victory_points_to_players,
    rob_resources_from_players
];

const announce_game_state = (state) => {
    console.log(
	JSON.stringify(
	    state,
	    null,
	    4
	)
    );
};

const game = (players) => {
    const round = phases.reduce(
	(state, phase) => phase(state),
	players);
    // check if winner
    announce_game_state(round);
    if(check_if_any_winners(round)){
	return;
    }else{
	game(round);
    }
};

//game(make_players(10));
game(
    array_of_x_hof(10, make_player)
);

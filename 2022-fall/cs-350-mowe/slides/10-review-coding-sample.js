// write a simplified game engine for blackjack
// assume that there's a deck with unlimited cards
// assume there's no dealer

const get_initial_game_state = () => {
    return {
	active_players: [], // can still request a card
	stayed_players: [], // close enough to 21 and will not get a card
	busted_players: [] // have a total above 21
    };
}

const get_random_card = () => {
    // returns number between 1 and 11
    return Math.floor( 
	(Math.random() * 100) % 11 // probably not evenly distributed
    ) + 1;
}

const deal_card = (player) => {
    // assume a player has a hand array
    // and a total
    const new_card = get_random_card();
    return {
	total: player.total + new_card,
	hand: [
	    ...player.hand,
	    new_card
	]
    };
}

const get_new_player = () => {
    const empty_hand = {
	total: 0,
	hand: []
    };
    return deal_card(
	deal_card(
	    empty_hand
	)
    ); // use function composition to deal 2 start cards
}

const add_players = (state, number) => {

    if(number == 0){
	return state;
    }
    return add_players(
	{
	    ...state,
	    active_players: [
		...state.active_players,
		get_new_player()
	    ]
	}
	, number - 1);
}

// one round of a game consists:
// deal each player a new card
// anyone over 21 is busted
// anyone 18-21 will stay

const deal_active_players_card = (state) => {
    return {
	...state,
	active_players: state.active_players.map(
	    //(player) => deal_card(player)
	    deal_card // cleaner FP alternative
	)
    }
}

const bust_players = (state) => {
    // get all players whose total is above 21
    const busted_players = state.active_players.filter((player) => player.total > 21);
    const still_active_players = state.active_players.filter((player) => player.total <= 21);
    return {
	...state,
	busted_players: [
	    ...state.busted_players,
	    ...busted_players
	],
	active_players: [
	    ...still_active_players
	]
    };
}

const stay_players = (state) => {
    const stayed_players = state.active_players.filter((player) => player.total >= 18 && player.total <= 21);
    const still_active_players = state.active_players.filter((player) => player.total < 18);
    return {
	...state,
	stayed_players: [
	    ...state.stayed_players,
	    ...stayed_players
	],
	active_players: still_active_players
    }
}

const round = [
    deal_active_players_card,
    bust_players,
    stay_players
];




const run_game = (state) => {
    if(state.active_players.length == 0){
	return state;
    }
    return run_game(
	round.reduce(
	    (current_state, func) => func(current_state),
	    state
	)
    );
}


///////

const final_state = run_game(
    add_players(
	get_initial_game_state(),
	10
    )
);


console.log(
    JSON.stringify(
	final_state,
	null,
	4
    )
);

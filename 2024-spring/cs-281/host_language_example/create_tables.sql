CREATE TABLE city (
    id varchar(5),
    name varchar(20),
    state varchar(2),
    primary key (id)
);

CREATE TABLE team (
    id varchar(5),
    name varchar(20),
    primary_color varchar(10),
    city_id varchar(5),
    primary key (id),
    foreign key (city_id) references city(id)
);

-- Lab 3: Create a table authors with the following columns: author_id, first_name,
-- last_name, and country. Set author_id as the primary key.

create table authors
( author_id int primary key,
first_name varchar(45) not null,
last_name varchar(45) not null,
country varchar(25) not null
);



-- Lab 4: Create a table publishers with columns: publisher_id, publisher_name,
-- contact_number, and address. Set publisher_id as the primary key and
-- contact_number as unique.

create table publishers
(publisher_id int primary key,
publisher_name varchar(45) not null,
contact_number int unique,
address varchar(250) not null
);
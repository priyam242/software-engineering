-- Lab 3: Create a database called library_db and a table books with columns: book_id,
-- title, author, publisher, year_of_publication, and price. Insert five records into the table.

create schema library_db;
use library_db;
create table books
(
book_id int primary key auto_increment,
title varchar(25) not null,
author varchar(25) not null,
publisher varchar(25) not null,
year_of_publication date not null,
price int not null
);
insert into books values(1,'action of boy','priyam','som lalit','2005-05-05',15000),
(2,'action of man','priyam','som lalit','2005-07-05',15000),(3,'action of girl','alfred','som lalit','2005-08-05',5000),
(4,'action of woman','alfred','tops','2015-05-21',1500),(5,'action of people','aditya','tops','2000-05-05',150);
select * from books;

-- Lab 4: Create a table members in library_db with columns: member_id, member_name,
-- date_of_membership, and email. Insert five records into this table.

create table member
(
member_id int primary key auto_increment,
member_name varchar(250) not null,
date_of_membership date not null,
email varchar(25) not null
);

insert into member values(1,'priyam','2005-05-05','ppriyam@gmail.com'),
(2,'Aditya','2005-07-05','aditya@gmail.com'),(3,'Alfred','2015-05-05','Alfred@gmail.com'),
(4,'shubham','2005-02-25','shubahm@gmail.com'),(5,'rohit','2000-02-15','rohit@gmail.com');
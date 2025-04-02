-- Lab 1: Create a new database named school_db and a table called students with the
-- following columns: student_id, student_name, age, class, and address.

create schema school_db;
use school_db;
create table students 
(
student_id int primary key,
student_name varchar(25) not null,
age int not null,
class varchar(10) not null,
address varchar(30) not null
);

-- Lab 2: Insert five records into the students table and retrieve all records using the SELECT statement.

insert into students values (1,"priyam",15,"5th","119,Nirmal park society"),(2,"shubham",15,"5th","120,Ashish park society"),
(3,"nishit",15,"5th","120,sarkhej near mall"),(4,"ashish",15,"5th","128,morlidar society"),(5,"ronny",15,"5th","119,Nirmal park society");

select * from students;

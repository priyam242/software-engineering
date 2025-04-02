-- Lab 1: Create a table teachers with the following columns: teacher_id (Primary Key),
-- teacher_name (NOT NULL), subject (NOT NULL), and email (UNIQUE).

create table teachers
(
teacher_id int Primary Key,
teacher_name varchar(25) NOT NULL,
subject varchar(25) NOT NULL,
email varchar(25) UNIQUE
);

-- Lab 2: Implement a FOREIGN KEY constraint to relate the teacher_id from the
-- teachers table with the students table.

drop table students;

create table students 
(
student_id int primary key,
student_name varchar(25) not null,
age int not null,
class varchar(10) not null,
address varchar(30) not null,
teacher_id int ,
foreign key (teacher_id) references teachers(teacher_id)
);
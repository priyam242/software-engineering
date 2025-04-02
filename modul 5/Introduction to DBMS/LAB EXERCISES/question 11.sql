-- Lab 1: Create two tables: departments and employees. Perform an INNER JOIN to
-- display employees along with their respective departments.

create table departments
(
de_id int primary key,
de_name varchar(100)
);

create table employees
(
e_id int unique,
e_name varchar(50) not null,
de_id int,
foreign key employees(de_id) references departments(de_id)
);

insert into departments values (1,'HR'),(2,'Sales'),(3,'Engineering'),(4,'Accounting');
insert into employees values (1,'krish Patel',1),(2,'Vrsha Parmar',2),(3,'Urvisha Patel',3),
(4,'Krish Kheni',3),(5,'Riya Dobariya',4),(6,'Yatri Sharma',2),
(7,'Priyam Parajapti',1),(8,'Rajesh Khanna',4),(9,'Dipika Mehta',2),
(10,'Akshy Nakum',3);

select e.e_name,d.de_name from employees e inner join departments d on e.de_id = d.de_id;

-- Lab 2: Use a LEFT JOIN to show all departments, even those without employees.

select d.de_name,e.e_name from departments d left join employees e on d.de_id = e.de_id;
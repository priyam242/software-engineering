-- Lab 1: Create a trigger to automatically log changes to the employees table when a new
-- employee is added.

create table emp_data(
    emp_id int auto_increment primary key, 
    e_id int,                              
    emp_change_type VARCHAR(10),               
    emp_change_time TIMESTAMP                  
);
create trigger emp_tri after insert on employees for each row insert into emp_data values(emp_id,new.e_id,"insert",NOW());

insert into employees values(11,"ronny patel",4,15000);
insert into employees values(12,"muskan patel",4,15000);

select * from emp_data;

-- Lab 2: Create a trigger to update the last_modified timestamp whenever an employee
-- record is updated.

create trigger emp_updtri after update on employees for each row insert into emp_data values(emp_id,new.e_id,"UPADTE",NOW());
update employees set salary=12000 where e_id=12;

select * from employees;
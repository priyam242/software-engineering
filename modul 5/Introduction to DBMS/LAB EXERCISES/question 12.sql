-- Lab 1: Group employees by department and count the number of employees in each
-- department using GROUP BY.

select count(*) from employees group by de_id;

-- Lab 2: Use the AVG aggregate function to find the average salary of employees in each department.

select de_id,avg(salary) as average_salary from employees group by de_id;
-- Lab 1: Create a view to show all employees along with their department names.

create view show_data as select e.e_name, d.de_name, d.de_id
from employees e
join departments d ON e.de_id = d.de_id;

select * from show_data;
select * from departments;
-- Lab 2: Modify the view to exclude employees whose salaries are below $50,000.

drop view show_data;

create view show_data AS SELECT e.e_name, d.de_name, d.de_id,e.salary
FROM employees e
JOIN departments d ON e.de_id = d.de_id
where e.salary>50000;

select * from show_data;
-- Lab 1: Write a stored procedure to retrieve all employees from the employees table based on department.

delimiter &&
create procedure show_data(in did int)
begin
select * from employees where de_id = did;
end &&

call show_data(3);

-- Lab 2: Write a stored procedure that accepts course_id as input and returns the course
-- details.
select * from courses;
delimiter &&
create procedure GetCourse(in c_id int)
begin
select * from courses where course_id = c_id;
end &&

call GetCourse(1);
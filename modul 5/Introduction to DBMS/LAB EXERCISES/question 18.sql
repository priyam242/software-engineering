--  Lab 1: Write a PL/SQL block using an explicit cursor to retrieve and display employee details.
declare
   cursor emplo_cursor is 
   select e_id, e_name, de_id,salary from employees;
	e_id employees.e_id%type;
    e_name employees.e_name%type;
    de_id employees.de_id%type;
    e_salary employees.salary%TYPE;
begin
    open emplo_cursor;
    loop
        fetch emplo_cursor into e_id, e_name,de_id, e_salary;
        exit when emplo_cursor%NOTFOUND; 
        
        dbms_output.put_line('Employee ID = ' || e_id || ', Name = ' || e_name || ', Department ID = ' || de_id || ', Salary = ' || e_salary);
    end loop;
    close emplo_cursor;
end;
 
--  Lab 2: Create a cursor to retrieve all courses and display them one by one.

declare
    cursor course_cursor IS
        select course_id, course_name, duration, fees
        from courses;

    c_id courses.course_id%TYPE;
    c_name courses.course_name%TYPE;
    c_duration courses.duration%TYPE;
    c_fees courses.fees%TYPE;
begin

   open course_cursor;
    loop
        FETCH course_cursor into c_id, c_name, c_duration, c_fees;
        exit WHEN course_cursor%NOTFOUND; 

         dbms_output.put_line('Course ID = ' || c_id || ', Name = ' || c_name || ', Duration = ' || c_duration || ', Fees = ' || c_fees);
    end loop;
    close course_cursor;
end;

-- Lab 1: Write a PL/SQL block using an IF-THEN condition to check the department of an employee.

declare
	e_id number := 5;
	de_id number; 
begin
	select de_id into de_id from employees where e_id = e_id; 
	if de_id = 1 then
		dbms_output.put_line('This employees from HR department');
	elsif de_id = 2 then
		dbms_output.put_line('This employees from sales department');
	elsif de_id = 3 then
		dbms_output.put_line('This employees from Engineering Department ');
	else
		dbms_output.put_line('This employees from Accounting Department ');
	end if;
end;



-- Lab 2: Use a FOR LOOP to iterate through employee records and display their names.

declare
	e_name employees.e_name%type;
begin
    dbms_output.put_line('Employees Names = ');
	for emp in (select e_name from employees) loop
		dbms_output.put_line(emp.e_name);
	end loop;
end;

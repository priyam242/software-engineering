-- Lab 1: Write a PL/SQL block to print the total number of employees from the employeesc table.

create table employees (
    e_id number primary key,
    e_name varchar(25) not null,
    salary number not null);

insert all
    into employees VALUES (1, 'priyam prajapati', 2000)
    into employees VALUES (2, 'nishit patel', 5000)
    into employees VALUES (3, 'ahish prajapati', 1000)
    into employees VALUES (4, 'priyanshu teli', 2000)
    into employees VALUES (5, 'krish patel', 4000)
SELECT * FROM dual;

DECLARE
    total_num_employee NUMBER;
begin
    SELECT COUNT(*) INTO total_num_employee FROM employees;
    DBMS_OUTPUT.PUT_LINE('Total number of employees: ' || total_num_employee);
end;

-- Lab 2: Create a PL/SQL block that calculates the total sales from an orders table.

create table orders (
    order_id int PRIMARY KEY,
    customer_id int,
    order_amount int);

insert all
     into orders VALUES (1, 1, 25050)
     into orders VALUES (2, 2, 12075)
     into orders VALUES (3, 1, 50000)
     into orders VALUES (4, 3, 7525)
     into orders VALUES (5, 2, 3200)
SELECT * FROM dual;


DECLARE
    sales int;
begin 
    select sum(order_amount) INTO sales from orders;
    DBMS_OUTPUT.PUT_LINE('Total Sales =  ' || sales);
end;

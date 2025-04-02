--  Lab 1: Perform a transaction where you create a savepoint, insert records, then rollback to
-- the savepoint.
create schema tutu;
use tutu;

select * from employees;
savepoint s1;
insert into employees values(203,'ashish','Ram','2007-05-07',25000,0.2,101,20);
savepoint s2;
insert into employees values(204,'alok','Ram','2007-01-07',35000,0.2,201,10);
savepoint s3;
insert into employees values(208,'bheem','chhota','2007-11-27',30000,0.2,149,110);
rollback to s2;
select * from employees;

-- Lab 2: Commit part of a transaction after using a savepoint and then rollback the remaining changes

INSERT INTO employees VALUES (133, 'Bob','the','1990-05-11',0.9, 55000,101,10);

SAVEPOINT s1;

UPDATE employees SET salary = 65000 WHERE employee_id = 101;

SAVEPOINT s2;

UPDATE employees SET salary = 5000 WHERE last_name='Ernst';

SAVEPOINT s3;

UPDATE employees SET last_name='mahatma' WHERE employee_id = 205;

COMMIT;

rollback to s2;

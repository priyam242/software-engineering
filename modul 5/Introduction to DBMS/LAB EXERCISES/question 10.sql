-- Lab 1: Insert a few rows into the courses table and use COMMIT to save the changes.

insert into courses values(5,"DIPLOMA","3years"),(6,"B.VOKE","4years"),(7,"ITI","3years");

commit;

-- Lab 2: Insert additional rows, then use ROLLBACK to undo the last insert operation.

insert into courses values(8,"M.COM","3years");
rollback;

-- Lab 3: Create a SAVEPOINT before updating the courses table, and use it to roll back specific changes.

insert into courses  values  (9,"M.A","2years");
savepoint s1;
update courses set course_name="MCA" where course_id=9;
rollback to s1;

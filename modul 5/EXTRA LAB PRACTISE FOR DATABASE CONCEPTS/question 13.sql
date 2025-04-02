-- Lab 3: Use COMMIT after inserting multiple records into the books table, then make another
-- insertion and perform a ROLLBACK.

select * from books;

insert into books values(6,'kayamat','aditya','tops','2014-04-05',45821,'horror'),(7,'kayamat2','aditya','tops','2018-04-05',4821,'horror');
commit;
insert into books values(8,'kayamat3','aditya','tops','2020-04-05',4582,'horror'),(9,'kismat','priyam','somlalit','2018-04-05',4821,'comedy');

rollback;
-- Lab 4: Set a SAVEPOINT before making updates to the members table, perform some
-- updates, and then roll back to the SAVEPOINT.

savepoint s1;
update member set email='ppriyamprajapati@gmail.com' where member_id=1;
savepoint s2;
update member set email='adityaprajapati@gmail.com' where member_id=2;
savepoint s3;
update member set email='alfredprajapati@gmail.com' where member_id=3;

select * from member;
rollback to s2;
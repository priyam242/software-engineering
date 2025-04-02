--  Lab 3: Perform a transaction that includes inserting a new member, setting a SAVEPOINT
-- and rolling back to the savepoint after making updates.

insert into member(member_id,member_name,date_of_membership,email) values
(6,'ronny gajjer','2020-10-28','ronny52@gmail.com'),
(7,'harsh Gupta','2025-12-10','harshgupta12@gmail.com');

savepoint s1;
update member set member_name ="ronney gujjer" where member_id = 6;
rollback to savepoint s1;
commit;

--  Lab 4: Use COMMIT after successfully inserting multiple books into the books table
-- then use ROLLBACK to undo a set of changes made after a savepoint.

insert into books values 
(7,"The Book Thief","ashish","adani","2010-05-05",1060,"science Fiction"),
(8,"tom and jerry","muskan","nirma","2020-05-05",1000,"comdey");
 
commit;
savepoint s1;
update books set publisher = "morlidhar" where book_id = 8;
rollback to savepoint s1;
commit;

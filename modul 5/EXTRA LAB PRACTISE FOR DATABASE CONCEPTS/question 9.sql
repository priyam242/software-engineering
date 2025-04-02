-- Lab 3: Remove all members who joined before 2020 from the members table.

delete from member where date_of_membership <'2020-01-01';
select * from member;

-- Lab 4: Delete all books that have a NULL value in the author column.
 
delete from books where author=NULL;
select * from books;
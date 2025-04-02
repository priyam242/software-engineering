-- Lab 4: Insert three new authors into the authors table, then update the last name of one of
-- the authors.
insert into authors values(1,'priyam','ram','india'),(2,'nikhil','bhatia','india'),
(3,'shubham','thkkar','india'),(4,'alfred','mahatma','africa');
select *  from authors;

update authors set last_name='prajapati' where author_id=1;
-- Lab 5: Delete a book from the books table where the price is higher than $100

delete from books where price<100;
select * from books; 
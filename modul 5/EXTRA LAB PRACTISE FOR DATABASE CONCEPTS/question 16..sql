-- Lab 3: Write a stored procedure to retrieve all books by a particular author.

delimiter &&
create procedure show_book(in book_in varchar(50))
begin
select * from books where author = book_in;
end &&

call show_book("aditya");

-- Lab 4: Write a stored procedure that takes book_id as an argument and returns the price
-- of the book.

delimiter &&
create procedure show_price(in price1 int)
begin
select book_id,price from books where book_id = price1;
end &&

call show_price(4);
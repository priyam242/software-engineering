-- Lab 3: Update the year_of_publication of a book with a specific book_id.

update  books set year_of_publication='2008-01-01' where book_id=4;

select * from books;
-- Lab 4: Increase the price of all books published before 2015 by 10%

select * from books;

UPDATE books SET price = price + (price * 10/100) WHERE year_of_publication < '2015-01-01';
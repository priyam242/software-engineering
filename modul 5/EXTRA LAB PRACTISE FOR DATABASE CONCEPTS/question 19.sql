-- Lab 3: Write a PL/SQL block to insert a new book into the books table and display a
-- confirmation message.

declare 
	b_id books.book_id%type := 6;
	title books.title%type := 'one pices';
	author books.author%type := 'J.D Salinger';
	publisher books.publisher%type := 'prajapati shubham';
	year_of_publication books.year_of_publication%type := '1981';
	price books.price%type := 299;
begin
	insert into books(book_id, title, author, publisher, year_of_publication, price) values (b_id, title, author, publisher, year_of_publication, price);
	dbms_output.put_line('New Book '||b_id||' By '||publisher||'is  Added successfully in The Books Table.');
end;

-- Lab 4: Write a PL/SQL block to display the total number of books in the books table.

declare 
	book number;
begin
	select count(*) into book from books;
	dbms_output.put_line('Total Number Of Books =  '||book);
end;
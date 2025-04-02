-- Lab 3: Write a PL/SQL block using IF-THEN-ELSE to check if a book's price is above $100
-- and print a message accordingly.

declare 
	price number := 109;
begin
    if price > 100 then
		dbms_output.put_line('The Books Price Is Above 100.');
	else
		dbms_output.put_line('The Books Price Is 100 Or Below');
	end if;
end;

-- Lab 4: Use a FOR LOOP in PL/SQL to display the details of all books one by one.

declare
    book_id books.book_id%type;
    title books.title%type;
    author books.author%type;
    publisher books.publisher%type;
    price books.price%type;
    cursor books_cursor is 
        select book_id, title, author, publisher, price from books;
begin
    for book_rec in books_cursor loop
        book_id := book_rec.book_id;
        title := book_rec.title;
        author := book_rec.author;
        publisher := book_rec.publisher;
        price := book_rec.price;
        
        dbms_output.put_line('Book id = ' || book_id);
        dbms_output.put_line('Book Title = ' || title);
        dbms_output.put_line('Book Author Name = ' || author);
        dbms_output.put_line('Book Publisher = ' || publisher); 
        dbms_output.put_line('Book Price = ' || price);
        
    end loop;
end;
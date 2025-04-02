-- Lab 3: Write a PL/SQL block to declare variables for book_id and price, assign values, and display the results.

declare 
b_id number := 7;
price number :=1500;
begin
dbms_output.put_line('The book id = '||b_id);
dbms_output.put_line('The book price = '||price);
end;

-- Lab 4: Write a PL/SQL block using constants and perform arithmetic operations on book prices.
declare 
    discount constant number := 150;
	tax constant number := 0.50;
	price number := 409;
	final_rate number;
begin
    final_rate := price - discount;
	final_rate := final_rate + (final_rate * tax);
	dbms_output.put_line('Origanl Book Price = '||price);
	dbms_output.put_line('Discount = '||discount);
	dbms_output.put_line('Price After Discount = '||(price - discount));
	dbms_output.put_line('Final Price After Tax = '||final_rate);
end;
-- Lab 3: Add a CHECK constraint to ensure that the price of books in the books table is
-- greater than 0.

alter table  books add CONSTRAINT  CHECK (price > 0);

-- Lab 4: Modify the members table to add a UNIQUE constraint on the email column,
-- ensuring that each member has a unique email address.

alter table member modify email varchar(250) unique;
describe member;
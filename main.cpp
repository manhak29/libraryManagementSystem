/*This program creates a basic Library Management System that manages books, members, and transactions. 
It allows adding books and members, recording transactions, and displaying library information. 
The `main` function shows how to use these features with sample data.*/

#include "Library.h"
#include "Book.h"
#include "Member.h"
#include "Transaction.h"
#include <iostream>

int main() {
    Library library;

    // Create and add books
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", "9780743273565");
    Book book2("1984", "George Orwell", "9780451524935");
    library.addBook(book1);
    library.addBook(book2);

    // Create and add members
    Member member1("John Doe", "12345", "johndoe@example.com");
    Member member2("Jane Smith", "67890", "janesmith@example.com");
    library.addMember(member1);
    library.addMember(member2);

    // Record transactions
    Transaction transaction1("12345", "9780743273565", "checkout", "2024-09-03");
    Transaction transaction2("67890", "9780451524935", "return", "2024-09-10");
    library.addTransaction(transaction1);
    library.addTransaction(transaction2);

    // Display books, members, and transactions
    library.displayBooks();
    library.displayMembers();
    library.displayTransactions();

    return 0;
}

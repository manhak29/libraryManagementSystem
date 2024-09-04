#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::addMember(const Member& member) {
    members.push_back(member);
}

void Library::addTransaction(const Transaction& transaction) {
    transactions.push_back(transaction);
}

void Library::displayBooks() const {
    std::cout << "Books in Library:\n";
    for (const auto& book : books) {
        book.display();
    }
}

void Library::displayMembers() const {
    std::cout << "Library Members:\n";
    for (const auto& member : members) {
        member.display();
    }
}

void Library::displayTransactions() const {
    std::cout << "Library Transactions:\n";
    for (const auto& transaction : transactions) {
        transaction.display();
    }
}

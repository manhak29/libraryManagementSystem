#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "Member.h"
#include "Transaction.h"
#include <vector>

/**
 * @class Library
 * @brief Manages books, members, and transactions within the library.
 */
class Library {
private:
    std::vector<Book> books;
    std::vector<Member> members;
    std::vector<Transaction> transactions;

public:
    /**
     * @brief Adds a book to the library's collection.
     * @param book The book to add.
     */
    void addBook(const Book& book);

    /**
     * @brief Adds a member to the library.
     * @param member The member to add.
     */
    void addMember(const Member& member);

    /**
     * @brief Records a transaction in the library.
     * @param transaction The transaction to record.
     */
    void addTransaction(const Transaction& transaction);

    /**
     * @brief Displays all books in the library.
     */
    void displayBooks() const;

    /**
     * @brief Displays all members of the library.
     */
    void displayMembers() const;

    /**
     * @brief Displays all transactions in the library.
     */
    void displayTransactions() const;
};

#endif // LIBRARY_H

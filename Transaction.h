#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

/**
 * @class Transaction
 * @brief Represents a transaction in the library, which could be a book checkout or return.
 */
class Transaction {
private:
    std::string memberID;
    std::string bookISBN;
    std::string transactionType; // e.g., "checkout" or "return"
    std::string date; // Date of the transaction

public:
    /**
     * @brief Constructor to initialize a Transaction object.
     * @param memberID ID of the member involved in the transaction.
     * @param bookISBN ISBN of the book involved in the transaction.
     * @param transactionType Type of transaction ("checkout" or "return").
     * @param date Date of the transaction.
     */
    Transaction(const std::string& memberID, const std::string& bookISBN, const std::string& transactionType, const std::string& date);

    /**
     * @brief Gets the member ID involved in the transaction.
     * @return Member ID.
     */
    std::string getMemberID() const;

    /**
     * @brief Gets the ISBN of the book involved in the transaction.
     * @return Book ISBN.
     */
    std::string getBookISBN() const;

    /**
     * @brief Gets the type of transaction.
     * @return Transaction type.
     */
    std::string getTransactionType() const;

    /**
     * @brief Gets the date of the transaction.
     * @return Date of the transaction.
     */
    std::string getDate() const;

    /**
     * @brief Displays the transaction's information.
     */
    void display() const;
};

#endif // TRANSACTION_H

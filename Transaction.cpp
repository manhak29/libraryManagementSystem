#include "Transaction.h"
#include <iostream>

Transaction::Transaction(const std::string& memberID, const std::string& bookISBN, const std::string& transactionType, const std::string& date)
    : memberID(memberID), bookISBN(bookISBN), transactionType(transactionType), date(date) {}

std::string Transaction::getMemberID() const {
    return memberID;
}

std::string Transaction::getBookISBN() const {
    return bookISBN;
}

std::string Transaction::getTransactionType() const {
    return transactionType;
}

std::string Transaction::getDate() const {
    return date;
}

void Transaction::display() const {
    std::cout << "Member ID: " << memberID << ", Book ISBN: " << bookISBN
              << ", Transaction Type: " << transactionType << ", Date: " << date << std::endl;
}

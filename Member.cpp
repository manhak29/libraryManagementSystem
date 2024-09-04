#include "Member.h"
#include <iostream>

Member::Member(const std::string& name, const std::string& memberID, const std::string& contactInfo)
    : name(name), memberID(memberID), contactInfo(contactInfo) {}

std::string Member::getName() const {
    return name;
}

std::string Member::getID() const {
    return memberID;
}

std::string Member::getContactInfo() const {
    return contactInfo;
}

void Member::setContactInfo(const std::string& contactInfo) {
    this->contactInfo = contactInfo;
}

void Member::display() const {
    std::cout << "Name: " << name << ", Member ID: " << memberID
              << ", Contact Info: " << contactInfo << std::endl;
}

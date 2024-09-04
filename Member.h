#ifndef MEMBER_H
#define MEMBER_H

#include <string>

/**
 * @class Member
 * @brief Represents a member of the library with a name, ID, and optional contact info.
 */
class Member {
private:
    std::string name;
    std::string memberID;
    std::string contactInfo; // Optional: phone number or email

public:
    /**
     * @brief Constructor to initialize a Member object.
     * @param name Name of the member.
     * @param memberID Unique ID for the member.
     * @param contactInfo Contact information of the member (optional).
     */
    Member(const std::string& name, const std::string& memberID, const std::string& contactInfo = "");

    /**
     * @brief Gets the name of the member.
     * @return Name of the member.
     */
    std::string getName() const;

    /**
     * @brief Gets the member ID.
     * @return Member ID.
     */
    std::string getID() const;

    /**
     * @brief Gets the contact information of the member.
     * @return Contact information.
     */
    std::string getContactInfo() const;

    /**
     * @brief Sets the contact information of the member.
     * @param contactInfo New contact information.
     */
    void setContactInfo(const std::string& contactInfo);

    /**
     * @brief Displays the member's information.
     */
    void display() const;
};

#endif // MEMBER_H

#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum UserTypes {NORMAL,SUPERUSER};

class User
{
    private:
        string name; // Name of User
        string alias; // Alias of User
        string password; // User Password
        int UserType; // UserType
        
    public:
        // User Constructor
        User();

        // Set Username
        void setUsername(string u);

        // Set Alias
        void setAlias(string a);

        // Set Password
        void setPassword(string p);

        // Set UserType
        void setUserType(int i);

        // Retrieves User's Name
        string getName() const;

        // Retrieves User's Alias
        string getAlias() const;

        // Retrieves User's Password
        string getPassword() const;

        // Retrieve UserType
        int getUserType() const;

        // Validate User's name
        bool validateUsername(string n) const;

        // Validate User's password
        bool validatePassword(string p) const;

        // Welcome Prompt
        friend ostream& operator <<(ostream &outputStream, const User &user);
};

class SuperUser : public User
{
    public:
        // Super User Constructor
        SuperUser();

};

#endif // USER_H
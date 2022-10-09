#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class User
{
    private:
        string name; // Name of User
        string alias; // Alias of User
        string password; // User Password

    public:
        User(); 
        // Retrieves User's Name
        string getName() const;

        // Retrieves User's Alias
        string getAlias() const;

        // Retrieves User's Password
        string getPassword() const;

        // Validate User's name
        bool validateUsername(string n) const;

        // Validate User's password
        bool validatePassword(string p) const;
};

#endif // USER_H
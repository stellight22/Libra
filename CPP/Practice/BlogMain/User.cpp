#include <iostream>
#include <string>
#include <vector>

#include "User.h"

using namespace std;

// User Constructor
User::User()
{
    UserType = NORMAL;
}

// Set Username
void User::setUsername(string u)
{
    this->name = u;
}

// Set Alias
void User::setAlias(string a)
{
    this->alias = a;
}

// Set Password
void User::setPassword(string p)
{
    this->password = p;
}

// Set UserType
void User::setUserType(int i)
{
    this->UserType = i;
}

// Retrieves User's Name
string User::getName() const 
{
    return this->name;
}

// Retrieves User's Alias
string User::getAlias() const 
{
    return this->alias;
}

// Retrieves User's Password
string User::getPassword() const 
{
    return this->password;
}

// Validate User's name
bool User::validateUsername(string n) const
{
    return name == n;
}

// Retrieve UserType
int User::getUserType() const
{
    return this->UserType;
}

// Validate User's password
bool User::validatePassword(string p) const
{
    return password == p;
}

// User Constructor
SuperUser::SuperUser()
{
    setUserType(SUPERUSER);
}   


// User: Welcome Prompt
ostream& operator <<(ostream &outputStream, const User &user)
{
    if(user.getUserType() == SUPERUSER)
    {
        cout << endl;
        outputStream << "**************" << endl;
        outputStream << "  SUPER USER  " << endl;
        outputStream << "**************" << endl;
        cout << endl;
        outputStream<<"Hello,"<< user.getName() << endl;
    }
    if(user.getUserType() == NORMAL)
    {
        outputStream << endl;
        outputStream <<"Hello,"<< user.getName() << endl;
    }

    return outputStream;
}

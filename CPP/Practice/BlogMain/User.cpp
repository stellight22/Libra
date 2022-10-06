#include <iostream>
#include <string>
#include <vector>

#include "User.h"

using namespace std;

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

// Validate User's password
bool User::validatePassword(string p) const
{
    return password == p;
}
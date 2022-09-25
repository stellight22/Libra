#include <iostream>
#include <string>
#include <vector>

#include "Post.h"

using namespace std;

Post::Post(string t, string txt, string u )
{
    this->Title = t; 
    this->Text = txt; 
    this->User = u;
}

//Mutator function for Title
void Post::setTitle(string t) 
{
    this->Title = t;
}

//Accessor function for Title
string Post::getTitle() const
{
    return this->Title;
}

//Mutator function for text
void Post::setText(string txt)
{
    this->Text = txt;
}

//Accessor function for text
string Post::getText() const
{
    return this->Text;
}

//Mutator function for user
void Post::setUser(string u)
{
    this->User = u;
}

//Accessor function for user
string Post::getUser() const
{
    return this->User;
}

// Post Overloads

//Will print the post information when interacted with Post class instance
ostream& operator <<(ostream &outputStream, const Post &p)
{
    outputStream<<"Title : "<<p.Title<<endl;
    outputStream<<"By : "<<p.User<<endl;
    outputStream<<"Text : "<<p.Text<<endl;
    return outputStream;
}

//Will be used to compare 2 post objects
bool operator ==(const Post &otherPost1, const Post &otherPost2)
{
    return otherPost1.Title == otherPost2.Title;
}

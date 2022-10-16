#include <iostream>
#include <string>
#include <vector>

#include "Post.h"

using namespace std;

// Constructor
Post::Post(){}

// Constructor
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

// Update Tracking
void Post::updateReaction(int r)
{
    this->react[r-1]+=1;
}

// Post Overloads

//Will print the post information when interacted with Post class instance
ostream& operator <<(ostream &outputStream, const Post &p)
{
    outputStream<<"Title : "<<p.Title<<endl;
    outputStream<<"By : "<<p.User<<endl;
    outputStream<<"Text : "<<p.Text<<endl;
    
    if (p.react[0] == 0 && p.react[1] == 0 && p.react[2] == 0 && p.react[3] == 0)
    {
        outputStream<< "There are no posted responses to this." << endl;
    }
    else
    {
        outputStream<<"Num Love    = "<<p.react[0]<<endl;
        outputStream<<"Num Like    = "<<p.react[1]<<endl;
        outputStream<<"Num Dislike = "<<p.react[2]<<endl;
        outputStream<<"Num Hate    = "<<p.react[3]<<endl;
    }
    return outputStream;
}

//Will be used to compare 2 post objects
bool operator ==(const Post &otherPost1, const Post &otherPost2)
{
    return otherPost1.Title == otherPost2.Title;
}

#include <iostream>
#include <string>
#include <vector>

#include "Post.h"

using namespace std;

Post::Post()
{
    this->love = 0;
    this->like = 0;
    this->dislike =0;
    this->hate = 0;
}

Post::Post(string t, string txt, string u )
{
    this->Title = t; 
    this->Text = txt; 
    this->User = u;
    this->love = 0;
    this->like = 0;
    this->dislike =0;
    this->hate = 0;
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
string Post::updateReaction(int r)
{
    switch(r)
    {
        case 1:
            this->love+=1;
            break;
        case 2:
            this->like+=1;
            break;
        case 3:
            this->dislike+=1;
            break;
        case 4:
            this->hate+=1;
            break;
    }
}

// Post Overloads

//Will print the post information when interacted with Post class instance
ostream& operator <<(ostream &outputStream, const Post &p)
{
    outputStream<<"Title : "<<p.Title<<endl;
    outputStream<<"By : "<<p.User<<endl;
    outputStream<<"Text : "<<p.Text<<endl;
    
    if (p.love == 0 && p.like == 0 && p.dislike == 0 && p.hate == 0)
    {
        outputStream<< "There are no posted responses to this." << endl;
    }
    else
    {
        outputStream<<"Num Love    = "<<p.love<<endl;
        outputStream<<"Num Like    = "<<p.like<<endl;
        outputStream<<"Num Dislike = "<<p.dislike<<endl;
        outputStream<<"Num Hate    = "<<p.hate<<endl;
    }
    return outputStream;
}

//Will be used to compare 2 post objects
bool operator ==(const Post &otherPost1, const Post &otherPost2)
{
    return otherPost1.Title == otherPost2.Title;
}

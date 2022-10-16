#include <iostream>
#include <string>
#include <vector>

#include "Post.h"
#include "Area.h" 

using namespace std;

// Return the name of the Area
string Area::getName() const 
{
    return this->Name;
}

// Mutator function for description
void Area::setDesc(string d)
{
    this->description = d;
}

// Accessor function for description
string Area::getDesc() const
{
    return this->description;
}

// Mutator function for name
void Area::setName(string nm)
{
    this->Name = nm;
}

// Returns the size of the Posts vector
int Area::getPostSize() const
{
    return this->Posts.size();
}


// Add post function
void Area::AddPost(Post p)
{
    this->Posts.push_back(p);
}

// Delte post function
void Area::deletePost(int index)
{
    this->Posts.erase(Posts.begin()+index);
}

// Edit post function
void Area::EditPost(int postId, string title, string text, string user)
{
    this->Posts[postId].setTitle(title);
    this->Posts[postId].setText(text);
    this->Posts[postId].setUser(user);
}

// Track Reaction
void Area::reactionCounter(int p, int r)
{
    switch(r)
    {
        case 1:
            this->Posts[p].love+=1;
            break;
        case 2:
            this->Posts[p].like+=1;
            break;
        case 3:
            this->Posts[p].dislike+=1;
            break;
        case 4:
            this->Posts[p].hate+=1;
            break;
    };
}

// Get post function
bool Area::getPost(int i, Post &p) const
{
    if (i < this->Posts.size()) 
    {
        //an instance of class Post (p) is set to a Post instance at index(i) within the vector of the post class instances(Posts)
        p = this->Posts[i]; 
        return true; 
    } 
    else
    { 
        return false; 
    }
}
// Will print out area name and description when interacting with instance of Area
ostream& operator <<(ostream &outputStream, const Area &area)
{
    outputStream<<"Area Name : "<<area.Name<<endl;
    outputStream<<"Area Description : "<<area.description<<endl;
    return outputStream;
}
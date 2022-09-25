#include <iostream>
#include <string>
#include <vector>

#include "Area.h"
#include "Post.h"

using namespace std;

// Return the name of the Area
string Area::getName() const 
{
    return this->Name;
}

//Mutator function for description
void Area::setDesc(string d)
{
    this->description = d;
}

//Accessor function for description
string Area::getDesc() const
{
    return this->description;
}

//Mutator function for name
void Area::setName(string nm)
{
    this->Name = nm;
}

//Returns the size of the Posts vector
int Area::getPostSize() const
{
    return this->Posts.size();
}

// Add post function
void Area::AddPost(Post p)
{
    this->Posts.push_back(p);
}

//Delte post function
void Area::deletePost(int index)
{
    this->Posts.erase(Posts.begin()+index);
}

//edit post function
void Area::EditPost(int postId, string title, string text, string user)
{
    this->Posts[postId].setTitle(title);
    this->Posts[postId].setText(text);
    this->Posts[postId].setUser(user);
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

// Area Overloads

//Will print out area name and description when interacting with instance of Area
ostream& operator <<(ostream &outputStream, const Area &area)
{
    outputStream<<"Area Name : "<<area.Name<<endl;
    outputStream<<"Area Description : "<<area.description<<endl;
    return outputStream;
}
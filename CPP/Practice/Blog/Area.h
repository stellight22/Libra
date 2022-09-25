#ifndef AREA_H
#define AREA_H

#include <iostream>
#include <string>
#include <vector>

#include "Post.h"

using namespace std;

class Area
{
    private:
        string Name; // Name of Area
        vector <Post> Posts;// Vector of posts
        string description;

    public:
        // Return the name of the Area
        string getName() const;

        //Mutator function for description
        void setDesc(string d);

        //Accessor function for description
        string getDesc() const;

        //Mutator function for name
        void setName(string nm);

        //Returns the size of the Posts vector
        int getPostSize() const;

        // Add post function
        void AddPost(Post p);

        //Delte post function
        void deletePost(int index);

        //edit post function
        void EditPost(int postId, string title, string text, string user);

        // Get post function
        bool getPost(int i, Post &p) const;

        //Will print out area name and description when interacting with instance of Area
        friend ostream& operator <<(ostream &outputStream, const Area &area);
};

#endif // AREA_H

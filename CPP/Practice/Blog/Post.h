#ifndef POST_H
#define POST_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Post
{
    private:
        string Title; // Title
        string Text; // Text
        string User; // User

    public:
        // Constructor
        Post(){ };
        Post(string t, string txt, string u );

        // Mutator function for Title 
        void setTitle(string t);

        //Accessor function for title
        string getTitle() const;

        //Mutator function for text
        void setText(string txt);

        //Accessor function for text
        string getText() const;

        //Mutator function for user
        void setUser(string u);

        //Accessor function for user
        string getUser() const;

        //Will print the post information when interacted with Post class instance
        friend ostream& operator <<(ostream &outputStream, const Post &p);

        //Will be used to compare 2 post objects
        friend bool operator ==(const Post &otherPost1, const Post &otherPost2);
};

#endif //POST_H
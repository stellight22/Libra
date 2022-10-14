./Area.h                                                                                            000666  000000  000000  00000002405 14321704441 010407  0                                                                                                    ustar 00                                                                000000  000000                                                                                                                                                                         #ifndef AREA_H
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

        // Mutator function for description
        void setDesc(string d);

        // Accessor function for description
        string getDesc() const;

        // Mutator function for name
        void setName(string nm);

        // Returns the size of the Posts vector
        int getPostSize() const;

        // Add post function
        void AddPost(Post p);

        // Delte post function
        void deletePost(int index);

        // Edit post function
        void EditPost(int postId, string title, string text, string user);

        // Track Reaction
        void reactionCounter(int p, int r);

        // Get post function
        bool getPost(int i, Post &p) const;

        // Will print out area name and description when interacting with instance of Area
        friend ostream& operator <<(ostream &outputStream, const Area &area);

};

#endif // AREA_H
                                                                                                                                                                                                                                                           ./Data.txt                                                                                          000666  000000  000000  00000004126 14321705725 011010  0                                                                                                    ustar 00                                                                000000  000000                                                                                                                                                                         5
Area Index : 0
Area Name : Comp Sci
Area Description : This Area talks about computers.

******************
Post Index : 0
Title : I love programming
By : Tom
Text : Programming is so much fun.
Num Love    = 0
Num Like    = 1
Num Dislike = 0
Num Hate    = 0

******************
Post Index : 1
Title : test title 2
By : B1
Text : test text 2
There are no posted responses to this.

******************
Post Index : 2
Title : test title
By : B1
Text : test text
There are no posted responses to this.

******************
Area Index : 1
Area Name : Current Events
Area Description : This Area talks about the latest community news.

******************
Post Index : 0
Title : Picnic Saturday
By : Sue
Text : Join us at the park for a picnic on Saturday
There are no posted responses to this.

******************
Area Index : 2
Area Name : Foodie Updates
Area Description : This Area is made for the food enthusiasts.

******************
Post Index : 0
Title : Chocolate Shortage
By : Choco-lover
Text : Chocolate is in danger of extinction.
There are no posted responses to this.

******************
Post Index : 1
Title : Paleo Diet
By : Sushi-lover
Text : Eat lots of fish.
There are no posted responses to this.

******************
Area Index : 3
Area Name : Travel Updates
Area Description : This Area is made for the travel enthusiasts.

******************
Post Index : 0
Title : COVID is OVER
By : iloveparis
Text : Travel without masks!
There are no posted responses to this.

******************
Post Index : 1
Title : Portuguese Summer
By : miamor
Text : Lots of group travel deals inside.
There are no posted responses to this.

******************
Area Index : 4
Area Name : Friends Updates
Area Description : This Area is made for the fans of the show Friends.

******************
Post Index : 0
Title : Stayed at home
By : Eggy
Text : went to the park
There are no posted responses to this.

******************
Post Index : 1
Title : Home
By : Eggy
Text : Stayed Home
There are no posted responses to this.

******************
                                                                                                                                                                                                                                                                                                                                                                                                                                          ./makefile                                                                                          000666  000000  000000  00000000472 14321706022 011065  0                                                                                                    ustar 00                                                                000000  000000                                                                                                                                                                         output:  User.o Post.o Area.o BlogPart6.o
	g++ -std=c++11 User.o Post.o Area.o BlogPart6.o -o eggy

User.o: User.cpp User.h
	g++ -c User.cpp

Post.o: Post.cpp Post.h
	g++ -c Post.cpp

Area.o: Area.cpp Area.h
	g++ -c Area.cpp

BlogPart6.o: BlogPart6.cpp
	g++ -c BlogPart6.cpp

clean:
	rm *.o eggy
	                                                                                                                                                                                                      ./output.txt                                                                                        000666  000000  000000  00000020427 14321706004 011470  0                                                                                                    ustar 00                                                                000000  000000                                                                                                                                                                         cho@lingprog7.cs.fsu.edu:~/COP3330/Assignment7> make
g++ -c User.cpp
g++ -c Post.cpp
g++ -c Area.cpp
g++ -c BlogPart6.cpp
g++ -std=c++11 User.o Post.o Area.o BlogPart6.o -o eggy
cho@lingprog7.cs.fsu.edu:~/COP3330/Assignment7> eggy 
Login:
Name: Please enter in a string with at least 1 character and at most 10 characters.
BigB 
Password: Please enter in a string with at least 1 character and at most 20 characters.
1
Login: 
Name: Please enter in a string with at least 1 character and at most 10 characters.
BigBo
Password: Please enter in a string with at least 1 character and at most 20 characters.
222222

**************
  SUPER USER  
**************

Hello,BigBo

Welcome to my Blog 

Please select from the following options...
 A - Display Blog areas
 B - Display all posts for a blog
 C - Add a post to an area
 D - Display a post for a blog
 E - Edit a post for a blog
 F - Delete a post from a blog
 G - Love/Like/Dislike/Hate a post
 Q - Quit

What would you like to do?
a
Display blog areas...

Area Index : 0
Area Name : Comp Sci
Area Description : This Area talks about computers.
******************

Area Index : 1
Area Name : Current Events
Area Description : This Area talks about the latest community news.
******************

Area Index : 2
Area Name : Foodie Updates
Area Description : This Area is made for the food enthusiasts.
******************

Area Index : 3
Area Name : Travel Updates
Area Description : This Area is made for the travel enthusiasts.
******************

Area Index : 4
Area Name : Friends Updates
Area Description : This Area is made for the fans of the show Friends.
******************

Please select from the following options...
 A - Display Blog areas
 B - Display all posts for a blog
 C - Add a post to an area
 D - Display a post for a blog
 E - Edit a post for a blog
 F - Delete a post from a blog
 G - Love/Like/Dislike/Hate a post
 Q - Quit

What would you like to do?
b
Display all posts for a blog...
Please enter in a Blog Area Index
0

Posts for Comp Sci
Post Index : 0
Title : I love programming
By : Tom
Text : Programming is so much fun.
There are no posted responses to this.

******************
Post Index : 1
Title : C++ versus Python
By : Sally
Text : I like C++ more than Python.
There are no posted responses to this.

******************

Please select from the following options...
 A - Display Blog areas
 B - Display all posts for a blog
 C - Add a post to an area
 D - Display a post for a blog
 E - Edit a post for a blog
 F - Delete a post from a blog
 G - Love/Like/Dislike/Hate a post
 Q - Quit

What would you like to do?
c
Add a post to a blog...
Please enter in a Blog Area Index
0
Please enter in a Post Title
Title must contain at least 1 non white space character and at most 20 non white space characters
test title
Please enter in the text ...
Text must contain at least 1 non white space character and at most 500 non white space characters
test text
Post successfully added.

Please select from the following options...
 A - Display Blog areas
 B - Display all posts for a blog
 C - Add a post to an area
 D - Display a post for a blog
 E - Edit a post for a blog
 F - Delete a post from a blog
 G - Love/Like/Dislike/Hate a post
 Q - Quit

What would you like to do?
b
Display all posts for a blog...
Please enter in a Blog Area Index
0

Posts for Comp Sci
Post Index : 0
Title : I love programming
By : Tom
Text : Programming is so much fun.
There are no posted responses to this.

******************
Post Index : 1
Title : C++ versus Python
By : Sally
Text : I like C++ more than Python.
There are no posted responses to this.

******************
Post Index : 2
Title : test title
By : B1
Text : test text
There are no posted responses to this.

******************

Please select from the following options...
 A - Display Blog areas
 B - Display all posts for a blog
 C - Add a post to an area
 D - Display a post for a blog
 E - Edit a post for a blog
 F - Delete a post from a blog
 G - Love/Like/Dislike/Hate a post
 Q - Quit

What would you like to do?
e
Edit a post for a blog...
Please enter in a Blog Area Index
0
Please enter in a Post Index
1

Post Index : 1
Title : C++ versus Python
By : Sally
Text : I like C++ more than Python.
There are no posted responses to this.

******************
Please enter in a Post Title
Title must contain at least 1 non white space character and at most 20 non white space characters
test title 2
Please enter in the text ...
Text must contain at least 1 non white space character and at most 500 non white space characters
test text 2
Post Editted.

Please select from the following options...
 A - Display Blog areas
 B - Display all posts for a blog
 C - Add a post to an area
 D - Display a post for a blog
 E - Edit a post for a blog
 F - Delete a post from a blog
 G - Love/Like/Dislike/Hate a post
 Q - Quit

What would you like to do?
b
Display all posts for a blog...
Please enter in a Blog Area Index
0

Posts for Comp Sci
Post Index : 0
Title : I love programming
By : Tom
Text : Programming is so much fun.
There are no posted responses to this.

******************
Post Index : 1
Title : test title 2
By : B1
Text : test text 2
There are no posted responses to this.

******************
Post Index : 2
Title : test title
By : B1
Text : test text
There are no posted responses to this.

******************

Please select from the following options...
 A - Display Blog areas
 B - Display all posts for a blog
 C - Add a post to an area
 D - Display a post for a blog
 E - Edit a post for a blog
 F - Delete a post from a blog
 G - Love/Like/Dislike/Hate a post
 Q - Quit

What would you like to do?
q
Bye...
End of appending to file.
cho@lingprog7.cs.fsu.edu:~/COP3330/Assignment7> eggy
Login: 
Name: Please enter in a string with at least 1 character and at most 10 characters.
Bo1 
Password: Please enter in a string with at least 1 character and at most 20 characters.
2222

Hello,Bo1

Welcome to my Blog 

Please select from the following options...
 A - Display Blog areas
 B - Display all posts for a blog
 C - Add a post to an area
 D - Display a post for a blog
 E - Edit a post for a blog
 F - Delete a post from a blog
 G - Love/Like/Dislike/Hate a post
 Q - Quit

What would you like to do?
b
Display all posts for a blog...
Please enter in a Blog Area Index
0

Posts for Comp Sci
Post Index : 0
Title : I love programming
By : Tom
Text : Programming is so much fun.
There are no posted responses to this.

******************
Post Index : 1
Title : test title 2
By : B1
Text : test text 2
There are no posted responses to this.

******************
Post Index : 2
Title : test title
By : B1
Text : test text
There are no posted responses to this.

******************

Please select from the following options...
 A - Display Blog areas
 B - Display all posts for a blog
 C - Add a post to an area
 D - Display a post for a blog
 E - Edit a post for a blog
 F - Delete a post from a blog
 G - Love/Like/Dislike/Hate a post
 Q - Quit

What would you like to do?
g
Love/Like/Dislike/Hate a post
Please enter in a Blog Area Index
0
Please enter in a Post Index
0

Select
1 = Love
2 = Like
3 = Dislike
4 = Hate
Please enter a valid reaction
1
Response to Post saved

Please select from the following options...
 A - Display Blog areas
 B - Display all posts for a blog
 C - Add a post to an area
 D - Display a post for a blog
 E - Edit a post for a blog
 F - Delete a post from a blog
 G - Love/Like/Dislike/Hate a post
 Q - Quit

What would you like to do?
d
Display a post for a blog...
Please enter in a Blog Area Index
0
Please enter in a Post Index
0

Post Index : 0
Title : I love programming
By : Tom
Text : Programming is so much fun.
Num Love    = 0
Num Like    = 1
Num Dislike = 0
Num Hate    = 0

******************

Please select from the following options...
 A - Display Blog areas
 B - Display all posts for a blog
 C - Add a post to an area
 D - Display a post for a blog
 E - Edit a post for a blog
 F - Delete a post from a blog
 G - Love/Like/Dislike/Hate a post
 Q - Quit

What would you like to do?
q
Bye...
End of appending to file.                                                                                                                                                                                                                                         ./Post.cpp                                                                                          000666  000000  000000  00000003516 14321704437 011030  0                                                                                                    ustar 00                                                                000000  000000                                                                                                                                                                         #include <iostream>
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
                                                                                                                                                                                  ./Post.h                                                                                            000666  000000  000000  00000002225 14321704435 010467  0                                                                                                    ustar 00                                                                000000  000000                                                                                                                                                                         #ifndef POST_H
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
        Post();
        Post(string t, string txt, string u );

        // Reaction Tracking
        int love,like,dislike,hate;

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

#endif //POST_H                                                                                                                                                                                                                                                                                                                                                                           ./User.cpp                                                                                          000666  000000  000000  00000003311 14321704433 011006  0                                                                                                    ustar 00                                                                000000  000000                                                                                                                                                                         #include <iostream>
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
                                                                                                                                                                                                                                                                                                                       ./User.h                                                                                            000666  000000  000000  00000002511 14321704432 010453  0                                                                                                    ustar 00                                                                000000  000000                                                                                                                                                                         #ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum UserTypes {NORMAL,SUPERUSER};

class User
{
    private:
        string name; // Name of User
        string alias; // Alias of User
        string password; // User Password
        int UserType; // UserType
        
    public:
        // User Constructor
        User();

        // Set Username
        void setUsername(string u);

        // Set Alias
        void setAlias(string a);

        // Set Password
        void setPassword(string p);

        // Set UserType
        void setUserType(int i);

        // Retrieves User's Name
        string getName() const;

        // Retrieves User's Alias
        string getAlias() const;

        // Retrieves User's Password
        string getPassword() const;

        // Retrieve UserType
        int getUserType() const;

        // Validate User's name
        bool validateUsername(string n) const;

        // Validate User's password
        bool validatePassword(string p) const;

        // Welcome Prompt
        friend ostream& operator <<(ostream &outputStream, const User &user);
};

class SuperUser : public User
{
    public:
        // Super User Constructor
        SuperUser();

};

#endif // USER_H                                                                                                                                                                                       ./BlogPart6.cpp                                                                                     000666  000000  000000  00000041056 14321706153 011701  0                                                                                                    ustar 00                                                                000000  000000                                                                                                                                                                         //////////////////////////////////////////////////////
// Class Header
//////////////////////////////////////////////////////
/*
 * Name: Ahyeon Cho
 * Date: 10/12/2022
 * Section: COP3330-11
 * Assignment: Module 7 Assignment
 * Due Date: 10/12/2022
 * About this project: This project implements enum and inheritance
 * Assumptions: Assumes correct user input
 * All work below was performed by Ahyeon Cho
 * */

//////////////////////////////////////////////////////
// Table of Contents
//// Program Headers
//// Global Constants
//// Classes
//// Friendly Overloads
//// String Functions
//// Menu Functions
//// Blog Validation Functions
//// User Login Functions
//// Data Upload
//// Data Offload
//// User Action Functions
//////// Main
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// Program Headers
//////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>

using namespace std;

#include "Area.h"
#include "Post.h"
#include "User.h"

//////////////////////////////////////////////////////
// Global Constants
//////////////////////////////////////////////////////

// Number of Areas
const int NUM_AREAS = 5; 
const int NUM_USERS = 7;

// Whitespace constants
const std::string WHITESPACE = " \n\r\t\f\v";


////////////////////////////////////////
// String Functions
////////////////////////////////////////
// Left trim - remove all white space characters on the left
string ltrim(const std::string &s)
{
    size_t start = s.find_first_not_of(WHITESPACE);
    return (start == std::string::npos) ? "" : s.substr(start);
}

// Right trim - remove all white space characters on the right
string rtrim(const std::string &s)
{
    size_t end = s.find_last_not_of(WHITESPACE);
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}

// Trim - remove all white space characters on the left or right
string trim(const std::string &s)
{
    return rtrim(ltrim(s));
}


////////////////////////////////////////
// Menu Functions
////////////////////////////////////////

// Display Menu
void displayMenu()
{
    // Display menu options to user
    cout << endl;
    cout << "Please select from the following options..." << endl;
    cout << " A - Display Blog areas" << endl;
    cout << " B - Display all posts for a blog" << endl;
    cout << " C - Add a post to an area" << endl;
    cout << " D - Display a post for a blog" << endl; 
    cout << " E - Edit a post for a blog" << endl;
    cout << " F - Delete a post from a blog" << endl;
    cout << " G - Love/Like/Dislike/Hate a post" << endl;
    cout << " Q - Quit" << endl;
}

// Display Blog Area
void DisplayBlogAreas(vector<Area> *areas)
{
    //user has selected to display blog areas
    for (int i = 0; i < areas->size(); i++) 
    {
        cout << endl;
        cout << "Area Index : " << i << endl;
        cout << areas->at(i);
        cout << "******************" << endl;
   
    }

}

// Display Post Area
void DisplayPostsABlog(Area a)
{
    cout << endl;
    cout << "Posts for " << a.getName() << endl;

    // User has selected to display blog areas
    for (int i = 0; i < a.getPostSize(); i++) 
    {
        Post p;
        bool found = a.getPost(i, p);
        if (found) {
            cout << "Post Index : " << i << endl;
            cout << p << endl;
            cout << "******************" << endl;
        }
    }

}


// Display Post
void DisplayPost(vector<Area> *areas, int areaID, int postID)
{
    Post p;

    bool found = areas->at(areaID).getPost(postID, p);

    if (found)
    {
        cout << endl;
        cout << "Post Index : " << postID << endl;
        cout << p << endl;
        cout << "******************" << endl;
    }
}

////////////////////////////////////////
// Blog Validation Functions
////////////////////////////////////////

// Area Index Validation
int getValidBlogArea(vector<Area> *areas)
{
    int area;
    // Prompt and read in Blog Area Index
    cout << "Please enter in a Blog Area Index" << endl;
    cin >> area;
    // Input validation loop
    while ((area < 0) || (area >= areas->size()))
    {
        cout << "Please re-enter a Blog Area Index" << endl;
        cin >> area;
    }
    return area;
}

// Post Index Validation
int getValidPostIndex(vector<Area> *areas, int areaID)
{
    int post;
    // Prompt and read in Blog Area Index
    cout << "Please enter in a Post Index" << endl;
    cin >> post;

    while (post < 0 || post >= areas->at(areaID).getPostSize() )
    {
        cout << "Please re-enter a Post Index for " << areas->at(areaID).getName() << endl;
        cin >> post;
    }

    return post;
}

bool uniquePostTitle(Area a , Post p)
{
    bool flag = false;
    Post tmp;

    for(int i=0; i < a.getPostSize(); i++)
    {
        a.getPost(i,tmp);

        if (tmp == p)
        {
            cout << "Another post in this blog has an identical title.." << endl;
            cout << "Please create a new unique title.." << endl;
            cout << "Please enter in the title..." << endl;
            return true;
        }
    }

    return false;
}

// Blog Title Validation
string getValidPostTitle(Area a)
{
    Post tmp;
    string title;
    bool flag = true;

    // Prompt and read in Blog Area Index
    cout << "Please enter in a Post Title" << endl;
    cout << "Title must contain at least 1 non white space character and at most 20 non white space characters" << endl;
    // Ignores the last character entered
    cin.ignore();         
    getline(cin, title);
    tmp.setTitle(trim(title));   

    do
    {
        if (tmp.getTitle().length() < 1 || tmp.getTitle().length() > 21 || tmp.getTitle()[0] == ' ' || uniquePostTitle(a,tmp))
        {
            cout << "Title must contain at least 1 non white space character and at most 20 non white space characters" << endl;
            getline(cin,title);
            tmp.setTitle(trim(title));
        }
        else
        {
            flag = false;
        }

    } while (flag == true);
    
    // Return valid Blog Area Index
    return tmp.getTitle();
}

string getValidUsername()
{
    string username;
    bool flag = true;
    // Prompt and read in Blog Area Index
    cout << "Please enter in a Username" << endl;
    cout << "Username must contain at least 1 non white space character and at most 10 non white space characters" << endl;
    getline(cin, username);
    username = trim(username);

    do
    {
        if ((username.length() < 1) || username.length() > 11 || username[0] == ' ')
        {
            cout << "Username must contain at least 1 non white space character and at most 10 non white space characters" << endl;
            getline(cin,username);
            username = trim(username);
        }
        else
        {
            flag = false;
        }

    } while (flag == true);
    
    // Return valid Blog Area Index
    return username;
}

string getValidText()
{
    string text;
    bool flag = true;
    //prompt and read in Blog Area Index
    cout << "Please enter in the text ..." << endl;
    cout << "Text must contain at least 1 non white space character and at most 500 non white space characters" << endl;
    //cin.ignore();
    getline(cin, text);
    text = trim(text);

    do
    {
        if ((text.length() < 1) || (text.length() > 501 ) || (text[0] == ' '))
        {
            cout << "Text must contain at least 1 non white space character and at most 500 non white space characters" << endl;
            getline(cin,text);
            text = trim(text);
        }
        else
        {
            flag = false;
        }

    } while (flag == true);
    
    // Return valid Blog Area Index
    return text;
}

void getValidReaction(vector<Area> *areas, int areaID, int postID)
{
    int input;

    cout << endl;
    cout << "Select" << endl;
    cout << "1 = Love" << endl;
    cout << "2 = Like" << endl;
    cout << "3 = Dislike" << endl;
    cout << "4 = Hate" << endl;
        
    while ((input < 0) || (input >= 4))
    {
        cout << "Please enter a valid reaction" << endl;
        cin >> input;
    }

    Post p;

    bool found = areas->at(areaID).getPost(postID, p);

    if (found)
    {
        areas->at(areaID).reactionCounter(postID,input);
    }
}

////////////////////////////////////////
// User Login Functions
////////////////////////////////////////
void loadUser(vector <User> *u)
{
    string userlist[7][3] = 
    {
        {"Bo1","B1","2222"},
        {"Bo2","B2","2222"},
        {"Bo3","B3","2222"},
        {"Bo4","B4","2222"},
        {"Bo5","B5","2222"},
        {"Bo6","B6","2222"},
        {"Bo7","B7","2222"}
    };

    for (int i=0 ; i < 7 ; i++)
    {
        u->at(i).setUsername(userlist[i][0]);
        u->at(i).setAlias(userlist[i][1]);
        u->at(i).setPassword(userlist[i][2]);
    }

    SuperUser s;
    s.setUsername("BigBo");
    s.setAlias("FavBo");
    s.setPassword("222222");

    u->push_back(s);
}

int userLogin(vector <User> *u)
{
    bool flag = false;
    int j=0;

    do 
    {
        string user;
        string pass;
        cout << "Login: " << endl;
        cout << "Name: Please enter in a string with at least 1 character and at most 10 characters." << endl;
        getline(cin,user);
        cout << "Password: Please enter in a string with at least 1 character and at most 20 characters." << endl;
        getline(cin,pass);

        for (int i=0 ; i < u->size() ; i++)
        {
            if (u->at(i).validateUsername(user) && u->at(i).validatePassword(pass))
            {
                j=0;
                flag = true;
                cout << u->at(i);
            }
        }

    }while(flag == false);

    return j;
}

////////////////////////////////////////
// Data Upload
////////////////////////////////////////
void uploadData(vector <Area> *p)
{
    vector<string> data;
    string line;
  
    ifstream filein ("Data.txt");
  
    if (filein.is_open())
    {
        while ( getline(filein,line) )
        {
            data.push_back(line);
        }
        filein.close();
    }
    else
    {
        cout << "Unable to open file"; 
    } 

    int counter = -1;
    Post tpost;

    for( int i=0; i < data.size(); i++)
    {
        if(data[i].find("Area Index :") != string::npos)
        {
            counter++;
        }
        else if(data[i].find("Area Name :") != string::npos)
        {
            p->at(counter).setName(data[i].substr(data[i].find_first_of(":") + 2, data[i].length()));
        }
        else if(data[i].find("Area Description :") != string::npos)
        {
            p->at(counter).setDesc(data[i].substr(data[i].find_first_of(":") + 2, data[i].length()));
        }
        else if(data[i].find("Title : ") != string::npos)
        {
            tpost.setTitle(data[i].substr(data[i].find_first_of(":") + 2, data[i].length()));
        }
        else if(data[i].find("By : ") != string::npos)
        {
            tpost.setUser(data[i].substr(data[i].find_first_of(":") + 2, data[i].length()));
        }
        else if(data[i].find("Text : ") != string::npos)
        {
            tpost.setText(data[i].substr(data[i].find_first_of(":") + 2, data[i].length()));
            p->at(counter).AddPost(tpost);
        }
    }
}

////////////////////////////////////////
// Data Offload
////////////////////////////////////////
void backupData(vector<Area> *areas)
{
    ofstream fileout;
        
    fileout.open("Data.txt", ios::trunc);

    if (fileout.is_open())
    {
        fileout << areas->size() << endl;

        for (int i = 0; i < areas->size(); i++) 
        {
            fileout << "Area Index : " << i << endl;
            fileout << areas->at(i) << endl;
            fileout << "******************" << endl;

            for (int j = 0; j < areas->at(i).getPostSize(); j++) 
            {
                Post p;
                bool found = areas->at(i).getPost(j, p);
                if (found) {
                    fileout << "Post Index : " << j << endl;
                    fileout << p << endl;
                    fileout << "******************" << endl;
                }
            }
        }


    }
    else 
    {
        cout << "Unable to open file";
    }

    fileout.close( );

    cout << "End of appending to file.\n";
}

////////////////////////////////////////
// User Action Functions
////////////////////////////////////////

// User Prompt
void promptAction(string &strCh) 
{
    //display menu options to screen
    displayMenu();
    cout << endl;

    //prompt user for choice
    cout << "What would you like to do?" << endl;
    cin >> strCh;
}

// Implement Users Action
void implementAction(vector<Area> *areas, User user, string strCh)
{
    // If user selected A
    if ((strCh == "A") || (strCh == "a"))
    {
        cout << "Display blog areas..." << endl;

        DisplayBlogAreas(areas);
    }
    // If user selected B
    else if ((strCh == "B") || (strCh == "b"))
    {
        cout << "Display all posts for a blog..." << endl;
        int areaID = getValidBlogArea(areas);
        DisplayPostsABlog(areas->at(areaID));
    }
    // If user selected C
    else if ((strCh == "C") || (strCh == "c"))
    {
        cout << "Add a post to a blog..." << endl;

        int areaID = getValidBlogArea(areas);

        Post temp;
        temp.setTitle(getValidPostTitle(areas->at(areaID)));
        temp.setUser(user.getAlias());
        temp.setText(getValidText());

        areas->at(areaID).AddPost(temp);
        cout << "Post successfully added." << endl;
    }
    else if ((strCh == "D") || (strCh == "d"))
    {
        cout << "Display a post for a blog..." << endl;

        int areaID = getValidBlogArea(areas);

        int postId = getValidPostIndex(areas, areaID);

        DisplayPost(areas, areaID, postId);

    }
    // If User selects option E: to edit EXISTING post
    else if ((strCh == "E") || (strCh == "e"))
    {
        cout << "Edit a post for a blog..." << endl;

        int areaID = getValidBlogArea(areas);

        int postId = getValidPostIndex(areas, areaID);

        DisplayPost(areas, areaID, postId);

        Post temp;
        temp.setTitle(getValidPostTitle(areas->at(areaID)));
        temp.setUser(user.getAlias());
        temp.setText(getValidText());

        areas->at(areaID).EditPost(postId, temp.getTitle(), temp.getText(), temp.getUser());
        //areas[areaID].EditPost(postId, getValidPostTitle(), getValidUsername(), getValidText());
        cout << "Post Editted." << endl;   
    }
    else if ((strCh == "F") || (strCh == "f"))
    {
        cout << "Delete a post from a blog..." << endl;

        int areaID = getValidBlogArea(areas);

        int postId = getValidPostIndex(areas, areaID);

        DisplayPost(areas, areaID, postId);

        areas->at(areaID).deletePost(postId);

        cout << "Post Deleted." << endl;   
    }
    else if ((strCh == "G") || (strCh == "g"))
    {
        cout << "Love/Like/Dislike/Hate a post" << endl;

        int areaID = getValidBlogArea(areas);

        int postId = getValidPostIndex(areas, areaID);
       
        getValidReaction(areas, areaID, postId);

        cout << "Response to Post saved" << endl;   
    }
    // If user selected Q
    else if ((strCh == "Q") || (strCh == "q"))
    {
        // User has selected to quit
        cout << "Bye..." << endl;

        backupData(areas);

    }
        // User has selected an invalid option
    else
    {
        cout << strCh << " is not a valid option." << endl;
    }
}

////////////////////////////////////////
//Main
////////////////////////////////////////

int main() 
{
    // User Initialization Sequence
    vector <User> *u = new vector <User>(NUM_USERS);

    loadUser(u);
    int i = userLogin(u);

    // Blog Initializatuion Sequence
    vector <Area> *p = new vector <Area>(NUM_AREAS);

    uploadData(p);

    cout << endl;
    cout << "Welcome to my Blog " << endl;


    // User Interaction Sequence
    string UserAction;

    // Continue until user decides to quit
    do 
    {
        promptAction(UserAction);
        implementAction(p, u->at(i), UserAction);

    } while ((UserAction != "Q") && (UserAction != "q"));

    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
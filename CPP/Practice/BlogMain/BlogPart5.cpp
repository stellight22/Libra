//////////////////////////////////////////////////////
//Class Header
//////////////////////////////////////////////////////
/*
 * Name: Ahyeon Cho
 * Date: //2022
 * Section: COP3330-11
 * Assignment: Module 6 Assignment
 * Due Date: //2022
 * About this project: 
 * Assumptions: 
 * All work below was performed by Ahyeon Cho
 * */

//////////////////////////////////////////////////////
// Table of Contents
//// Program Headers
//// Global Constants
//// Classes
//// Friendly Overloads
//// String Functions
//// Area Init Function
//// Menu Functions
//// Validation Functions
//// User Action Functions
//////// Main
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// Program Headers
//////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include <vector>

#include "Area.h"
#include "Post.h"
#include "User.h"

using namespace std;

//////////////////////////////////////////////////////
// Global Constants
//////////////////////////////////////////////////////

// Number of Areas
const int NUM_AREAS = 5; 

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
// Area Init Function
////////////////////////////////////////
void initAreas(vector<Area> *areas)
{
    // Init Com Sci
    areas->at(0).setName("Comp Sci");
    //Add a post to the Com Sci area
    Post p{"I love programming","Programming is so much fun.","Tom"};
    areas->at(0).AddPost(p);
    //Set description for areas[0]
    areas->at(0).setDesc("This Area talks about computers.");

    //Add another post to the Com Sci area
    Post p2;
    p2.setTitle("C++ versus Python");
    p2.setText("I like C++ more than Python.");
    p2.setUser("Sally");
    areas->at(0).AddPost(p2);

    //init Current Events
    areas->at(1).setName("Current Events");
    //add a post to the Current Events area
    Post p3{"Picnic Saturday","Join us at the park for a picnic on Saturday","Sue"};
    areas->at(1).AddPost(p3);
    //set description for areas[1]
    areas->at(1).setDesc("This Area talks about the latest community news.");

    //add 3 more areas and 2 posts to each
    //init foodie
    areas->at(2).setName("Foodie Updates");
    //set description for areas[2]
    areas->at(2).setDesc("This Area is made for the food enthusiasts.");
    //first post for Foodie area
    Post p5;
    p5.setTitle("Chocolate Shortage");
    p5.setText("Chocolate is in danger of extinction.");
    p5.setUser("Choco-lover");
    areas->at(2).AddPost(p5);
    //second post for Foodie area, which is areas[2]
    Post p6;
    p6.setTitle("Paleo Diet");
    p6.setText("Eat lots of fish.");
    p6.setUser("Sushi-lover");
    areas->at(2).AddPost(p6);

    //init travel
    areas->at(3).setName("Travel Updates");
    //sets the description for the travel area
    areas->at(3).setDesc("This Area is made for the travel enthusiasts.");
    //first post for travel area
    Post p7;
    p7.setTitle("COVID is OVER");
    p7.setText("Travel without masks!");
    p7.setUser("iloveparis");
    areas->at(3).AddPost(p7);
    //second post for travel area, which is areas[3]
    Post p8;
    p8.setTitle("Portuguese Summer");
    p8.setText("Lots of group travel deals inside.");
    p8.setUser("miamor");
    areas->at(3).AddPost(p8);

    //init friends
    areas->at(4).setName("Friends Updates");
    //sets the description for the Friends area
    areas->at(4).setDesc("This Area is made for the fans of the show Friends.");
    //first post for travel area
    Post p9;
    p9.setTitle("Ross is Back");
    p9.setText("PIVOT!!");
    p9.setUser("Monica");
    areas->at(4).AddPost(p9);
    //second post for Foodie area, which is areas[2]
    Post p10;
    p10.setTitle("Joey is hitched!");
    p10.setText("Just kidding. How you doin'?");
    p10.setUser("pizzaLover");
    areas->at(4).AddPost(p10);

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
    cout << " Q - Quit" << endl;
}

// Display Blog Area
void DisplayBlogAreas(vector<Area> *areas)
{
    cout << endl;
    cout << "Display Blog areas..." << endl;
    //user has selected to display blog areas
    for (int i = 0; i < areas->size(); i++) {
        cout << "Area Index : " << i << endl;
        cout << areas->at(i) << endl;
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
// Validation Functions
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
        cout << "Post successfully editted." << endl;   
    }
    else if ((strCh == "F") || (strCh == "f"))
    {
        cout << "Delete a post from a blog..." << endl;

        int areaID = getValidBlogArea(areas);

        int postId = getValidPostIndex(areas, areaID);

        DisplayPost(areas, areaID, postId);

        areas->at(areaID).deletePost(postId);

        cout << "Post successfully deleted." << endl;   
    }
    // If user selected Q
    else if ((strCh == "Q") || (strCh == "q"))
    {
        // User has selected to quit
        cout << "Bye..." << endl;
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
    User user;
    bool flag = false;

    do 
    {
        string u;
        string p;
        cout << "Login: " << endl;
        cout << "Name: Please enter in a string with at least 1 character and at most 10 characters." << endl;
        getline(cin,u);
        cout << "Password: Please enter in a string with at least 1 character and at most 20 characters." << endl;
        getline(cin,p);

        cout << user.getName() << " "  << user.getPassword() << endl;

        if(user.validateUsername(u) && user.validatePassword(p))
        {
            flag = true;
        }
        else
        {
            cout << "Incorrect Credentials" << endl;
        }


    }while(flag == false);


    // Array of areas
    // Vector <Area> areas(NUM_AREAS);
    // Vector  pointer
    vector <Area> *p = new vector <Area>(NUM_AREAS);

    // Initialize areas
    initAreas(p);

    // Welcome
    cout << "Welcome to my Blog " << endl;

    string UserAction;

    // Continue until user decides to quit
    do 
    {
        promptAction(UserAction);
        implementAction(p, user, UserAction);

    } while ((UserAction != "Q") && (UserAction != "q"));

    return 0;
}
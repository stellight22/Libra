//////////////////////////////////////////////////////
//Class Header
//////////////////////////////////////////////////////
/*
 * Name: Ahyeon Cho
 * Date: 10/05/2022
 * Section: COP3330-11
 * Assignment: Module 6 Assignment
 * Due Date: 10/05/2022
 * About this project: This project implements file IO
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
//// Validation Functions
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
    // Login Sequence
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

        if(user.validateUsername(u) && user.validatePassword(p))
        {
            flag = true;
        }
        else
        {
            cout << "Incorrect Credentials" << endl;
        }


    }while(flag == false);


    // Blog Initializatuion Sequence
    vector <Area> *p = new vector <Area>(NUM_AREAS);

    uploadData(p);

    cout << endl;
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
/*
 * Name: Ahyeon Cho
 * Date: 09/03/2022
 * Section: COP3330-11
 * Assignment: Module 2 Assignment
 * Due Date: 09/04/2022
 * About this project: This project is aimed to apply and practice concepts of arrays and structures
 *         and classes in C++.
 * Assumptions: Assumes correct user input for blog area index bounds from 0-4.
 * All work below was performed by Ahyeon Cho
 * */

#include <iostream>
#include <string>

// students - you need to put program header here
using namespace std;

//number of Areas
const int NUM_AREAS = 5; //added 2+3 = 5

//maximum number of Posts
const int MAX_NUM_POSTS = 10;

//////////////////////////////////////////////////////
//structure for post
struct Post {
    string Title; //title
    string Text; //text
    string User; //User
};


//Area class
class Area {
public:
    // return the name of the Area
    string getName() {
        return Name;
    };

    //adding accessor and mutator methods for description
    //set the description of Area
    void setDesc(string d) {
        description = d;
    };

    // return the name of the Area description
    string getDesc() {
        return description;
    };

    //set the name of the Area
    void setName(string nm) {
        Name = nm;
    };

    // return the index of the last post
    int getIndxLastPost() {
        return indxLastPost;
    };

    // add post
    int AddPost(Post p);

    // get post
    bool getPost(int i, Post &p) {
        if (i <= indxLastPost) // i is valid
        {
            p = Posts[i]; //set post
            return true; //return true
        } else { //i is not valid
            return false; //return false
        }
    }


private:
    string Name; //name of Area
    Post Posts[MAX_NUM_POSTS];//array of posts
    int indxLastPost = -1; //array index of last post in arary
    string description;
};

////////////////////////////////////////////////////
void booty()
{
    int a;
    string sexy;

    cout << "Enter Something";
    cin >> a;

    cout << "Enter sexy";
    getline(cin,sexy);

}

// sets up Areas
void initAreas(Area Areas[]);

//display menu
void displayMenu();

//User selects an action
void promptAction(string &strCh);

//implement Action
void implementAction(Area areas[], string strCh);

void DisplayBlogAreas(Area areas[]);

void DisplayPostsABlog(Area a);


//get a valid blog area id
int getValidBlogArea();


int main() {
    //array of areas
    Area areas[NUM_AREAS];

    //initialize areas
    initAreas(areas);

    //welcome
    cout << "Welcome to my Blog " << endl;

    string UserAction;
    do {
        promptAction(UserAction);
        implementAction(areas, UserAction);

    } while ((UserAction != "Q") && (UserAction != "q"));
    //continue until user decides to quit


    return 0;
}

// sets up areas
void initAreas(Area areas[]) {
    //init Com Sci
    areas[0].setName("Com Sci");
    //add a post to the Com Sci area
    Post p{"I love programming","Programming is so much fun.","Tom"};
    areas[0].AddPost(p);
    //set description for areas[0]
    areas[0].setDesc("This Area talks about computers.");

    //add another post to the Com Sci area
    Post p2;
    p2.Title = "C++ versus Python";
    p2.Text = "I like C++ more than Python.";
    p2.User = "Sally";
    areas[0].AddPost(p2);

    //init Current Events
    areas[1].setName("Current Events");
    //add a post to the Current Events area
    Post p3{"Picnic Saturday","Join us at the park for a picnic on Saturday","Sue"};
    areas[1].AddPost(p3);
    //set description for areas[1]
    areas[1].setDesc("This Area talks about the latest community news.");

    //add 3 more areas and 2 posts to each
    //init foodie
    areas[2].setName("Foodie update:");
    //set description for areas[2]
    areas[2].setDesc("This Area is made for the food enthusiasts.");
    //first post for Foodie area
    Post p5;
    p5.Title = "Chocolate Shortage";
    p5.Text = "Chocolate is in danger of extinction.";
    p5.User = "Choco-lover";
    areas[2].AddPost(p5);
    //second post for Foodie area, which is areas[2]
    Post p6;
    p6.Title = "Paleo Diet";
    p6.Text = "Eat lots of fish.";
    p6.User = "Sushi-lover";
    areas[2].AddPost(p6);


    //init travel
    areas[3].setName("Travel update:");
    //sets the description for the travel area
    areas[3].setDesc("This Area is made for the travel enthusiasts.");
    //first post for travel area
    Post p7;
    p7.Title = "COVID is OVER";
    p7.Text = "Travel without masks!";
    p7.User = "iloveparis";
    areas[3].AddPost(p7);
    //second post for travel area, which is areas[3]
    Post p8;
    p8.Title = "Portuguese Summer";
    p8.Text = "Lots of group travel deals inside.";
    p8.User = "miamor";
    areas[3].AddPost(p8);

    //init friends
    areas[4].setName("Friends update:");
    //sets the description for the Friends area
    areas[4].setDesc("This Area is made for the fans of the show Friends.");
    //first post for travel area
    Post p9;
    p9.Title = "Ross is Back";
    p9.Text = "PIVOT!!";
    p9.User = "Monica";
    areas[4].AddPost(p9);
    //second post for Foodie area, which is areas[2]
    Post p10;
    p10.Title = "Joey is hitched!";
    p10.Text = "Just kidding. How you doin'?";
    p10.User = "pizzaLover";
    areas[4].AddPost(p10);

}

//display menu
void displayMenu() {
    // display menu options to user
    cout << "Please select from the following options..." << endl;
    cout << " A  - Display Blog areas" << endl;
    cout << " B  - Display all posts for a blog" << endl;
    cout << " C  - Add a post to an area" << endl; //add option C
    cout << " Q  - Quit" << endl;

}

//User Action
void promptAction(string &strCh) {
    //display menu options to screen
    displayMenu();

    //prompt user for choice
    cout << "What would you like to do?" << endl;
    cin >> strCh;
}

//implement Users Action
void implementAction(Area areas[], string strCh)
{
    // if user selected A
    if ((strCh == "A") || (strCh == "a"))
    {
        DisplayBlogAreas(areas);
    }
    else if ((strCh == "B") || (strCh == "b"))
    {
        cout << "Display all posts for a blog..." << endl;
        int blogId = getValidBlogArea();
        DisplayPostsABlog(areas[blogId]);
    }
    //user selects C
    else if ((strCh == "C") || (strCh == "c"))
    {
        booty();
    }
        //user selected Q
    else if ((strCh == "Q") || (strCh == "q")) {
        //user has selected to quit
        cout << "Bye..." << endl;
    } else {
        //user has selected an invalid option
        cout << strCh << " is not a valid option." << endl;
    }
}

////////////////////////////
void DisplayBlogAreas(Area areas[]) {
    cout << "Display Blog areas..." << endl;
    //user has selected to display blog areas
    for (int i = 0; i < NUM_AREAS; i++) {
        cout << "Area Index:" << i << endl;
        cout << "Area Name:" << areas[i].getName() << endl;
        cout << "Area Description:" << areas[i].getDesc() <<endl; //add the description to the output displayed
        cout << "******************" << endl;
    }

}

//////////////////
void DisplayPostsABlog(Area a) {
    cout << "Posts for " << a.getName() << endl;

    //user has selected to display blog areas
    for (int i = 0; i <= a.getIndxLastPost(); i++) {
        Post p;
        bool found = a.getPost(i, p);
        if (found) {
            cout << "Post Index:" << i << endl;
            cout << "Title:" << p.Title << endl;
            cout << "By:" << p.User << endl;
            cout << "Text:" << p.Text << endl;
            cout << "******************" << endl;
        }
    }

}

//////////////
int getValidBlogArea() {
    int area;
    //prompt and read in Blog Area Index
    cout << "Please enter in a Blog Area Index" << endl;
    cin >> area;
    //input validation loop
    while ((area < 0) || (area >= NUM_AREAS)) {
        cout << "Please enter in a Blog Area Index" << endl;
        cin >> area;
    }
    //return valid Blog Area Index
    return area;
}

////////////////////////
/////////////////////////
// add post
int Area::AddPost(Post p) {
    //validate that less than MAX_NUM_POSTS have been added
    // to this blog
    if (indxLastPost + 1 < MAX_NUM_POSTS) {
        //incr indxLastPost
        indxLastPost++;
        //set indxLastPost to p
        Posts[indxLastPost] = p;
        //return 1 - added
        return 1;
    } else
        //invalid no room for new post
        return -1;
}


///////////////////////////////////////
const std::string WHITESPACE = " \n\r\t\f\v";

///////////////////////////
//Left trim - remove all white space characters on the left
string ltrim(const std::string &s) {
    size_t start = s.find_first_not_of(WHITESPACE);
    return (start == std::string::npos) ? "" : s.substr(start);
}

//Right trim - remove all white space characters on the right
string rtrim(const std::string &s) {
    size_t end = s.find_last_not_of(WHITESPACE);
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}

//Trim - remove all white space characters on the left or right
string trim(const std::string &s) {
    return rtrim(ltrim(s));
}

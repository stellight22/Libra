/*
 * This program is editing for help with first coding assignment
 * The goals are:
 * 1. Add a private attribute and its mutators and accessors
 * 2. Add 2 more courses to the courses array
 * 2a. In the innitCourses function, set the course name and credit hours for each function
 * 3. Course descriptions
 * 3a. add a string private member to the course class to store a course description
 * 3b. add accessor and mutator functions for the private member
 * 3c. In the initCourses function, set the course description for each course
 * 4. Display course information
 * 4a. in the promptUserAction function, after a student has registered for the course,
 *      display the course name, number of credits and course description.
 *
 * */


#include <iostream>
#include <string>
#include <vector>
using namespace std;

//number of courses
const int NUM_COURSES=4; //instead of 2 initial value, now we add 2+2 = 4 (#2)

//course class
class Course
{
public:
    // return the name of the course
    string getName() { //notice that the type is string because Name is string type
        return Name;
    };

    //set the name of the course
    void setName(string nm) {
        Name = nm;
    };

    //Number of Courses

    int getNum() { //notice that the type is string because Name is string type
        return numCredits;
    };

    //set the name of the course
    void setNum(int cn) {
        numCredits = cn;
    };

    //Course description

    string getDesc() { //notice that the type is string because Name is string type
        return courseDesc;
    };

    //set the name of the course
    void setDesc(string sd) {
        courseDesc = sd;
    };

private:
    string Name; //name of course
    int numCredits; //adding a private attr to class
    //3a
    string courseDesc;

};
//////////////////////////////////////////////////////
//structure for student
struct Student
{
    string name; // name of student
    vector <int> indexCoursesRegisteredFor; //vector of courses students is registered for
};
////////////////////////////////////////////////////
// sets up Courses
void initCourses(Course courses[]);
// sets up students
void initStudent(Student &stu);
//User Action
void promptUserAction(string &strCh);
//implement Users Action
void implementUserAction(Student &stud,Course courses[],string strCh);

//Locate course in array
int LocateCourse(Course courses[],string strNm);

int main() {
    Course courses[NUM_COURSES];
    Student stud1;

    //initialize student and courses
    initCourses(courses);
    initStudent(stud1);

    //welcome
    cout << "Welcome to the registration program" << endl;

    string UserAction;
    do
    {
        promptUserAction(UserAction);
        implementUserAction(stud1,courses,UserAction);

    } while ((UserAction != "Q")&&(UserAction != "q"));
    //continue until user decides to quit


    return 0;
}

// sets up courses
void initCourses(Course courses[])
{
    //init COP3363
    courses[0].setName("COP3363");
    courses[0].setNum(3);
    courses[0].setDesc("This course focuses on the fundamental concepts of computer programming using the C++ language");
    //init COP3330
    courses[1].setName("COP3330");
    courses[1].setNum(3);
    courses[1].setDesc("This course is object oriented programming with C++");

    //step 2a
    //init COP4521
    courses[2].setName("COP4521");
    courses[2].setNum(3);
    courses[2].setDesc("This course is programming with Python");

    //init COP3014
    courses[3].setName("COP3014");
    courses[3].setNum(3);
    courses[3].setDesc("This course is intro to programming in C++");
}

// sets up student
void initStudent(Student &stud)
{
    //prompt user for name
    cout<<"What is your name?";
    //read in student name
    cin>>stud.name;
}

//User Action
void promptUserAction(string &strCh)
{
    //prompt user for choice
    cout<<"What would you like to do?"<<endl;
    //read in choice
    cin>>strCh;
}
//implement Users Action
void implementUserAction(Student &stud,Course courses[],string strCh)
{
    //R = register student for course
    if ((strCh =="R") ||(strCh =="r"))
    {
        //user has selected to add a student to a course
        string CourseName;
        cout<<"Please enter in the course name...";
        cin>>CourseName;

        //locate index of course
        int IndxCourse = LocateCourse(courses,CourseName);
        if (IndxCourse != -1) {
            //if found add index to vector of student
            stud.indexCoursesRegisteredFor.push_back(IndxCourse);

            //4: display course info
            cout << "You have been registered for..." << endl;
            cout <<"Course " << courses[IndxCourse].getName()<< endl;
            cout <<"Description: " << courses[IndxCourse].getDesc()<< endl;
            cout << "Credit Hours: "<< courses[IndxCourse].getNum() <<endl;





        } else {
            cout << "This is not a valid course name"<<endl;
            cout<<"Please try again"<<endl;
        }
    }
    //D = display student info
    else if ((strCh =="D") ||(strCh =="d"))
    {
        //user has selected to display student info
        cout<<"Name:"<<stud.name;
        cout<<" is registered to take ...";
        for (int idx : stud.indexCoursesRegisteredFor)
        {
            cout<<courses[idx].getName()<<" ";
        }
        cout<<endl;

    }
    //Q=quit
    else if ((strCh =="Q") ||(strCh =="q"))
    {
        //user has selected to quit
        cout<<"Good bye..."<<endl;
    }
    else
    {
        //user has selected an invalid option
        cout<<strCh<<" is not a valid option."<<endl;
    }
}

//Locate course in array
int LocateCourse(Course courses[],string strNm)
{
    //loop throughh each course in the array
    for (int i =0; i<NUM_COURSES;i++)
    {
        // if you find the course you are looking for return the index
        if (courses[i].getName().compare(strNm)==0)
            return i;
    }
    //course not found
    return -1;
}

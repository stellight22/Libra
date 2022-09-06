/*
 * This program is editing for help with first coding assignment
 * The goals are:
**Withdraw from course**
- add logic to the promptUserAction and implementUserAction functions so that when the user enters
W or w moves the user is prompted for a course name, if the course is a valid course in the course array
 and the student is registered to take this course the student is withdrawn from the course
**Course Constructors**
- Create three constructors for the course class
- At least 1 must call one of the other constructors
- Change the code so that each constructor you create is called at least once
**Student Class**
- Create a class to store Student data
- add private member attributes to store the name and the vector of courses
- add Accessor and Mutator Functions for the name attribute
- add Accessor and Mutator Functions for the vector of courses
**Multiple Students**
- Create an array of three Students and change the code to support working with an array of students
**Store number of students registered for at least 1 course**
- Add a static member variable to the student class you created in step e that stores the number of students
registered for at least one course in the next semester
- Initialize the static variable you created in step i to 0.
- Add a static function to get the value of the static variable you created in step i
- Add appropriate logic to update the static variable you created in step i
**Display number of students registered for at least 1 course**
- add logic to the promptUserAction and implementUserAction functions so that when the user
 enters N or n moves the number of students registered for at least 1 course is displayed
 * */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//number of courses
const int NUM_COURSES=4; //instead of 2 initial value, now we add 2+2 = 4 (#2)

//number of students
const int NUM_STUDENTS = 3;

//course class
class Course
{
public:
    //constructors
    Course(string nm) {Name = nm;};
    Course(string nm, int NumCred) {Name = nm ; numCredits = NumCred;};
    Course(): Course(""){};

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
// //////////////////////////////////////////////////////
// //structure for student
// struct Student
// {
//     string name; // name of student
//     vector <int> indexCoursesRegisteredFor; //vector of courses students is registered for
// };

//class Student (ex-struct)
class Student
{
public:
    //constructor
    Student() {};
    //name of student
    string getName(){return name;}
    void setName(string nm){name =nm;}

    //vector of courses student is registered for
    vector <int> getindexCoursesRegisteredFor(){return indexCoursesRegisteredFor;}
    void setindexCoursesRegisteredFor(vector <int> vtr){indexCoursesRegisteredFor= vtr;}

    //we are making functions because we don't want to create a new vector everytime we add/drop course
    //register student
    void RegisterCourse(int Indx){indexCoursesRegisteredFor.push_back(Indx);}
    //withdraw student from a course
    void WithdrawCourse(int Indx){indexCoursesRegisteredFor.erase(indexCoursesRegisteredFor.begin()+ Indx);}

    //because NumStudentsRegNextSemester is a private member, we want to create methods that can access it within
    static int getNumStudentsRegNextSemester(){return NumStudentsRegNextSemester;}
    void static updateNumStudentsRegNextSemester(int n){ NumStudentsRegNextSemester += n;}


private:
    string name; // name of student
    vector <int> indexCoursesRegisteredFor; //vector of courses students is registered for
    static int NumStudentsRegNextSemester;

};
int Student::NumStudentsRegNextSemester = 0;


////////////////////////////////////////////////////
// sets up Courses
void initCourses(Course courses[]);
// sets up students
void initStudent(Student &stud);
//which student
int promptWhichStudent(Student students[]);
//User Action
void promptUserAction(string &strCh);
//implement Users Action
void implementUserAction(Student &stud,Course courses[],string strCh);

//Locate course in array
int LocateCourse(Course courses[],string strNm);
//Locate student in array
int LocateStudent(Student students[], string nm);
//Locate course registration
int LocateCourseRegistration(int indexCourse,Student stud);

int main() {
    Course courses[NUM_COURSES];
    Student students[NUM_STUDENTS];

    //initialize student and courses
    initCourses(courses);
    for (int i = 0; i< NUM_STUDENTS; i++)
        initStudent(students[i]);

    //welcome
    cout << "Welcome to the registration program" << endl;

    string UserAction;
    do
    {
        //which student?
        int indx = promptWhichStudent(students);

        promptUserAction(UserAction);
        implementUserAction(students[indx],courses,UserAction);

    } while ((UserAction != "Q")&&(UserAction != "q"));
    //continue until user decides to quit


    return 0;
}

// sets up courses
void initCourses(Course courses[])
{
    //init COP3363
    courses[0] = Course("COP3363");
    courses[0].setNum(3);
    courses[0].setDesc("This course focuses on the fundamental concepts of computer programming using the C++ language");
    //init COP3330
    courses[1] = Course("COP3330", 3);
    courses[1].setDesc("This course is object oriented programming with C++");

    //step 2a
    //init COP4521
    courses[2] = Course();
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
    string nm;
    //prompt user for name
    cout<<"What is your name?";
    //read in student name
    cin>>nm;
    stud.setName(nm);
}

//which student
int promptWhichStudent(Student students[])
{
    string nm;
    cout << "Please enter in the name of the student: ";
    cin >> nm;

    //check that the student name exists in the array
    int indx = LocateStudent(students, nm);
    while (indx == -1) //reepat getting until a right name is entered
    {
        cout << " This student was not found in the system. " <<endl;
        cout << "Please enter in the name of the student";
        cin >> nm;
        int indx = LocateStudent(students, nm);
    }

    return indx;


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
            stud.RegisterCourse(IndxCourse);

            //4: display course info
            cout << stud.getName()<< "has been registered for..." << endl;
            cout <<"Course " << courses[IndxCourse].getName()<< endl;
            cout <<"Description: " << courses[IndxCourse].getDesc()<< endl;
            cout << "Credit Hours: "<< courses[IndxCourse].getNum() <<endl;

            //if the student has a course, then the number of student registered fornext sem increases by one
            if(stud.getindexCoursesRegisteredFor().size()==1)
                Student::updateNumStudentsRegNextSemester(1);


        } else {
            cout << "This is not a valid course name"<<endl;
            cout<<"Please try again"<<endl;
        }
    }

        //R = register student for course
    else if ((strCh =="W") ||(strCh =="w"))
    {
        //user has selected to add a student to a course
        string CourseName;
        cout<<"Please enter in the course name...";
        cin>>CourseName;

        //locate index of course
        int IndxCourse = LocateCourse(courses,CourseName);
        if (IndxCourse != -1)
        {
            //validate that the student is registered for this course
            //Locate course registration
            int indexRegis = LocateCourseRegistration(IndxCourse,stud);
            if (indexRegis!= -1)
            {
                stud.WithdrawCourse(indexRegis);
                //4: display withdrawn course info
                cout << stud.getName()<< " has been withdrawn from..." << endl;
                cout <<"Course " << courses[IndxCourse].getName()<< endl;
                cout <<"Description: " << courses[IndxCourse].getDesc()<< endl;
                cout << "Credit Hours: "<< courses[IndxCourse].getNum() <<endl;


                //if the student withdraws their only course then number of students registered for next sem drops 1
                if(stud.getindexCoursesRegisteredFor().size()==0)
                    Student::updateNumStudentsRegNextSemester(-1);

            }

            else
            {
                cout << stud.getName()<< " was not registered for that course name"<<endl;
                cout<<"Please try again"<<endl;
            }

        }
        else
        {
            cout << "This is not a valid course name"<<endl;
            cout<<"Please try again"<<endl;
        }
    }

        //D = display student info
    else if ((strCh =="D") ||(strCh =="d"))
    {
        //user has selected to display student info
        cout<<"Name:"<<stud.getName();
        cout<<" is registered to take ...";
        vector <int> CoursesRegFor = stud.getindexCoursesRegisteredFor();
        for (int idx : CoursesRegFor)
        {
            cout<<courses[idx].getName()<<" ";
        }
        cout<<endl;

    }

        //N = Number of students registered for the next semester
    else if ((strCh =="N") ||(strCh =="n"))
    {
        //Number of students registered for at least 1 course the next semester
        cout<<"Number of students registered for at least 1 course..."<<Student::getNumStudentsRegNextSemester()<<endl;
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

//Locate student in array
int LocateStudent(Student students[], string nm)
{
    //loop through each student in the array
    for (int i =0; i<NUM_STUDENTS;i++)
    {
        // if you find the student you are looking for return the index
        if (students[i].getName().compare(nm)==0)
            return i;
    }
    //student not found
    return -1;
}

//Locate course registration definition
int LocateCourseRegistration(int indexCourse,Student stud)
{
    vector <int> CoursesRegFor = stud.getindexCoursesRegisteredFor();
    for (int i = 0; i<CoursesRegFor.size();i++)
    {
        if (CoursesRegFor[i] == indexCourse)
            return i;
    }
    //student is not registered for course
    return -1;
}

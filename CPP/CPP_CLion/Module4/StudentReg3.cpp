//
// Created by Ahyeon  on 9/16/22.

//Using the this pointer
        //Change all accessor and mutators in both the course and student classes to use this-> whenever possible
//Using pointers
//Change:
//void implementUserAction(Student &stud,const Course courses[],const Student students[],string strCh);
//int LocateCourseRegistration(int indxCourse,Student stud);
//To:
//void implementUserAction(Student *stud,const Course courses[],const Student students[],string strCh);
//int LocateCourseRegistration(int indxCourse,Student *stud);
//Using pointers to Arrays
//Change
//for (int i = 0;i<NUM_STUDENTS;i++)
//initStudent(students[i]);


#include <iostream>
#include <string>
#include <vector>
using namespace std;

//number of courses
const int NUM_COURSES=4;

//number of students
const int NUM_STUDENTS=3;

//course class
class Course
{
public:
    //constructors
    Course(string nm) {Name = nm;};
    Course(string nm, int NumCred) {Name = nm; NumCredits=NumCred;};
    Course():Course("") {};

    //overload output function
    friend ostream & operator << (ostream & OutputStream, const Course &course);

    //name of course
    // return the name of the course
    string getName() const {
        return this->Name;
    };

    //set the name of the course
    void setName(string nm) {
        this->Name = nm;
    };

    //number of credits
    //return the number of credits
    int getNumberOfCredits() const
    {
        return this->NumCredits;
    }
    void setNumCredits(int num)
    {
        this->NumCredits = num;
    }

    //course description
    //return the course description
    string getCourseDescription() const
    {
        return this->CourseDescription;
    }
    //set the course description
    void setCourseDescription(string desc)
    {
        this->CourseDescription=desc;
    }
private:
    string Name; //name of course
    int NumCredits;// Number of credits for course
    string CourseDescription;//Description of course
};
//////////////////////////////////////////////////////
//class for student
class Student
{
public:
    //constructor
    Student() {};

    // name of student
    string getName() const {return this->name;}
    void setName(string nm) {this->name=nm;}

    // vector of courses students is registered for
    vector <int> getindexCoursesRegisteredFor() const {return this->indexCoursesRegisteredFor;}
    void setindexCoursesRegisteredFor(vector <int> vtr) {this->indexCoursesRegisteredFor=vtr;}

    //register student to a course
    void RegisterCourse(int Indx){indexCoursesRegisteredFor.push_back(Indx);}
    //withdraw a student from a course
    void WithFromaCourse(int Indx){indexCoursesRegisteredFor.erase(indexCoursesRegisteredFor.begin()+Indx);}

    static int getNumStudentsRegNextSemester() {return NumStudentsRegNextSemester;}
    static void updateNumStudentsRegNextSemester(int n) {NumStudentsRegNextSemester+=n;}

    friend ostream & operator << (ostream & OutputStream, const Student & student);
    friend bool operator <(const Student &Stud1, const Student &Stud2);

private:
    string name; // name of student
    vector <int> indexCoursesRegisteredFor; //vector of courses students is registered for
    static int NumStudentsRegNextSemester;
};
int Student::NumStudentsRegNextSemester=0;
////////////////////////////////////////////////////
// sets up Courses
void initCourses(Course courses[]); //cannot be const because it changes courses array
// sets up students
void initStudent(Student &stud);
//which student
int promptWhichStudent(const Student students[]);

//User Action
void promptUserAction(string &strCh);
//implement Users Action
void implementUserAction(Student &stud,const Course courses[],const Student students[],string strCh);

//Locate student in array
int LocateStudent(const Student students[],string strNm);
//Locate course in array
int LocateCourse(const Course courses[],string strNm);
//Locate course registration
int LocateCourseRegistration(int indxCourse,Student *stud);


//does this option require a user
bool RequireUser(string strCh);

int main() {
    Course courses[NUM_COURSES];
    Student students[NUM_STUDENTS];

    //initialize student and courses
    initCourses(courses);
    for (int i = 0;i<NUM_STUDENTS;i++)
        initStudent(students[i]);

    //welcome
    cout << "Welcome to the registration program" << endl;

    string UserAction;
    do
    {
        //what do you want to do?
        promptUserAction(UserAction);

        //only prompt for user if required
        int indx = 0;
        if (RequireUser(UserAction))
            //which student?
            indx = promptWhichStudent(students);

        //implement the action
        implementUserAction(students[indx],courses,students,UserAction);

    } while ((UserAction != "Q")&&(UserAction != "q"));
    //continue until user decides to quit


    return 0;
}

// sets up courses
void initCourses(Course courses[])
{
    //init COP3363
    courses[0] = Course("COP3363");
    courses[0].setNumCredits(3);
    courses[0].setCourseDescription("Programming I for majors");
    //init COP3330
    courses[1] = Course("COP3330",3);
    courses[1].setCourseDescription("Object-Oriented Programming");

    //init CEN4020
    courses[2] = Course();
    courses[2].setName("CEN4020");
    courses[2].setNumCredits(3);
    courses[2].setCourseDescription("Programming Languages");

    //init CDA3100
    courses[3].setName("CDA3100");
    courses[3].setNumCredits(3);
    courses[3].setCourseDescription("Computer Organization I");
}

// sets up student
void initStudent(Student &stud)
{
    string nm;
    //prompt user for name
    cout << "What is your name?";
    //read in student name
    cin >> nm;
    stud.setName(nm);

}
//which student?
int promptWhichStudent(const Student students[])
{
    string nm;
    cout<<"Please enter in the name of a student";
    cin >>nm;
    int indx = LocateStudent(students,nm);
    while (indx==-1) //not a valid student
    {
        cout<<"Not a valid student"<<endl;
        cout<<"Please enter in the name of a student";
        cin >>nm;
        indx = LocateStudent(students,nm);
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
void implementUserAction(Student &stud,const Course courses[],const Student students[],string strCh)
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
            //display the course information
            cout<<stud<<" has been registered for..."<<endl;
            cout<<courses[IndxCourse]<<endl;

            if(stud.getindexCoursesRegisteredFor().size()==1)
                Student::updateNumStudentsRegNextSemester(1);

        } else {
            cout << "This is not a valid course name"<<endl;
            cout<<"Please try again"<<endl;
        }
    }
        //W = withdraw from course
    else if ((strCh =="W") ||(strCh =="w"))
    {
        //user has selected to add a student to a course
        string CourseName;
        cout<<"Please enter in the course name...";
        cin>>CourseName;

        //locate index of course
        int IndxCourse = LocateCourse(courses,CourseName);
        if (IndxCourse != -1) {
            //validate that the student is registered for this course
            int indxReg  = LocateCourseRegistration(IndxCourse,stud);
            if (indxReg!=-1) //student was registered need to with draw
            {
                stud.WithFromaCourse(indxReg);
                //display the course information
                cout<<stud<<" has been withdrawn from..."<<endl;
                cout<<courses[IndxCourse]<<endl;

                if(stud.getindexCoursesRegisteredFor().size()==0)
                    Student::updateNumStudentsRegNextSemester(-1);

            } else {
                cout <<stud<<" was not registered for that course name"<<endl;
                cout<<"Please try again"<<endl;
            }

        }else {
            cout << "This is not a valid course name"<<endl;
            cout<<"Please try again"<<endl;
        }

    }
        //D = display student info
    else if ((strCh =="D") ||(strCh =="d"))
    {
        //user has selected to display student info
        cout<<stud;
        cout<<" is registered to take ...";
        vector <int> CoursesRegFor =stud.getindexCoursesRegisteredFor();
        for (int idx : CoursesRegFor)
        {
            cout<<courses[idx].getName()<<" ";
        }
        cout<<endl;

    }
        //M=the name of the student who is registered for the most courses next semester
    else if ((strCh =="M") ||(strCh =="m"))
    {
        Student StudMaxNumCourses = students[0];
        for(int i = 1;i<NUM_STUDENTS;i++)
        {
            if(StudMaxNumCourses <students[i])
                StudMaxNumCourses = students[i];
        }
        cout << "The student who has registered for the max number of courses is " << StudMaxNumCourses.getName() <<endl;
    }
        //N=number of students registered for at least 1 course
    else if ((strCh =="N") ||(strCh =="n"))
    {
        //number of students registered for at least 1 course
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
//does this option require a user
bool RequireUser(string strCh)
{
    if ((strCh=="R")||(strCh=="r")||(strCh=="W")||(strCh=="w")||(strCh=="D")||(strCh=="d"))
        return true;
    else
        return false;
}

//Locate student in array
int LocateStudent(const Student students[],string strNm)
{
    //loop throughh each student in the array
    for (int i =0; i<NUM_STUDENTS;i++)
    {
        // if you find the student you are looking for return the index
        if (students[i].getName().compare(strNm)==0)
            return i;
    }
    //student not found
    return -1;
}

//Locate course in array
int LocateCourse(const Course courses[],string strNm)
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
//Locate course registration
int LocateCourseRegistration(int indxCourse,Student stud)
{
    vector <int> CoursesRegFor =stud.getindexCoursesRegisteredFor();
    for (int i=0;i<CoursesRegFor.size();i++)
    {
        if (CoursesRegFor[i]==indxCourse)
            return i;
    }
    //student not registered for that course not found
    return -1;
}

//overload output function
ostream & operator << (ostream & OutputStream, const Course &course)
{
    OutputStream << " Course:" << course.Name<< endl;
    OutputStream << " Credits:" << course.NumCredits<< endl;
    OutputStream << " Description:" << course.CourseDescription<< endl;
    return OutputStream;
}

ostream & operator << (ostream & OutputStream, const Student & student)
{
    OutputStream << "Student Name:"<<student.name;
    return OutputStream;
}

bool operator <(const Student &Stud1, const Student &Stud2)
{
    if (Stud1.indexCoursesRegisteredFor.size() < Stud2.indexCoursesRegisteredFor.size())
        return true;
    else
        return false;
}


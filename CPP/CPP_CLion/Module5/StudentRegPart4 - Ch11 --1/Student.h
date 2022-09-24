//
// Created by 18604 on 2/27/2020.
//
#include <iostream>
#include <vector>

using namespace std;

#ifndef STUDENTREGSTART_STUDENT_H
#define STUDENTREGSTART_STUDENT_H


class Student
{
public:
    //constructor
    Student();

    // name of student
    string getName() const;
    void setName(string nm);

    // vector of courses students is registered for
    vector <int> getindexCoursesRegisteredFor() const;
    void setindexCoursesRegisteredFor(vector <int> vtr);

    //register student to a course
    void RegisterCourse(int Indx);
    //withdraw a student from a course
    void WithFromaCourse(int Indx);

    static int getNumStudentsRegNextSemester();
    static void updateNumStudentsRegNextSemester(int n);

    friend ostream & operator << (ostream & OutputStream, const Student & student);
    friend bool operator < (const Student &Stud1,const Student &Stud2);
private:
    string name; // name of student
    vector <int> indexCoursesRegisteredFor; //vector of courses students is registered for
    static int NumStudentsRegNextSemester;
};


#endif //STUDENTREGSTART_STUDENT_H

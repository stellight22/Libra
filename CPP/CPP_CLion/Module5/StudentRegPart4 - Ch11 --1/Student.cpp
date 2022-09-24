//
// Created by 18604 on 2/27/2020.
//
#include <iostream>
#include <vector>
using namespace std;

#include "Student.h"

//constructor
Student::Student() {};

// name of student
string Student::getName() const {
    return this->name;
}
void Student::setName(string nm) {
    this->name=nm;
}

// vector of courses students is registered for
vector <int> Student::getindexCoursesRegisteredFor() const {
    return this->indexCoursesRegisteredFor;
}
void Student::setindexCoursesRegisteredFor(vector <int> vtr) {
    this->indexCoursesRegisteredFor=vtr;
}

//register student to a course
void Student::RegisterCourse(int Indx){
    indexCoursesRegisteredFor.push_back(Indx);
}
//withdraw a student from a course
void Student::WithFromaCourse(int Indx){
    indexCoursesRegisteredFor.erase(indexCoursesRegisteredFor.begin()+Indx);
}


ostream & operator << (ostream & OutputStream, const Student & student)
{
    OutputStream<<"Student Name:"<<student.name;
    return OutputStream;
}

bool operator < (const Student &Stud1,const Student &Stud2)
{
    if (Stud1.indexCoursesRegisteredFor.size()<Stud2.indexCoursesRegisteredFor.size())
        return true;
    else
        return false;
}

int Student::getNumStudentsRegNextSemester() {
    return NumStudentsRegNextSemester;
}
void Student::updateNumStudentsRegNextSemester(int n) {
    NumStudentsRegNextSemester+=n;
}

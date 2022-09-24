//
// Created by 18604 on 2/27/2020.
//
#include <iostream>
using namespace std;

#include "Course.h"
//constructors
Course::Course(string nm) {Name = nm;};
Course::Course(string nm, int NumCred) {Name = nm; NumCredits=NumCred;};
Course::Course():Course("") {};

string Course::getName() const {
    return this->Name;
};

//set the name of the course
void Course::setName(string nm) {
    this->Name = nm;
};

//number of credits
//return the number of credits
int Course::getNumberOfCredits() const
{
    return this->NumCredits;
}
void Course::setNumCredits(int num)
{
    this->NumCredits = num;
}

//course description
//return the course description
string Course::getCourseDescription() const
{
    return this->CourseDescription;
}
//set the course description
void Course::setCourseDescription(string desc)
{
    this->CourseDescription=desc;
}

//over ride <<
ostream & operator << (ostream & OutputStream, const Course &course)
{
    OutputStream<<"Course:"<<course.Name<<endl;
    OutputStream<<"Num Credits:"<<course.NumCredits<<endl;
    OutputStream<<"Descript:"<<course.CourseDescription<<endl;
    return OutputStream;
}

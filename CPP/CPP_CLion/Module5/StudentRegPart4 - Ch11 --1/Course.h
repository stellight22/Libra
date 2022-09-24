//
// Created by 18604 on 2/27/2020.
//


#ifndef STUDENTREGSTART_COURSE_H
#define STUDENTREGSTART_COURSE_H


//course class
class Course
{
public:
    //constructors
    Course(string nm);
    Course(string nm, int NumCred);
    Course();

    //over ride <<
    friend ostream & operator << (ostream & OutputStream, const Course &course);

    //name of course
    // return the name of the course
    string getName() const;

    //set the name of the course
    void setName(string nm);

    //number of credits
    //return the number of credits
    int getNumberOfCredits() const;
    void setNumCredits(int num);

    //course description
    //return the course description
    string getCourseDescription() const;
    //set the course description
    void setCourseDescription(string desc);

private:
    string Name; //name of course
    int NumCredits;// Number of credits for course
    string CourseDescription;//Description of course
};


#endif //STUDENTREGSTART_COURSE_H

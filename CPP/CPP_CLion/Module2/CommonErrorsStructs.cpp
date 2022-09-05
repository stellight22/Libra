#include <iostream>
#include <string>

using namespace std;
struct student
{
    string name;
    short int age;
    float gpa;
    string major;
};

struct classInfo{
    string className;
    student students[2];
};

int main() {
    cout << "Common Error structs..." << endl;

    //1) Not defining an variable of type struct
    //cout<<student.name;
    //should be
    //student stu1 = {"Tim Smith",23,3.6,"Com Sci"};
    //cout<<stu1.name<<endl;


    //2) can not compare two structs
    /*
    student stu1 = {"Tim Smith",23,3.6,"Com Sci"};
    student stu2 = {"Jane Smith",25,3.8,"Com Sci"};
    if (stu1==stu2)
    {
        cout<<"They are equal"<<endl;
    }*/
    //should be
    /*
    student stu1 = {"Tim Smith",23,3.6,"Com Sci"};
    student stu2 = {"Jane Smith",25,3.8,"Com Sci"};
    if (stu1.name==stu2.name)
    {
        cout<<"They are equal"<<endl;
    }
     */

    //3) missing ; after } in struct definition
    /*
    struct example
    {
        string name;
        short int age;
    }
    */

    //4) can not print entire stuct
    /*
    student stu1 = {"Tim Smith",23,3.6,"Com Sci"};
    cout<<stu1<<endl;
    */
     //should be
     /*
    student stu1 = {"Tim Smith",23,3.6,"Com Sci"};
    cout<<stu1.name<<endl;
    */

    //5) arrays of structs - need to access element first
    //student COP3014Students[2];
    //COP3014Students[0]= {"Tim Smith",23,3.6,"Com Sci"};
    //COP3014Students[1] = {"Jane Smith",25,3.8,"Com Sci"};
    //cout<<COP3014Students.name[0];
    //should be
    //cout<<COP3014Students[0].name;

    //6) referencing arrays of nested strucs
/*
    classInfo classes[2];
    //COP 3014
    classes[0].className="COP 3014";
    classes[0].students[0]  = {"Tim Smith",23,3.6,"Com Sci"};
    classes[0].students[1]  = {"Jane Smith",25,3.8,"Com Sci"};
    classes[0].students[0].name = "name of student 1";
    //CEN 4681
    classes[0].className="CEN 4681";

*/

    return 0;
}
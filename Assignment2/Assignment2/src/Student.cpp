#include "Student.h"

void Student::setMajor(string mjor)
{
    major = mjor;
}

void Student::setStudentID(int studID)
{
    studentID = studID;
}

string Student::getMajor()
{
    return major;
}

int Student::getStudentID()
{
    return studentID;
}

Student::Student()
{
    major = "DCS";
    studentID = 0;
}

Student::Student(int studID,string mjor)
{
    major = mjor;
    studentID = studID;
}

void Student::display()
{
    cout << "The major is : " << major << endl;
    cout << "The StudentID is : " << studentID << endl;
}

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

Student::Student() : Person()
{
    major = "DCS";
    studentID = 0;
}

Student::Student(string address, string namePerson, string identityNo, int studID,string mjor) : Person(address, namePerson , identityNo)
{
    major = mjor;
    studentID = studID;
}

void Student::display()
{
    cout << "ID : " << studentID << endl;
    cout << "Major : " << major << endl;
    Person::display();
}

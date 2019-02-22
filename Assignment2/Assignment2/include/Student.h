#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"


class Student : public Person
{
    public:
        Student();
        Student(int studID,string mjor);
        int getStudentID();
        void setStudentID(int studID);
        string getMajor();
        void setMajor(string mjor);
        void display();


    protected:

    private:
        string major;
        int studentID;

};

#endif // STUDENT_H

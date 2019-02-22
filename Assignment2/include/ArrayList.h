#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include "Student.h"
#include "Person.h"

class ArrayList : public Student
{
    public:
        ArrayList();
        void addArrayList(string addr,string name,string ic,int id,string maj, bool boo, string choi);
        void changeArrayList(string addr,string name,string ic,int id,string maj, string choi);
        void getStudent(string addr,string name,string ic,int id,string maj,string choi);
        void getAllStudent(string addr,string name,string ic,int id,string maj);

    protected:

    private:
        string nameArray[50];
        string addressArray[50];
        string icArray[50];
        string majorArray[50];
        int idArray[50];
        bool boolArray[50];
};

#endif // ARRAYLIST_H

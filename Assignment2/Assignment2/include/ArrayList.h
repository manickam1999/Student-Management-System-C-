#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include "Student.h"

class ArrayList
{
    public:
        ArrayList();
        void addArrayList(string name, string addr, string ic, string maj, int id, bool boo);
        void changeArrayList(string name, string addr, string ic,string maj,int id, string choi);
        void getStudent(int id);
        void getAllStudent();

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

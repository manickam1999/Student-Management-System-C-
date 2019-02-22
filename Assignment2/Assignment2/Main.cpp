#include <iostream>
#include "Arraylist.h"
using namespace std;

int main()
{
    string name;
    string ic;
    string major;
    string addr;
    int id;
    bool boo;
    string checker = "Yes";
    string cho;
    string choi;

    ArrayList stuList;
    while(checker == "Yes" || checker =="yes")
    {
        cout << "What would you like to do : Add, Update, Print" << endl;
        getline(cin, cho);
        if(cho == "Add" || cho == "add")
        {
            stuList.addArrayList(name,addr,ic,major,id,boo);
        }
        else if(cho == "Update" || cho == "update")
        {
            stuList.changeArrayList(name,addr,ic,major,id,cho);
        }
        else if(cho == "Print" || cho == "print")
        {

            cout << "Print single or all students" << endl;
            getline(cin, choi);
            if(choi == "single" || choi == "Single")
            {
                stuList.getStudent(id);
            }
            else if(choi == "all" || choi == "All")
            {
                stuList.getAllStudent();
            }
        }
        cout << "Would you still like to continue? Yes , No" << endl;
        getline(cin, checker);
    }

}







#include <iostream>
#include "Arraylist.h"
using namespace std;

int main()
{
    int id;
    bool boo;
    string checker = "Yes";
    string cho;
    string choi;
    string name;
    string ic;
    string major;
    string addr;
    ArrayList stuList;


    while(checker == "Yes" || checker == "yes")
    {
        cout << "What would you like to do : Add, Update, Print" << endl;
        getline(cin, cho);
        if(cho == "Add" || cho == "add")
        {
            stuList.addArrayList(addr,name,ic,id,major,boo,choi);
        }
        else if(cho == "Update" || cho == "update")
        {
            stuList.changeArrayList(addr,name,ic,id,major,choi);
        }
        else if(cho == "Print" || cho == "print")
        {

            cout << "Print single or all students" << endl;
            getline(cin, choi);
            if(choi == "single" || choi == "Single")
            {
                stuList.getStudent(addr,name,ic,id,major,choi);
            }
            else if(choi == "all" || choi == "All")
            {
                stuList.getAllStudent(addr,name,ic,id,major);
            }
        }
        else
        {
            cout << "Please input only the given choices : Add, Update, Print." << endl;
        }

        cout << "Would you still like to continue using the system? Yes , No" << endl;
        getline(cin, checker);
        system("CLS");
    }

}







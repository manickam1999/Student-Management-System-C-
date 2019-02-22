#include "ArrayList.h"


ArrayList::ArrayList()
{
     for(int i=0; i < 50 ; i++)
     {
         nameArray[i] = "";
         addressArray[i] = "";
         icArray[i] = "";
         majorArray[i] = "";
         idArray[i] = 0;
         boolArray[i] = false;
     }
}

void ArrayList::addArrayList(string name, string addr, string ic, string maj, int id, bool boo)
{
    int i=0;
    while(boolArray[i] == true)
    {
        i++;
    }
    boolArray[i] = true;
    if(i == 0)
    {
       idArray[i]++;
    }
    else
    {
        idArray[i] = idArray[i-1] + 1;
    }
    cout << "What is your name" << endl;
    getline(cin, name);
    cout << "Your name is " << name << endl;
    nameArray[i] = name;
    cout << "What is your address" << endl;
    getline(cin, addr);

    cout << "Your address is " << addr << endl;
    addressArray[i] = addr;
    cout << "what is your IC"<< endl;
    getline(cin, ic);

    cout << "Your IC is " << ic << endl;
    icArray[i] = ic;
    cout << "What is your major" << endl;
    getline(cin, maj);

    cout << "Your major is " << maj << endl;
    majorArray[i] = maj;
    cout << "Your Student ID is " << idArray[i] << endl;
    cout << "End of Add" << endl;
}

void ArrayList::changeArrayList(string name, string addr, string ic,string maj,int id, string choi)
{
    string checker = "Yes";
    cout << "What is your ID" << endl;
    cin >> id;
    cin.ignore(999,'\n');
    cout << "Current name is : " << nameArray[id-1] << endl;
    cout << "Current address is : " << addressArray[id-1] << endl;
    cout << "Current IC is : " << icArray[id-1] << endl;
    cout << "Current major is : " << majorArray[id-1] << endl;
    while(checker == "Yes" || checker == "yes")
    {
        cout << "Which detail would you like to change : name , address , IC , major " << endl;
        getline(cin,choi);
        if(choi == "name" || choi == "Name")
        {
            cout << "Input your new name" << endl;
            getline(cin, name);
            cout << "Successfully updated" << endl;
            nameArray[id-1] = name;
        }
        else if(choi == "address" || choi == "Address")
        {
            cout << "Input your new address" << endl;
            getline(cin, addr);
            cout << "Successfully updated" << endl;
            addressArray[id-1] = addr;
        }
        else if(choi == "IC" || choi == "ic" || choi =="Ic")
        {
            cout << "Input your new IC" << endl;
            getline(cin, ic);
            cout << "Successfully updated" << endl;
            icArray[id-1] = ic;
        }
        else if(choi == "major" || choi == "Major")
        {
            cout << "Input your new major" << endl;
            getline(cin, maj);
            cout << "Successfully updated" << endl;
            majorArray[id-1] = maj;
        }
        else
        {
            cout << "Wrong choice" << endl;
        }
        cout << "Do you wish to continue? Yes, No" << endl;
        getline(cin, checker);
    }
    cout << "End of change" << endl;
}

void ArrayList::getStudent(int id)
{
    cout << "Please input ID" << endl;
    cin >> id;
    cout << "ID : " << id << endl;
    cout << "Name : " << nameArray[id-1] << endl;
    cout << "Address : " << addressArray[id-1] << endl;
    cout << "IC : " << icArray[id-1] << endl;
    cout << "Major : " << majorArray[id-1] << endl;
}

void ArrayList::getAllStudent()
{
    cout << "Now printing all student details" << endl;
    for(int i = 0;boolArray[i] == true;i++)
    {
        cout << "ID : " << idArray[i] << endl;
        cout << "Name : " << nameArray[i] << endl;
        cout << "Address : " << addressArray[i] << endl;
        cout << "IC : " << icArray[i] << endl;
        cout << "Major : " << majorArray[i] << endl;
    }
    cout << "Ending printing" << endl;
}



#include "ArrayList.h"


ArrayList::ArrayList()
{
     for(int i=0; i < 50 ; i++)
     {
         nameArray[i] = getNamePerson();
         addressArray[i] = getAddress();
         icArray[i] = getIdentityNo();
         majorArray[i] = getMajor();
         idArray[i] = getStudentID();
         boolArray[i] = false;
     }
}

void ArrayList::addArrayList(string addr,string name,string ic,int id,string maj, bool boo,string choi)
{
    choi = "yes";
    system("CLS");
    int i=0;
    while(choi == "yes" || choi == "Yes")
    {


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
        setNamePerson(name);
        cout << endl;
        cout << "Your name is " << getNamePerson() << endl;
        cout << "===========================================================" << endl;
        nameArray[i] = getNamePerson();
        cout << "What is your address" << endl;
        getline(cin, addr);
        setAddress(addr);
        cout << endl;
        cout << "Your address is " << getAddress() << endl;
        cout << "===========================================================" << endl;
        addressArray[i] = getAddress();
        cout << "what is your IC"<< endl;
        getline(cin, ic);
        setIdentityNo(ic);
        cout << endl;
        cout << "Your IC is " << getIdentityNo() << endl;
        cout << "===========================================================" << endl;
        icArray[i] = getIdentityNo();
        cout << "What is your major" << endl;
        getline(cin, maj);
        setMajor(maj);
        cout << endl;
        cout << "Your major is " << getMajor() << endl;
        cout << "===========================================================" << endl;
        majorArray[i] = getMajor();
        cout << "Your Student ID is " << idArray[i] << endl;
        setStudentID(idArray[i]);
        cout << "===========================================================" << endl;
        cout << "End of Add" << endl;
        cout << endl;
        cout << "Would you like to add again?" << endl;
        getline(cin,choi);
        cout << endl;
    }
}

void ArrayList::changeArrayList(string addr,string name,string ic,int id,string maj, string choi)
{
    system("CLS");

    string checker = "Yes";
    cout << "What is your ID" << endl;
    cin >> id;
    cin.ignore(999,'\n');
    setNamePerson(nameArray[id-1]);
    cout << "Current name is : " << getNamePerson() << endl;
    setAddress(addressArray[id-1]);
    cout << "Current address is : " << getAddress() << endl;
    setIdentityNo(icArray[id-1]);
    cout << "Current IC is : " << getIdentityNo() << endl;
    setMajor(majorArray[id-1]);
    cout << "Current major is : " << getMajor() << endl;
    cout << "===========================================================" << endl;
    while(checker == "Yes" || checker == "yes")
    {
        cout << "Which detail would you like to change : name , address , IC , major " << endl;
        getline(cin,choi);
        cout << "===========================================================" << endl;
        if(choi == "name" || choi == "Name")
        {
            cout << "Input your new name" << endl;
            getline(cin, name);
            setNamePerson(name);
            cout << "Successfully updated" << endl;
            nameArray[id-1] = getNamePerson();
            cout << "===========================================================" << endl;
        }
        else if(choi == "address" || choi == "Address")
        {
            cout << "Input your new address" << endl;
            getline(cin, addr);
            setAddress(addr);
            cout << "Successfully updated" << endl;
            addressArray[id-1] = getAddress();
            cout << "===========================================================" << endl;
        }
        else if(choi == "IC" || choi == "ic" || choi =="Ic")
        {
            cout << "Input your new IC" << endl;
            getline(cin, ic);
            setIdentityNo(ic);
            cout << "Successfully updated" << endl;
            icArray[id-1] = getIdentityNo();
            cout << "===========================================================" << endl;
        }
        else if(choi == "major" || choi == "Major")
        {
            cout << "Input your new major" << endl;
            getline(cin, maj);
            setMajor(maj);
            cout << "Successfully updated" << endl;
            majorArray[id-1] = getMajor();
            cout << "===========================================================" << endl;
        }
        else
        {
            cout << "Wrong choice" << endl;
        }
        cout << "Do you wish to continue changing? Yes, No" << endl;
        getline(cin, checker);
        cout << "===========================================================" << endl;
    }
    cout << "End of change" << endl;
    cout << endl;
}

void ArrayList::getStudent(string addr,string name,string ic,int id,string maj,string choi)
{
    system("CLS");
    choi = "yes";
    while(choi == "yes" || choi == "Yes")
    {
    cout << "Please input ID" << endl;
    cin >> id;
    cout << "===========================================================" << endl;
    cin.ignore();
    addr = addressArray[id-1];
    name = nameArray[id-1];
    ic = icArray[id-1];
    maj = majorArray[id-1];
    Student student(addr,name,ic,id,maj);
    student.display();
    cout << "===========================================================" << endl;
    cout << "Would you like to print another ID?" << endl;
    getline(cin,choi);
    cout << endl;

    }

}

void ArrayList::getAllStudent(string addr,string name,string ic,int id,string maj)
{
    system("CLS");

    cout << "Now printing all student details" << endl;
    cout << "===========================================================" << endl;
    for(int i = 0;boolArray[i] == true;i++)
    {
        id = idArray[i];
        name = nameArray[i];
        ic = icArray[i];
        maj = majorArray[i];
        addr = addressArray[i];

        Student student(addr,name,ic,id,maj);
        student.display();

        cout << "===========================================================" << endl;


    }

    cout << "Ending printing" << endl;
}



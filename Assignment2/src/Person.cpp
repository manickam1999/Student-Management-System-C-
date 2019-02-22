#include "Person.h"


void Person::setIdentityNo(string idNo)
{
    identityNo = idNo;
}

string Person::getIdentityNo()
{
    return identityNo;
}

void Person::setNamePerson(string name)
{

    namePerson = name;
}

string Person::getNamePerson()
{
    return namePerson;
}

void Person::setAddress(string addr)
{

    address = addr;
}

string Person::getAddress()
{
    return address;
}

Person::Person()
{
    address = "";
    namePerson = "";
    identityNo = "999";
}

Person::Person(string addr,string name,string idNo)
{
    address = addr;
    namePerson = name;
    identityNo = idNo;
}

void Person::display()
{
        cout << "IC : " << identityNo << endl;
        cout << "Name : " << namePerson << endl;
        cout << "Address : " << address << endl;
}

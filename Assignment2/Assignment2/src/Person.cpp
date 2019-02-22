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
    cout << "The address is : " << address << endl;
    cout << "The name is : " << namePerson << endl;
    cout << "The IC No is : " << identityNo << endl;
}

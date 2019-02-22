#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
#include <sstream>

using namespace std;


class Person
{
    public:
        Person();
        Person(string address,string namePerson,string identityNo);
        void setIdentityNo(string identityNo);
        string getIdentityNo();
        void setNamePerson(string namePerson);
        string getNamePerson();
        void setAddress(string namePerson);
        string getAddress();
        void display();

    protected:

    private:
        string address;
        string namePerson;
        string identityNo;
};

#endif // PERSON_H

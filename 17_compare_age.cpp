/*
Create a program with a class named Person that saves some data (last name, first name, age) of a person. A member function called ãInsertÒ adds data to the data members of the class.
A member function called ãCompareÒ should also be created in the class.
A person calls this member function and an additional person should exist as a transfer parameter.
This member function is used to check and display which of the two persons is older.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

class Person
{
    public:
    // add data to datamembers of the class
        string fname , lname;
        int age; 
        void insert();
        void compare(Person);
};

void Person::insert()
{
    cout << "First Name: " << endl;
    cin >> fname;
    cout << "last name :" << endl;
    cin >> lname;
    cout << "age: " << endl;
    cin >> age;
}

void Person::compare (Person p)
{
    if (age > p.age)
        cout << fname << " " << lname << "is older  " << endl;
    else
        cout <<p.fname << " " << p.lname << " is older "<< endl;
}
int main (void)
{
    Person p1,p2;
    p1.insert();
    cout << endl;
    p2.insert();
    p1.compare(p2);
}






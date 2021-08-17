#include <iostream>
#include <cstring>
#include <cctype>
#include "student.h"
using namespace std;

Student::Student()
{
    strcpy(name,"");
    age = 0;
}

Student::Student(char* n, int a)
{
    strcpy(name,n);
    age = a;
}

void Student::display() const
{
    cout << "STUDENT\t\t" << "AGE" << endl;
    cout << name << "\t\t" << age << endl;
}

char* Student::getName() const
{
    return name;
}

int Student::getAge() const
{
    return age;
}

#include <iostream>
class Student
{
public:
    Student();
    Student(char* n, int a);
    void display() const;
    char* getName() const;
    int getAge() const;
private:
    char name[20];
    int age;

};

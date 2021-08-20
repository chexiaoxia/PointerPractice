#include <iostream>
class Student
{
public:
    Student();
    Student(char* n, int a);
    void display() const;
    const char* getName() const;
    int getAge() const;
    void setName(char* n);
    void setAge(int a);
private:
    char name[20];
    int age;

};

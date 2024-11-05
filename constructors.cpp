#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
    float gpa;

    Student(string name, int age, float gpa)
    {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main()
{
    Student student1("Steve Jobs", 22, 3.91);
    Student student2("Patrick", 21, 3.35);
    Student student3("John", 23, 2.9);

    cout << student3.name << endl;
    cout << student3.age << endl;
    cout << student3.gpa << endl;

    return 0;
}
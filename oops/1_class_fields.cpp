#include <iostream>
using namespace std;

class student
{
    public:
        string name;
        int age;
        string grade;
};

int main()
{
    student student1;
    student student2;

    student1.name = "alia";
    student1.age = 18;
    student1.grade = "12th";
    
    student2.name = "ved";
    student2.age = 16;
    student2.grade = "11th";

    cout << student1.name << " " << student1.age << " " << student1.grade << endl;
    cout << student2.name << " " << student2.age << " " << student2.grade << endl;

    return 0;
}
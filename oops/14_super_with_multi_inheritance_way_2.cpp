#include <iostream>
using namespace std;

class person
{
protected:
    string name;
    int age;

    public :
        person(string name, int age)
    {
        this->name = name;
        this->age =age;
    }

    void printDetails()
    {
        cout << this->name << " " << this->age << " " << endl;
    }
};

class Scholarship : public person
{
protected:
    string scholarship;

public:
    Scholarship(string name, int age, string scholarship) : person(name, age)
    {
        this->scholarship = scholarship;
    }

    void printScholarship()
    {
        cout << "Scholarship: " << this->scholarship << " " << endl;
    }
};

class Student : public Scholarship
{
    private :
        string grade;

public:
    Student(string name, int age, string scholarship, string grade) : Scholarship(name, age, scholarship)
    {
        this->grade = grade;
    }

    void printGrade()
    {
        cout << "Grade: " << this->grade << endl;
    }
};

int main()
{
    Student student1("vasu", 18, "On Marit Base", "18th");
    student1.printDetails();
    student1.printScholarship();
    student1.printGrade();

    return 0;
}
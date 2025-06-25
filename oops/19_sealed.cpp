#include <iostream>
using namespace std;

class  Person 
{
    protected :
        string name;
        int age;

    public :
        Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    virtual void printDetails()=0;

    virtual ~Person() {}
};

class Student final : public Person 
{
    private :
        string grade;

    public :
        Student(string name, int age, string grade) : Person(name, age)
        {
            this->grade = grade;
        }

        void printDetails()override
        {
            cout << name << " " << age << " " << grade << endl;
        }
};

int main()
{
    Student s("vasu", 18, "12th");
    s.printDetails();

    return 0;
}
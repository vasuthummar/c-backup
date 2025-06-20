#include <iostream>
using namespace std;

class person 
{
    private :
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

class student : public person 
{
    private : 
        string grade;

    public:
        student(string name, int age, string grade) : person(name, age)
        {
            this->grade = grade;
        }

        void printStudentDetails()
        {
            person :: printDetails();

            cout << "Grade: " << this->grade << endl; 
        }
};

int main()
{
    student student1("vasu", 18, "18th");
    student1.printStudentDetails();

    return 0;
}
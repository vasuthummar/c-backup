#include <iostream>
#include <string>
using namespace std;

class person
{
    private :
        string name;
        int age;
    
    public :
        string getName()
        {
            return this->name;
        }

        void setName(string value)
        {
            this->name = value;
        }

        int getAge()
        {
            return this->age;
        }

        void setAge(int value)
        {
            this->age = value;
        }

        void printDetails()
        {
            cout << this->name << " " << this->age << " " << endl;
        }
};

class scholarship : public person
{
    private :
        string scholarship;
    
    public :
        string getScholarship()
        {
            return this->scholarship;
        }

        void setScholarship(string value)
        {
            this->scholarship = value;
        }

        void printScholarship()
        {
            cout << "Scholarship: " <<this->scholarship << " " << endl;
        }
};

class student : public scholarship
{
    private : 
        string grade;

    public :
        string getGrade()
        {
            return this->grade;
        }

        void setGrade(string value)
        {
            this->grade = value;
        }

        void printGrade()
        {
            cout << "Grade: " << this->grade << " " << endl;
        }
};

int main()
{
    student student1;

    student1.setName("vasu");
    student1.setAge(18);
    student1.printDetails();

    student1.setScholarship("on marit");
    student1.printScholarship();


    student1.setGrade("12th");
    student1.printGrade();

    return 0;
}
#include <iostream>
using namespace std;

class student
{
    private :
        string _name;
        int _age;
        string _grade;
     
    public :
        student(string name, int age, string grade)
      {
        this->_name = name;
        this->_age = age;
        this->_grade = grade;
      }

    //   string getName() const
    //   {
    //     return this->name;
    //   }

    //   void setName(const string& name)
    //   {
    //     this->name = name;
    //   }

    //   int getAge() const
    //   {
    //     return this->age;
    //   }

    //   void steAge(int age)
    //   {
    //     this->age = age;
    //   }

    //   string getGrade() const
    //   {
    //     return this->grade;
    //   } 

    //   void setGrade(const string& grade)
    //   {
    //     this->grade = grade; 
    //   }

      void printDetails()
      {
        cout << this->_name << " " <<this->_age << " " << this->_grade << endl;
      }
};

int main()
{
    student student1("vasu", 18, "12th");
    student student2("ved", 16, "10th");

    student1.printDetails();
    student2.printDetails();

    return 0;
}
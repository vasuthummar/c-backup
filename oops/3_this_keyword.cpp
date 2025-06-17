#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int age;
    string grade;

  public:
    void setName(string name)
    {
      this->name = name;
    }

    void setAge(int age)
    {
      this->age = age;
    }

    void setGrade(string grade)
    {
      this->grade = grade;
    }

    string getName()
    {
      return this->name;
    }

    int getAge()
    {
      return this->age;
    }

     string getGrade()
     {
       return this->grade;
     }
};

int main()
{
  student student1;
  student student2;

  student1.setName("harsh");
  student1.setAge(18);
  student1.setGrade("12th");

  student2.setName("harsh");
  student2.setAge(18);
  student2.setGrade("12th");

  cout << student1.getName() << " " << student1.getAge() << " " << student1.getGrade() << endl;
  cout << student2.getName() << " " << student2.getAge() << " " << student2.getGrade() << endl;

  return 0;
}
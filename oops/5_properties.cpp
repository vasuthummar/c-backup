#include <iostream>
using namespace std;

class student
{
  private:
    string _name;
    int _age;
    string _grade;

    public:
      string getName() const
      {
        return this->_name;
      }

      void setName(const string& value)
      {
        this->_name = value;
      }

      int getAge() const
      {
        return _age;
      }

      void setAge(int value)
      {
        this->_age = value;
      }

      string getGrade() const
      {
        return _grade;
      }

      void setGrade(const string& value)
      {
        this->_grade = value;
      }

      void printDetails()
      {
        cout << this->_name << " " << this->_age << " " << this->_grade << endl;
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

 // cout << student1.getName() << " " << student1.getAge() << " " << student1.getGrade() << endl;
 // cout << student2.getName() << " " << student2.getAge() << " " << student2.getGrade() << endl;

  student1.printDetails();
  student2.printDetails();

  return 0;
}
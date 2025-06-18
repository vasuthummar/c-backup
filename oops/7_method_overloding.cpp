#include <iostream>
using namespace std;

class student
{
    private :
      string _name;
      int _age;
      string _grade;

    public :
      student()
      {
        this->_name = "";
        this->_age = 0;
        this->_grade = "";
      }

      void setInfo(const string& name)
      {
        this->_name = name;
      }

      void setInfo(const string& name, int age)
      {
        this->_name = name;
        this->_age = age;
      }

      void setInfo(const string& name, int age, const string& grade)
      {
        this->_name = name;
        this->_age = age;
        this->_grade = grade;
      }

      void printDetails() const
      {
        cout << this->_name << " " << this->_age << " " << this->_grade << endl;
      }

      void printDetails(const string& label) const
      {
        cout << label << "-" << this->_name << " " << this->_age << " " << this->_grade << endl;
      }

      string getName() const {return this->_name;}
      int getAge() const {return this->_age;}
      string getGrade() const {return this->_grade;}
};

int main()
{
    student student1;

    cout << "=== DEMONSTRATING METHOD OVRELODING===" << endl;

    cout << "\n1. Initial state:" << endl;
    student1.printDetails();

    cout << "\n2. After setting name only:" << endl;
    student1.setInfo("vasu");
    student1.printDetails();

    student1.printDetails("name only");

    cout << "\n3. After setting name and age:" << endl;
    student1.setInfo("vasu", 18);
    student1.printDetails();

    student1.printDetails("name & age");

    cout << "\n3. After setting all fields:" << endl;
    student1.setInfo("vasu", 18, "A++");
    student1.printDetails();

    student1.printDetails("All info");

    cout << "\n=== DEMONSTRATING COMPILER'S METHOD SELECTION ===" << endl;

    return 0;

}
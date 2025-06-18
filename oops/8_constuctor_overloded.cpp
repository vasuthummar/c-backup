#include <iostream>
using namespace std;

class student
{
  private:
    string _name;
    int _age;
    string _grade;

   public:
     student()
      {
        this->_name="";
        this->_age=0;
        this->_grade="";
      }

      student(string name)
      {
        this->_name= name;
        this->_age= 0;
        this->_grade="";
      }

      student(string name,int age)
      {
        this->_name= name;
        this->_age= age;
        this->_grade="";
      }

      student(string name,int age,string grade)
      {
        this->_name= name;
        this->_age= age;
        this->_grade= grade;
      }

     void printDetails()
     {
       cout<<this->_name<<" "<<this->_age<<" "<<this->_grade<<endl;
     }
};

int main()
{
  cout << "Creating student1 with default constructor:" << endl;
  student student1;
  student1.printDetails();
  cout << endl;

  cout << "Creating student2 with only name:" << endl;
  student student2("vasu");
  student2.printDetails();
  cout << endl;

  cout << "Creating student3 with name and age:" << endl;
  student student3("vasu", 18);
  student3.printDetails();
  cout << endl;

  cout << "Creating student4 name,age and grade:" << endl;
  student student4("vasu", 18, "A++");
  student4.printDetails();
  cout << endl;

  return 0;
}
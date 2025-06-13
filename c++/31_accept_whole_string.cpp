#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str;

  cout<<"Enter a string: ";
  getline(cin, str);

  cout << "value is " << str;

  return 0;
}
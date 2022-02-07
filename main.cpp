#include <iostream>
using namespace std;
//Add some comment
// This program is a simple intro to C++ example of debugging
int main()
{
  int age;
  string name;
  char last initial;

  cout<<"Hi. What is your first name? "
  cin<<name;
  cout<<"name, what is the first letter of your last name? ";
  cin>>last initial;
  cout<<"Thanks, "<<name<< <<last initial<<.<<endl;
  cout<<"Please also tell me how old you are: ";
  cin>>age>>endl;

  if( age < 12 )
  {
    cout<<"Hey kid, how do you like school?\n";
  }
  if( age < 18 )
    cout<<"Cool!"endl;
    cout<<"How's highschool going?\n";
  else if( age == 18 )
  {
    cout<<"Hey!"<<endl;
  }
  else
  {
    cout<<"Pleased to meet you!\n";
  }

  return 0;
}

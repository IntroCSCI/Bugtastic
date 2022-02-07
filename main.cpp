#include <iostream>
using namespace std;

// This program is a simple intro to C++ example of debugging
int main()
{
  int age;
  string name;
  char last initial;

  cout<<"Hi. What is your first name? "<<endl;
  cin<<name<<endl;
  cout<<"name, what is the first letter of your last name? "<<endl;
  cin>>last initial<<endl;
  cout<<"Thanks, "<<name<<" "<<last initial<<"."<<endl;
  cout<<"Please also tell me how old you are: "<<endl;
  cin>>age>>endl;

  if( age < 12 )
  {
    cout<<"Hey kid, how do you like school?\n";
  }
  else if( age < 18 )
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

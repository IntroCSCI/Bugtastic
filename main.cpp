#include <iostream>
using namespace std;

// This program is a simple intro to C++ example of debugging
int main()
{
  int age;
  string name;
  //cannot have space in variable name
  char last_initial;
//missing ; at the end of cout
  cout<<"Hi. What is your first name? ";

  cin>>name;
  cout<<"name, what is the first letter of your last name? ";
  cin>>last_initial;
  //Missing "" between name, last initial and endl
  cout<<"Thanks, "<<name<<" "<<last_initial<<"."<<endl;
  cout<<"Please also tell me how old you are: " << endl;
  cin>>age;

  if( age < 12 )
  {
    cout<<"Hey kid, how do you like school?\n";
  }
  //missing brackets for if statement
  if( age < 18 ){
    cout<<"Cool!"<<endl;
    cout<<"How's highschool going?\n";
}
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

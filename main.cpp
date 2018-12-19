#include <iostream>
#include <string>

using namespace std;
string getPassword();
bool valid(string);
int main()
{
  string original, backup;
  //get original password
  cout<<"Password: ";
  //gets user input repeatedly until a word at least 8 characters long entered
  original = getPassword();
  //do the same, getting a backup password
  cout<<"\nBackup password: ";
  backup = getPassword();

  //validates that neither password is literally "password"
  if( valid(original) && valid(backup) )
  {
    cout<<"\nThank you.\n";
  }
  else
  {
    cout<<"\nSorry, passwords cannot be 'password'\n";
  }
  return 0;
}

string getPassword()
{
string password;
int not8 = 1;
do
{ 
  cin>>password;
  if( password.length() >= 8)
  {
    not8 = 0;
  }
  else
  {
    cout<<"Password must be at least 8 characters long.\n";
    not8 = 1;
  } 
}while(not8 == 1);

  return password;
}

bool valid(string password)
{
if(password == "password")
{ 
  return false;
}

else
{
return true;
}
}

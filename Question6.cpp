/*The following program takes the first name and last name from 
the user and says the first letter of the first name and 
the first letter of the last name with a beautiful sentence.*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	while(true)
	{
	string firstname,lastname;
	cout<<"\nWhat is your first name?";
	cin >>firstname;
	cout<<"What is your last name?"; 
	cin >>lastname;
	cout<<"Hello \nI love you \n"<<firstname.at(0)<<'.'
	<<lastname.at(0);
	cout<<"\nOn behalf of ATOM";
    }
	return 0;
}
//M.T
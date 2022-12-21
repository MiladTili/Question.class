/*The following program takes a number from the user 
and determines whether this number is even or odd.*/
#include<iostream>
using namespace std;
int main()
{
	while(true)
	{
	int number;
	cout<<"\nEnter the number:";
	cin >> number ;
	if (number%2==0)
	cout<<"This is number is even";
	else 
	cout<<"This is an odd number" ;
    }
	return 0                      ;
}
//M.T
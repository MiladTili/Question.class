/*The following program is such that the user gives us 
an integer and we show him the factorial of that number.*/
#include<iostream>
using namespace std;
int main()
    {
    while(true)
    {
	int number,i,Factorial=1;
	cout<<"\nEnter the number:";
	cin >>number;
	for(i=1;i<=number;i++)
	Factorial*=i;
	cout<<"Factorial="<<Factorial;
    }
    return 0;
}
//M.T
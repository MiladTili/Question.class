/*The following program is such that the user gives us the wattage 
of the lamp and we tell him the life expectancy of the lamp.*/
#include<iostream>
using namespace std;
int main()
{
	while(true)
	{
	int Watt;
	cout<<"\nEnter the wattage of the lamp:";
	cin >> Watt;
	switch (Watt)
	{
	case 25:
	    cout<<"The life of the lamp is 2500 days";
	    break;
	case 60:
		cout<<"The life of the lamp is 1000 days";
		 break;
	case 100:
		cout<<"The life of the lamp is 750 days";
		 break;
	default:
	cout<<"The number is wrong.\nEnter the number agein";	 
	}
    }  
	return 0;
}
//M.T
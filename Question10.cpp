/*The following program is such that if the user gives the first letter 
of the following delsters and gets the name of the delster com
LEMON_PEACH_TROPICAL_APIIE_MALT */
#include<iostream>
#include<string>
using namespace std;
int main()
{
	while(true)
	{
	char drink;
	cout<<"\nWhat drink does he drink?";
    cin >>drink;
    switch(drink)
    {
    case 'L':
        cout<<"Your drink is LEAMON";
        break;
    case 'P':
        cout<<"Your drink is PEACH";
        break;
    case 'T':
        cout<<"Your drink is TROPCAL";
        break;
    case 'A':
        cout<<"Your drink is APLLE";
        break;
    default:
    cout<<"Your drink is MALT";
    }
    }
    return 0 ;
}
//M.T
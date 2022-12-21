/*The following program takes the radius of the circle and
 gives you the circumference and area of ??the circle*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	const float PI=3.14;
	while(true)
	{
	float radius,area,environment;
	cout<<"\nEnter the radius:";
	cin >>radius;
	area=radius*radius*PI;
	cout<<"Atea of circle"<<area;
	environment=radius*PI*2;
	cout<<"\nThe circumference of a circle:"<<environment;
    }
	return 0;
}//M.T
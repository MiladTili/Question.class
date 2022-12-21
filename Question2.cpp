/*The program is such that any amount of money you give to
 500, 200, 100, 50, 20, and 10 bills. divides */
#include <iostream> 
using namespace std;
int main ()
{
	const int A=500;
	const int B=200;
	const int C=100;
	const int D=50;
	const int E=20;
	const int F=10;
	int Z,X,Y,W,V,U,money;
	cout<<"how much money:";
	cin >>money;
	Z=money/A;
	cout<<"money 500:"<<Z;
	money=money%A;
	X=money/B;
	cout<<"\nmoney 200:"<<X;
	money=money%B;
	Y=money/C;
	cout<<"\nmoney 100:"<<Y;
	money=money%Y;
	W=money/D;
	cout<<"\nmoney 50:"<<W;
	money=money%W;
	V=money/E;
	cout<<"\nmoney 20:"<<V;
	money=money%V;
	U=money/F;
	cout<<"\nmoney 10:"<<U;
	return 0;
}
//M.T
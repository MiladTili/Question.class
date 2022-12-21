/*The program takes the distance from home 
to school in kilometers and gives it in meters*/
#include<iostream>
using namespace std;
/*This program converts Km to m*/
int main()
{
   const int K_TO_M=1000;// The conversion parameter
   while(true)
   {
   float km,m;
   cout<<"\n Enter the number of kilometers:";// Output
   cin >>km;// Input
   m=km*K_TO_M;
   cout<<"THE result in Meter is:"<<m;// Output
   }
   return 0;
}
//M.T
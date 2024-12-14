#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double x,y,z;
	x=15.674,y=235.73,z=9525.9864;
	cout.setf(ios::fixed, ios::floatfield);
 	cout.setf(ios::showpoint);
  	cout<<setprecision(5)<<"setprecision(2)"<<endl;
  	cout<<"x ="<<x<<endl;
  	cout<<"y ="<<y<<endl;
  	cout<<"z ="<<z<<endl;
	
	cout<<"x ="<<setprecision(3)<<x<<endl;
  	cout<<"y ="<<setprecision(2)<<y<<endl;
  	cout<<"z ="<<setprecision(4)<<z<<endl;
}

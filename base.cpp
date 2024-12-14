#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	while(true){
	float base,height;
	double area;
	cout<<"enter base";
	cin>>base;
	cout<<"enter height";
	cin>>height;
	area = 0.5*base*height;
	cout<<"area ="<<setprecision(2)<<area;
	
	}
}

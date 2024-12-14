#include <iostream>
using namespace std;
int main()
{
	double distance,time,speed;
	cout<<"enter the distance travaled in miles";
	cin>>distance;
	cout<<"enter the speed of vehicle(mph)";
	cin>>speed;
	time=distance/speed;
	cout<<"time required reach destination="<<time<<" hours "<<endl;
} 

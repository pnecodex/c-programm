#include <iostream>
using namespace std;
int main()
{
	while(true)
	{
	int hrs,w,d;
	cout<<"enter number of hours";
	cin>>hrs;
	w = hrs / 168;
	hrs = hrs % 168;
	d = hrs / 24;
	hrs = hrs % 24;
	cout<<"weeks"<<w<<endl;
	cout<<"days"<<d<<endl;
	cout<<"hours"<<hrs<<endl;
	cout<<endl;

}
}

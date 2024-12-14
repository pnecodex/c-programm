#include <iostream>

using namespace std;
int main ()
{
	int a[5], sum=0;
	

	float avg=0.0;
	for (int i=0; i<5;i++)
	
	{
		cout<<"Enter value";
		cin>>a[i];
		sum=sum+a[i];
	}
	avg=sum/5.0;
	cout<<"Sum is "<<sum<<endl;
	cout<<"average is"<<avg<<endl;
	
	return 0;
}

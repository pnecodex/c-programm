#include <iostream>

using namespace std;

int main ()
{
	int arr[5],i,sum=0;
	float avg=0.0;
	
	for (i=0;i<5;i++)
	{
		cout<<"Enter value:";
		cin>>arr[i];
		
		sum=sum+arr[i];
	}
	avg =sum/5.0;
	cout<<"sum is "<<sum<<endl;
	cout<<"Average is"<<avg;
	
return 0;	
}

#include<iostream>
using namespace std;
int main()
{
	int a[99],b;
	cout<<"Enter the value of b=";
	cin>>b;
	for(int i=0;i<=b;i++)
	{
		cout<<"Enter the value of integer=";
		cin>>a[i];
	}
	for(int j=0;j<=b;j++)
	{
		cout<<"The number entered was="<<a[j]<<endl;
	}
}

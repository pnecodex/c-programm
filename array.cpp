#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the limit of loop";
	cin>>n;
	int arr[n];
	int j;
	cout<<"Enter the value of elements";    //for(int i=0;i<6;i++)
	for(j=0;j<=n;j++)
	{
		cin>>arr[j];
	}
	for(j=0;j<=n;j++)
	{
		cout<<arr[j]<<endl;
	}
	
}

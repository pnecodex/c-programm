#include<iostream>
using namespace std;
int main()
{
	int arr[4];
	int arr1[4];
	int arr2[4];
	int j,i,k;
	cout<<"Enter the value of elements";    //for(int i=0;i<6;i++)
	for(i=0;i<=4;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the value of elements";
	
	for(j=0;j<=4;j++) //show value
	{
		cin>>arr1[j];
	
	}
	for(k=0;k<=4;k++) //show value
	{
		arr2[k]=arr[i]+arr1[j];
	}
	cout<<"sum of the value of elements";
	
	for(k=0;k<=4;k++)
	{
		cout<<arr2[k++]<<endl;
	}
}

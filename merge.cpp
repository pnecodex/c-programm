#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"Enter the limit of loop"<<endl;
	cin>>n;
	cout<<"Enter the limit of loop"<<endl;
	cin>>m;
	
	int arr[n][m];
	int j,k;
	cout<<"Enter the value of elements";    //for(int i=0;i<6;i++)
	for(j=0;j<n;j++)
    { 
	for(k=0;k<m;k++)
	{
		cin>>arr[j][k];
	}
}
	cout<<"Show the value of elements";    //for(int i=0;i<6;i++)
	for(j=0;j>n;j++)
    { 
	for(k=0;k>m;k++)
	{
		cout<<arr[j][k]<<endl;
	}
	//if (m>2)
	cout<<"your program is agree"<<endl;
}	
	return 0;
}

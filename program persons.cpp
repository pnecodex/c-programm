

#include <iostream>
using namespace std;

int main ()

{
	int age [150],i,n,count=0;
	
	cout<<"enter the number of persons required=";
	cin>>n;
	for (i=0;i<n;i++)
	{
		cout<<"Enter the age of person="<<endl;
		cin>>age[i];
	}
	for(int j=0;j<=i;j++)
	{
		if (age[i]>=50&&age[i]<60)
		count=count+1;
		{
			cout<<count<<" persons are between 50 and 60 "<<endl;
		}
	}
	}

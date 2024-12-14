#include <iostream>
using namespace std;

int main ()
{
	int i,j,r1,r2,c1,c2,a[20][20],b[20][20],c[20][20];
	cout<<"Enter row and columns of first matrix:";
	cin>>r1>>c1;
	cout<<"Enter row and columns of second matrix:";
	cin>>r2>>c2;
	if((r1!=r2) || (c1!=c2))
	{
		cout<<"Matrix addition is not possible ";
		exit(0);
	}
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c1;j++)
		{
			cout<<"Enter the "<<i<<"x"<<j<<"element of first matrix";
			cin>>a[i][j];
		}
	}
	for (i=0;i<r2;i++)
	{
		for (j=0;j<c2;j++)
		{
			cout<<"Enter the"<<i<<"x"<<j<<"element of second matrix";
			cin>>b[i][j];
			
		}
	}
	cout<<endl;
	for (i=0;i<r1;i++)
	{
		cout<<endl;
		for (j=0;j<c1;j++)
		cout<<a[i][j];	
	}
	
	
	cout<<"\t"<<"+";
	cout<<endl;
	for(i=0;i<r1;i++)
	{
		cout<<endl;
		for(j=0;j<c1;j++)
		cout <<b[i][j];
	}
	cout<<endl;
	cout<<"\t\t\t=";
	cout<<endl;
	for (i=0;i<r1;i++)
	{
		cout<<endl;
		for(j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j];
		}
	}
	
	
	return 0;
}

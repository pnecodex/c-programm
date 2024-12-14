#include <iostream>
using namespace std;
int main ()
{
	int r,c,a[100][100][100],b[100][100],sum[100][100],i,j;
	cout<<"enter number of row";
	cin>>r;
	cout<<"enter number of coloms";
	cin>>c;
	cout<<endl<<"enter the first element "<<endl;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
	{
		cout<<"enter the element a"<< i+1 << j+1 <<" : ";
		cin >> a[i][j];
	}
}

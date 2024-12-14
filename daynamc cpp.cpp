#include <iostream>
using namespace std;
int main()
{
	int n,i;
	int *p, total = 0;
	cout<<"enter no of element ";
	cin>>n;
	p = new int [n];
	cout<<"enter"<<n<< "element"<<endl;
	for (i=0;i<n;i++)
	{
	 	cin>>p[i];	
	}
	cout<<"element are";
	for (i=0;i<n;i++)
	{
//	cout<<'\t'<<*(p+i);
	
	total = total + p[i];	
	}
	cout<<"\n total"<<total;
	return 0;
}

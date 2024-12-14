#include <iostream>
using namespace std;

int main ()
{
	long int n,c,f;
	c=1;
	f=1;
	cout<<"enter the number"<<endl;
	cin>>n;
	while(c<=n)
	{
		f=f*c;
		c=c+1;
	}
	
	cout<<"factorial of"<<n<<"is"<<f;
	
	return 0;
}

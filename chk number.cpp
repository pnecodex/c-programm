#include <iostream>
using namespace std;
void chk_number(int n)
{
	int c=0,i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		c=1;
	}
	
	if(n%2==0 && c==0)
	cout<<n<<"is a prime even number"<<endl;
	else if (n%2 && c==0)
	cout<<n<<"is a odd prime number"<<endl;
	else if (n%2==0 && c!=0)
	cout<<n<<"is only an even number,not prime"<<endl;
	else if (n%2!=0)
	cout<<n<<"is only an odd number,not prime"<<endl;
	else 
	cout<<"is not a prime number";	
}
int main ()
{
	
	int n;
	cout<<"\n Enter the number ";
	cin>>n;
	cout<<"nature of number\n";
	cout<<"\n...............\n";
	chk_number(n);
}

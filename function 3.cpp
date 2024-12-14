#include <iostream>
using namespace std;
void table (int n);
int main ()
{
	int num;
	cout<<"enter a number"<<endl;
	cin>>num;
	table(num);
}
void table (int n)
{
	for(int c=1;c<=10; c++)
	{
		cout<<n<<"*"<<c<<"="<<n*c<<endl;
	}
	
	
}

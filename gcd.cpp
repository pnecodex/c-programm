#include <iostream>
using namespace std;
int main()
{
	int n1,n2,d;
	cout<<"enter the first number"<<endl;
	cin>>n1;
	cout<<"enter the second numbe"<<endl;
	cin>>n2;
	d=(n1 < n2)? n1:n2;
	for(;d>=1;d--)
	{
		if((n1 % d==0) && (n2%d==0))
		break;
		cout<<"gcd of"<<n1<<"and "<<n2<<"is"<<d;
		cout<<endl;
	}
	
}

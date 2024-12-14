#include <iostream>
#include <conio.h>
using namespace std;
template <class Type>
Type Max  (Type a, Type b)
{
	if(a<b)
	{
		return a;
	}
	else 
	{
		return b;
	}
	
}
int main()
{
	int n;
	float m;
	n = max (10,50);
	cout<<"maximum of tow integer "<<n<<endl;
	cin>>n;
	m = max(3.5,2.2);
	cout<<"maximum of tow float"<<m<<endl;
	cin>>m;
}

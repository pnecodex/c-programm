#include <iostream>
using namespace std;
int add(int,int);
int main ()
{
	int a , b , sum;
	sum=add(a,b);
	cout<<"enter first"<<endl;
	cin>>a;
	cout<<"enter second"<<endl;
	cin>>b;
	cout<<sum;
}

int add(int e,int s){
	int multi;
	multi=e*s;
//	cout<<multi;
	return multi;
}

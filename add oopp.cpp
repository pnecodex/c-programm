#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	private:
		int a,b;
	public:
		A(){a=8;b=6;}
		add();
};
A::add()
{
	a=a+b;
	cout<<""<<a;
}
main()
{
	A n;
	n.add();
}

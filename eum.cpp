#include <iostream>
using namespace std;
int main()
{
 	const int a=0;
 	const int *p;
 	p= &a;
 	cout<<"a ="<<a<<endl;
 	 p++;
 	cout<<"a ="<<a;
}

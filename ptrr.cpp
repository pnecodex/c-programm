#include <iostream>
using namespace std;
void age(int& ,int& );
int main()
{
	int a = 12;
	int b = 14;
	age(a, b);
	cout<<"value"<<a<<endl;
	cout<<"value"<<b<<endl;
	return 0;
}
void age(int& e,int& g)
{
	e=2;
 	g=4;
	
}



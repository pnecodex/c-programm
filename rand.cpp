#include <iostream>
using namespace std;
int main()
{
	
	int n=10;
	float f=25.18;
	char c='$';
	void *ptr;
	ptr = &n;
	cout<<"the value of n"<<n<<endl;
	cout<<"the address of n"<<ptr<<endl;
	ptr = &f;
	cout<<"the value of f"<<f<<endl;
	cout<<"the address of f"<<ptr<<endl;
	ptr = &c;
	cout<<"the value of c"<<c<<endl;
	cout<<"the address of c"<<ptr<<endl;
	
	
}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char str[] = "oop using c++";
	cout<<setw(20)<<setfill('*')<<str<<endl;
	cout<<setw(20)<<setfill('@')<<str<<endl;
	cout<<setw(20)<<setfill('=')<<str<<endl;
	
}

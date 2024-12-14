#include <iostream>
#include <string>
using namespace std;
int main()
{
	char test1[]="sample string ";
	char test2[20];
		 cout<<"value of test1";
	puts(test1);
	
	cout<<"copying test1 to test2...\n";
	memcpy(test2,test1,15);
	cout<<"the value of test2 is";
	puts(test2);	
}

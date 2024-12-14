#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
	char *buffer;
	buffer = strerror(errno);
	cout<<"error"<<buffer<<endl;
}

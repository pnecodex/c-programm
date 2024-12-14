#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
int main()
{
	char str[16]="abs,d,c";
	char *p;
//	strtok place a NULL terminaitor
//	in front of the token, if found

	p = strtok(str,","",");
	if(p)
	{
		
	cout<<p<<endl;
	p=strtok(NULL,","",");
	}
	if(p)
	cout<<p<<endl; 
}

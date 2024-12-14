#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	char ch[40];
	cout<<"enter the sentance";
	gets (ch);
	cout<<"the sentance in lowercase is";
	while(ch[i]!='\0')
	{
		ch[i]=tolower(ch[i]);
		
		i++;
	}
//	puts(ch);
	i=0;
	cout<<"\nthe sentance in uppercase is";
	while(ch[i]!='\0')
	{
		ch[i]=toupper (ch[i]);
		i++;
	}
	puts(ch);
	
}

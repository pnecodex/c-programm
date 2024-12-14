#include <iostream>
using namespace std;
int main()
{
	char name[2][20];
	for(int i=0; i<2; i++ )
	{
		cout<<"enter the name"<<endl;
		cin.getline(name,[i])
	}
	for( i=0; i<2;i++)
	{
		cout<<name[j]<<endl;
	}
}

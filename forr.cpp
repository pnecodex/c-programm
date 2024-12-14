#include <iostream>

using namespace std;
int main ()
{
	int g=0;
	int a[4];
	for (int i=0;i<4;i++)
	cin>>a[i]; 

	g =a[0];
	for (int i=0;i<4;i++)
	{
		if (g<a[i])
		g=a[i];
	}
	
	cout<<"the greater is number"<<g<<endl;






return 0;	
}
	


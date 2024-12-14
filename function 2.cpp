#include <iostream>
using namespace std;
void max(int a,int b);
int main ()
{
	int x,y;
	cout<<"enter the number "<<endl;
	cin>>x,y;
	max(x,y);
}

void max(int a,int b)
{
	if(a<b)
	cout<<"maximum number is "<<a<<endl;
	else 
	cout<<"maximum number is "<<b<<endl; 
	
}



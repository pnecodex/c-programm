#include <iostream>
using namespace std;

int main ()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int i,n,loc= -1;
	cout<<"enter value to find";
	cin>>n;
	for (i=0;i<10;i++)
	if (arr[i]==n)
	loc =i;
	if (loc == -1 )
	cout<<"value not found in the array";
	else 
	cout<<"value found at index"<<loc;


	
		
	return 0;
}

#include <iostream>
using namespace std;

int main  ()
{
	int num[5], i;
	
	for ( i=0;i<5;i++)
	{
		cout<<"enter an integer:"<<endl;
		cin>>num[i];
		cout<<i<<endl;
	}
	
		cout<<"the array in actual order:\n";
		for(i=0;i<5;i++)

		cout<<num[i]<<"";
		cout<<"the array in reverse order:\n";
		for(i=4;i>=0;i--)
		cout<<num[i]<<"";
	
	return 0;
}

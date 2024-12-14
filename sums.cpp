#include <iostream>
using namespace std; 
void shape (int, char );
int main()
{
	int num;
	char ch;
	cout<<"enter a number"<<endl;
	cin>>num;
	cout<<"enter a character"<<endl;
	cin>>ch;
	shape(num,ch);
}
 void shape(int n,char c)
 {
	int i,j;
	for(i=1;i<=n;i++)
	{
		cout<<endl;
		for(j=1;j<=n;j++)
		cout<<c;
	}	

}


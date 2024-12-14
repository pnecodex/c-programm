#include <iostream>			
using namespace std;
void show();
struct mai
{
	char name[20];
	int roll;
};
int main()
{
	mai m;
	cout<<"enter the name"<<endl;
	cin>>m.name;
	cout<<"enter the roll number"<<endl;
	cin>>m.roll;
	show();
}

void show()
{
	cout<<"you details is  totaly";
}

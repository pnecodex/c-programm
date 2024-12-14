#include <iostream>
using namespace std;
class move
{
	private:
		int char name [40];
		public:
			void nam()
			{
			 	 cout<<"enter the number"<<endl;
			 	 cin>>name;
			}
}
int main()
{
 	char  name[20];
 	int a;
 	cout<<"enter the name"<<endl;
 	cin.get(name,20);
 	cout<<"enter the number"<<endl;
 	cin>>a;
 	cout<<" show  "<<name<< " " <<a;
}

#include <iostream>
using namespace std;
class person 
{
		private:
			char name[20];
			public:
				void get()
				{
					cout<<"enter your name"<<endl;
					cin>>name;
				}
				void show()
				{
					cout<<"your name"<<name<<endl;
				}
};
int main()
{
	person *ptr[4];
	int i ;
	for (i=0;i<24; i++)
	{
		ptr[i]=new person;
		ptr[i]->get();
	}
	for (i=0;i<24;i++)
	{
		ptr[i]->show(); 
	}
	
}

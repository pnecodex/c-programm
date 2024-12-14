#include <iostream>
using namespace std;
class books
{
	private:
	char name[20];
//	char page[20];
	public:
	 void a()
	{
		cout<<"enter the name"<<endl;
//		cin >>getline(name);
		cin>>name;
	}
};

int main()
{
	books b1;
	b1.a();
}

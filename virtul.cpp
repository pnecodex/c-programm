#include <iostream>
using namespace std;
class a
{
	public:
		virtual void show()
		{
			cout<<"the class a"<<endl;
		}
};

class b:public a
{
	public:
		void show()
		{
			cout<<"the class b"<<endl;
		}
};
class c:public a
{
	public:
		void show()
		{
			cout<<"the class c"<<endl;
		}
};

int main()
{
 	a obj1;
 	b obj2;
 	c obj3;
	a *ptr;
	ptr = &obj1;
	ptr->show(); 	
	ptr = &obj2;
	ptr->show();
	ptr = &obj3;
	ptr->show();
	
}

















#include <iostream>
using namespace std;
class a
{
	public:
		void disp()
		{
			cout<<"i am class a"<<endl;
			
		}
};
class b : public a
{
		public:
		void disp()
		{
			cout<<"i am class a"<<endl;
			
		}
};

class c : public a
{
		public:
		void disp()
		{
			cout<<"i am class a"<<endl;
			
		}
};

int main()
{
	a *pa;
	b objb;
	c objc;
	pa->disp();
	pa->disp();
	pa->disp();
	
	
}




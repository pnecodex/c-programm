#include <iostream>
using namespace std;

  class exm
{
	private:
	int n;
	public:
	void in()
	{
		cout<<"enter the number "<<endl;
		cin>>n;
	}
	int out()
	{
		cout<<"the value of n="<<n;	
	}
		
}
int main ()
{
	exm obj;
	obj.in();
	obj.out();
}

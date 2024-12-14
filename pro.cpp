#include <iostream>
using namespace std;
class parent
{
	protected:
		int n;
		
};
class chilld1 :public parent
{
	
};
class chilld2:public parent
{
};
class baby:public chilld1,public chilld2
{
	public:
		void set()
		{
			n=10;
			cout<<"n="<<n<<endl;
		}
	
};

int main()
{
	baby obj;
	obj.set();
//	obj.set();
}

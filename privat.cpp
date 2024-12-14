#include <iostream>
using namespace std;
class number{
	
	
	private:
		int x,y;
		public:
			number ()
			{
				x=y=100;
			
			}
			void avg()
			{
				cout<<"x"<<x<<endl;
				cin>>x;
				cout<<"y"<<y<<endl;
				cin>>y;
				cout<<"average"<<(x+y)/2<<endl;
			}
	
	
	
	
	
};
int main()
{
	number n;
	n.avg();
	
	
	
	
	

	
}

	
	

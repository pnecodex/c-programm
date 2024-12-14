#include <iostream>
using namespace std;
class number
{
	
	private:
		int x,y;
		public:
			nunber()
			{
				x=y= 100;
				
			}
			void avg()
			{
				cout<<"x ="<<endl;
				cin>>x;
				cout<<"y ="<<endl;
				cin>>y;
				cout<<"average ="<<(x+y)/2<<endl;
				
			}
};
int main ()
{
	number n;
	n.avg();
	
}

#include <iostream>
using namespace std;
class park
{
	private:
		int car;
		public:
			in()
			{
				cout<<"enter the car in parking"<<endl;
				cin>>car;
				
			}
			show()
			{
				cout<<"show the parking details"<<car<<endl;
				
			}				
};
int main ()
{
	park p;
	p.in();
	p.show();
}

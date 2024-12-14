#include <iostream>
using namespace std;
class peper
{
	private:
		char pepr[20];
		public:
		void	write()
			{
				for(int i=1;i<20;i++)
				{
					cout<<"enter the eny word"<<endl;
					cin>>pepr;
				}
			}
			void show()
			{
				cout<<pepr<<endl;
			}
};
int main()
{
	peper c1;
 	c1.write();
 	c1.show();
}

#include <iostream>
#include <string.h>
using namespace std;
class parking 
{
	private:

		int usb;
		public:
		void sb()
			{
				cout<<"enter"<<endl;
				cin>>usb;
				
			}
			void show ()
			{
				for(int i=0;i<10;i++)
				{
						cout<<usb<<i<<endl;
				}				
			}
			
			
};
int main()
{
	parking b;
	b.sb();
	b.show();
}

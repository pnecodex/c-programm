#include <iostream>
using namespace std;
class yahoo
{
	
	private:
		static int n;
		public:
			yahoo ()
			{
				n++;
			}
			static void show()
			{
				cout<<"you have created " <<n<<" object so for"<<endl;
				
			}

};
int yahoo :: n=0;
int main ()
{
	yahoo::show();
	yahoo x,y;
	x.show();
	yahoo z;
	x.show();
//	x.show();
	 
	
}

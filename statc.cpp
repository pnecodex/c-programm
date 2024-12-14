#include <iostream>
using namespace std;
class counter
{
	static int n;
	public:
		counter ()
		{
			n++;
		}
		void display ()
		{
			cout<<"the name of object"<<n<<"so far"<<endl; 
		}
			
};

  int counter :: n=0;
int main()
{
	counter c1,c2;
	c2.display();
	counter c3;
	c1.display();
	
}

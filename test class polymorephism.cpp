#include <iostream>
using namespace std;
class test 
{
	private:
		int n;
		public:
			void in()
			{
				cout<<"enter the number"<<endl;
				cin>>n;
			}
			void out ()
			{
				cout<<"enter the show "<<n<<endl;
				
			}
};
int main()
{
	test *ptr;
	ptr = new test;
	ptr->in();
	ptr->out();
}

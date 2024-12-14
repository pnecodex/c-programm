#include <iostream>
using namespace std;
class over {
	private:
		int num;
		char ch;
		public:
			over ()
			{
				num=0;
				ch='x';
			}
		
		over (int n,char c)
		{
			num = n;
			ch= 'c';
		}
		void show()
		{
			cout<<"num ="<<num<<endl;
			cout<<"ch  ="<<ch<<endl;

		}
		

};

int main ()
{
	over first,second(100,'p');
	cout<<"the contents of first"<<endl;
	first.show();
	cout<<"the contents of secod "<<endl;
	second.show();
}








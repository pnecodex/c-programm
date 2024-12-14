#include <iostream>
using namespace std;
class count
{
	private:
		int number;
		public:
		count()
			{
				number=1;
			}
			void show ()
			{
				cout<<"number = "<<number<<endl;
			}
			void operator  ++ ()
			{
				number +=1;
			}
		 
	 	 void operator ++ (int )
	 	 {
	 	 	number + 0;
		 }
};

int main()
{
	count t1;
	t1.show();
	++t1;
	
	
	t1.show();
}

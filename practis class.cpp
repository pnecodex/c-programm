#include <iostream>
using namespace std;
class myclass{
	
		
		private:
			int a,b;
		
			public :
			void number ()
			{
					cout<<"enter the number first "<<endl;
					cin>>a;
					cout<<"enter the numbre secode"<<endl;
					cin>>b;
				cout<<"\n\n your sums "<<a+b;

			}
			void show()
			{
				
				cout<<"\n\n your a add b is total sums "<<a<<endl;
				cout<<"\n\n 55your b add a is total sums "<<b<<endl;
				
				
			}
			void calculat()
			{
				int m=10,n=6;
				
				if (m>n)
				cout<<"your m is n largest value"<<endl;
				cin>>m;
				cout<<"your n is m largest value"<<endl;
				cin>>n;
				
			}
};

 int main ()
{
	myclass m,n;
	m.number();
	m.show();
	n.calculat();
}

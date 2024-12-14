#include <iostream>
#include <string>
using namespace std;
class name
{
	private:
	string name;
	string adress;
	int age;
		public:
			void nam()
			{
				cout<<"what you name"<<endl;
				getline()name; 
			}
			void adres ()
			{
				cout<<"what you adress "<<endl;
				getline()adress;
			}
			void ag()
			{
				cout<<"your age "<<endl;
				cin>>age;
			}
			
};

int main()
{
	name my;
	my.nam();
	my.adres();
	my.ag();
}

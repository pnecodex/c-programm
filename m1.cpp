#include <iostream>
using namespace std;
class m 
{
	ignore();
	
	int a;
	int b;
	string name;
	public:
		void get ()
		{
			cout<<"your id"<<endl;
			cin>>a;
			cout<<"your roll number"<<endl;
			cin>>b;
			void return string name;
			cout<<"your name "<<endl;
			getline(cin,name);
			
		}
		void show()
		{
			cout<<"is id"<<a;
			cout<<"is rollnumber"<<b;
			cout<<"is name"<<name;
		}
		
};

int main()
{
	m m1;
	m1.get();
	m1.show();
	m1.get();
	
}

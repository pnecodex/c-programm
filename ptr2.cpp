#include <iostream>
using namespace std;
class myclass
{
	private:
		char name[20];
		char you[20];
		public:
		void nam()
		{
			cout<<"enter the student name "<<sizeof(name)<<endl;
			cin.getline(name,20);
			}	
	void show()
	{
		cout<<"your delails"<<name;
	}
	
};
int main()
{
	myclass c1;
	c1.nam();
	c1.show();
 	
}

#include <iostream>
using namespace std;
class student 
{
	double id ;
	string name;
	public:
		student()
		{
			id =0;
			name = "unkown";
		}
		student(double i,string n)
		{
			id =i;
			name = n;
			
		}
		void show ()
		{
			cout<<"the id "<<id<<endl;
			cout<<"the name"<<name<<endl;	  
		}  
};
int main()
{
	student s1;
	student s2(2.47,"aDnan malik");
	s1.show();
	s2.show();
}

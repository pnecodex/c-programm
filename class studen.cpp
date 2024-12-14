#include <iostream>
using namespace std;
class student 
{
	private:
	static int r;
	int rno,marks;
	char name[50];
	public:
		student()
		{
			r++;
			rno =r;
			
		}
		void in ()
		{
			cout<<"enter the name"<<endl;
			gets(name);
			cout<<"enter the marks"<<endl;
			cin>>marks;
		}
		void show()
		{
			cout<<"roll number"<<rno<<endl;
			cout<<"name"<<name<<endl;
			cout<<"marks"<<marks<<endl;
		}
};
	int student::r=0;
int main()
{
	student s1,s2,s3;
	s1.in();
	s2.in();
	s3.in();
	s1.show();
	s2.show();
	s3.show();
	
}


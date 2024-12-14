#include <iostream>
using namespace std;
class student
{
	private:
		int marks;
		char grade;
		public:
			student(int m,char g)
			{
				marks = m;
				grade = g;
			}
			void show ()
			{
				cout<<"marks ="<<marks<<endl;
				cout<<"grade ="<<grade<<endl;
			}
			
};

int main()
{
	student s1(730,'A'),s2(621,'B');
	cout<<"record of student 1:"<<endl;
	s1.show();
	cout<<"record of student 2"<<endl;
	s2.show();
}

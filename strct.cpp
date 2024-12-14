#include <iostream>
using namespace std;
struct student
{
	
	
		int roll;
		int mark;
		float avg;
		char grade;

};
int main()
{	
	student s;
	cout<<"enter the rollnumber "<<endl;
	cin>>s.roll;
	cout<<"enter the marks"<<endl;
	cin>>s.mark;
	cout<<"enter the grade"<<endl;
	cin>>s.grade;
//	cout<<"average"<<s.avg/21<<endl;
//	cin>>s.avg/roll/mark;
	cout<<"you entered the following details\n"<<endl;
	cout<<"rollnumber="<<s.roll<<endl;
//	cout<<"marks="<<s.mark<<endl;
	cout<<"grade="<<s.grade<<endl;
	cout<<"average="<<s.avg/100<<endl;
	cout<<"grade="<<s.grade<<endl;	
	
}

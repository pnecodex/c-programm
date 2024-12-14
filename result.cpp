#include <iostream>
using namespace std;
class result{
	
	private:
		int rno,marks[3];
		char name[50];
		public:
		int input()
		{
			cout<<"enter the roll number";
			cin>>rno;
			cout<<"enter the name";
			gets(name)	
		}	
};

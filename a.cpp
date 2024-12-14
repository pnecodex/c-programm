#include <iostream>
using namespace std;
class student 
{
 	 private:
	  int roll;
	  char name[20];
	  public:
	  void rollnumber()
	  {
	  	cout<<"enter the roll nummbre"<<endl;
	  	cin>>roll;
	  }	
	  void stname()
	  {
	  	for(int i=0;i<20;i++)
	  	{
	  	cout<<"enter the name student";
	  	cin>>name;
        }
	  	
	  }
	  void gatdata()
	   {
	   	   cout<<"roll="<<roll<<endl;
   	   	   cout<<"name="<<name<<endl;
	   }
};

int main ()
{
	student s1;
	s1.rollnumber();
	s1.stname();
	s1.gatdata();
}

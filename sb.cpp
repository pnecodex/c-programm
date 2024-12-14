#include <iostream>
using namespace std;
class student
{
 	  char name[20];
 	  int roll;
 	  public:
 	  	void get()
 	  	{
 	  		cout<<"enter the name"<<endl;
 	  		cin>>name;
 	  		cout<<"ente the rollnumber"<<endl;
 	  		cin>>roll;
	    }
	    void show ()
	    {
	    	cout<<name;
	    	cout<<roll<<endl;
	    	getch();
			
		}
};
int main()
{
	student st;
	for(int i =0;i<10;i++)
	{
	 		st[i].get();
			st.show();
	}
	
}


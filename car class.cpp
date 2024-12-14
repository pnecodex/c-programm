#include <iostream>
//#include <string >
//#include <conio.h>
using namespace std;
class cars
{
	private:
		char nam[8];
		char color[8];
		float time;
		char car[8];
		public:
			void name()
			{
				
				cout<<"your choice is car name"<<endl;
				cin.getline (nam,8);
			}
			void paint ()
			{
				cout<<"your choice is color desite"<<endl;
				cin.getline (color,8);
			}
			
			void tim ()
			{
				cout<<"user is desite time spande"<<endl;
				cin>>time;
			}
			
			void race()
			{
				cout<<"enter the start race"<<endl;
				cin.getline (car,8);
			}
			
			 
		    void display ()
			{
				cout<<" "<<nam<<" "<<color<<" "<<time<<" "<<car<<endl;
			}
			
			
};
int main ()
{	
	cars c1;6
	c1.name();
	c1.paint();
	c1.tim();
	c1.race();
	c1.display();
}

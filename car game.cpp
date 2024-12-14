#include <iostream>
using namespace std;
class me
{
	private:
		char car[20];
		char model[20];
		char color[20];
		int cc;
		int plate;
		public:
			void get()
			{
				cout<<"enter the name"<<endl;
				cin.getline(car,20);
				cout<<"enter the car model name="<<endl;
				cin.getline(model,20);
				cout<<"enter the car color="<<endl;
				cin.getline(color,20);
				cout<<"enter the car cc"<<endl;
				cin>>cc;
				cout<<"enter the number plate"<<endl;
				cin>>plate;
				
			}
			void add()
			{
// 			 	 car + model = car;
//				 color + car =color;
//				 car_cc + car = car_cc;
//				 number_plate + car + numbre_plate;
				  		
			}
			void show ()
			{
				cout<<"car name="<<endl<<car;
				cout<<"car model="<<endl<<model;
				cout<<"car color="<<endl<<color;
				cout<<"car cc="<<endl<<cc;
				cout<<"car number plate="<<plate;
			}
			
};
int main()
{
	me car1;
	car1.get();
	car1.add();
	car1.show();
}

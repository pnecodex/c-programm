#include <iostream>
using namespace std;
int main()
{
 	float salary, bouns;
	int grade;
	cout<<"enter your salary"<<endl;
	cin>>salary;
	cout<<"enter your grade"<<endl;
	cin>>grade;
	if(grade>15)
	bouns = salary * 50.0/100.0;
	else{
		bouns = salary *25.0/100.0;
		salary = salary + bouns;
		cout<<"your total salary Rs.";
		cout<<salary;
	}
		
	
	
	
}

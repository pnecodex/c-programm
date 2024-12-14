#include <iostream>
using namespace std;
void basic ()
{
	cout<<endl<<endl<<endl<<endl;
	int basic,house,medical,convance,gross;
	cout<<"enter the basic salary"<<endl;
	cin>>basic;
	house=basic*45/100;
	cout<<"hosue rent"<<house<<endl;
	medical=basic*15/100;
	cout<<"medical"<<medical<<endl;
	convance=basic*5/100;
	cout<<"convance"<<convance<<endl;
	gross=basic+house+medical+convance;
	cout<<"is total"<<gross<<endl;
}

void house()
{
	int basic,house;
	cout<<"enter the basice salary"<<endl;
	cin>>basic;
	house=basic*45/100;
	cout<<"house rent"<<house<<endl;
		
}

void medical()
{
	int basic,medical;
	cout<<"enter the basice salary"<<endl;
	cin>>basic;
	medical=basic*15/100;
	cout<<"medical"<<medical<<endl;
	
}

void convance()
{
	int basic,convance;
	cout<<"enter the basice salary"<<endl;
	cin>>basic;
	convance=basic*5/100;
	cout<<"convance"<<convance<<endl;
	
}


int main ()
{
	while (true)
	{
	
	int n;
	cout<<"enter the 1 basic"<<endl;
	cout<<"enter the 2 house rent"<<endl;
	cout<<"enter the 3 medical"<<endl;
	cout<<"enter the 4 convance"<<endl;
	cin>>n;
	

	
	
	if(n==1)
	basic();
	else if(n==2)
	house();
	else if(n==3)
	medical();
	else if(n==4)
	convance();
	else{
		cout<<"in vaild"<<endl;	
	}
	cout<<endl;
}
	return 0;
}














#include <iostream>
using namespace std;
class slr{
	
	private:
			int basic,house,medical,convance;
			public:
				void basc();				
				void hous();
				void medicl();
				void convanc();
};
	void slr::basc() 
{
	
	int basic,house,medical,convance;
	cout<<"enter the basic salary"<<endl;
	cin>>basic;
	house=basic*45/100;
	cout<<"hosue rent"<<house<<endl;
	medical=basic*15/100;
	cout<<"medical"<<medical<<endl;
	convance=basic*5/100;
	cout<<"convance"<<convance<<endl;
}

void slr::hous()
{
	int basic,house;
	cout<<"enter the basice salary"<<endl;
	cin>>basic;
	house=basic*45/100;
	cout<<"house rent"<<house<<endl;
		
}

void slr::medicl()
{
	int basic,medical;
	cout<<"enter the basice salary"<<endl;
	cin>>basic;
	medical=basic*15/100;
	cout<<"medical"<<medical<<endl;
	
}

void slr:: convanc()
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
	basc()
	else if(n==2)
	hous()
	else if(n==3)
	medicl()
	else if(n==4)
	convanc();
	else{
		cout<<"in vaild"<<endl;	
	}
	
}

	
	slr s1;
	s1.basc();
	s1.hous();
	s1.medicl();
	s1.convanc();

}


#include <iostream>
using namespace std;
int main()
{
	int book,chemistry,physics,computer;
	cout<<"enter three subjuct total marks"<<endl;
//	cin>>chemistry>>physics>>computer;
	cin>>book;	
	chemistry=book*75/100;
	cout<<"chemistry number = %"<<chemistry<<endl;
	physics=book*55/100;
	cout<<"physics number = %"<<physics<<endl;
	computer=book*45/100;
	cout<<"computer number = %"<<computer<<endl;
	chemistry+physics+computer;
	cout<<"total marks"<<book;
	
	
	
   return 0;
}

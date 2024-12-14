#include <iostream>
using namespace std;
int main()
{
	while(true){
	
	int sec,s,m,h;
	cout<<"entre time in second";
	cin>>sec;
	h = sec/3600;
	sec = sec%3600;
	m = sec / 60;
	s = sec % 60;
	cout<<"\n HH-MM-SS = "<<h<<"."<<m<<"."<<s;
	cout<<endl;
}
}

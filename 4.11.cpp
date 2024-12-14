#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
double p,t,r,i;
cout<<"enter principal amount rate time";
cin>>p>>t>>r;
i=(p*t*r)/100;
cout<<"\n principal amt = Rs."<<p;
cout<<"\n rate ="<<r<<"%";
cout<<"\n time ="<<t<<"yrs";
cout<<"\n simple interest amt = rs."<<i;
//cout<<p<<"\n"<<t<<"\n"<<r<<endl;
//cout<<i<<endl;	

}

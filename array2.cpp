#include <iostream>
using namespace std;
int main ()
{

	int age[140],i,n,count=0;
	cout<<"Enter the number of persons required";
	cin>>n;
	cout<<"enter ages of"<<n<<"persons"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>age[i];
		if(age[i]>=50&&age[i]<=60)
		{
			count=count+1;
		 if (age[i]<=80 && age[i]<=70)
		
		cout<<count<<"persomms are between 80 and 60"<<endl;
		count=count+1;       
	}
	cout<<count<<"persons are between is 50 and 60"<<endl;

}
return 0;
}

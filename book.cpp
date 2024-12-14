#include <iostream>
using namespace std;
struct book
{
	int id;
	int pages;
	float price;
	
};
int main()
{
	book b1,b2;
	cout<<"enter book price pages and id"<<endl;
	cin>>b1.id>>b1.pages>>b1.pages;
	cout<<"enter book price pages and id"<<endl;
	cin>>b2.id>>b2.pages>>b2.pages;
	cout<<"the most costly book is as follwos\n";
	if(b1.price>b2.price)
	{
		cout<<"book id"<<b1.id<<endl;
		cout<<"book id"<<b1.pages<<endl;
		cout<<"book id"<<b1.price<<endl;
	}
	else
	{
		cout<<"b2. object"<<endl;
	 	cout<<"book id"<<b2.id<<endl;
		cout<<"book pages"<<b2.pages<<endl;
		cout<<"book price"<<b2.price<<endl;
		
	}
}

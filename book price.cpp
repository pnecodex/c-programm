#include <iostream>
using namespace std;
class book{
	
	private:
	int bookid,pages;
	float price;
	public:
	int get()
	{
		cout<<"enter book id";
		cin>>bookid;
		cout<<"enter pages";
		cin>>pages;
		cout<<"enter the price";
		cin>>price;
	}
	int show()
	{
		cout<<"bookid ="<<bookid<<endl;
		cout<<"pages ="<<pages<<endl;
		cout<<"price ="<<price<<endl;
	}
	
	int set(int id,int pg,float pr)
	{
		bookid=id;
		pages=pg;
		price=pr;
	}
	float getprice()
	{
		return price;
	}
	
};


int main()
{
	
	book b1,b2;
	b1.get();
	b2.set(2,320,150.75);
	cout<<"\nthe detail of most coustly book is as follows."<<endl;
	if (b1.getprice() > b2.getprice())
		b1.show();
	else 
	b2.show();
	

}













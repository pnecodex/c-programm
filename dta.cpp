#include <iostream>
#include <conio.h>
using namespace std;
class stack
{
 	  private:
 	  	int arr[5];
 	  	int top;
 	  	public:
 	  		stack()
 	  		{
 	  			top = -1;
			}
			 void push(int v)
			 {
			 	if (top==4)
			 	cout<<"stack is  full"<<endl;
			 	else 
			 	{
			 		arr[++top]=v;
			 		cout<<"data pushed successfully"<<endl;
				 }
			 }
			 int pop()
			 {
			 	if (top==-1)
			 	{
			 		cout<<"stack empty";
			 		return NULL;
				 }
				 else 
			 	{
			 		
			 		return arr[top--];
				 }
			 }
};

int main()
{
	stack s; 
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	getch();
}










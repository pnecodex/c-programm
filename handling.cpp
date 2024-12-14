#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
 char name [20];
 int roll;
 ofstream outfile ("student");
 cout<<"enter student name";
 cin>>name;
 cout<<"enter roll";
 cin>>roll;	
 outfile << name <<endl;
 outfile << roll <<endl;
 outfile.close();
 ifstream infile("student");
 infile >> name;
 infile >> roll;
 cout<<"name "<<name <<endl;
 cout<<"roll"<<roll <<endl;
 infile.close();	
}

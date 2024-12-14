#include <iostream>
using namespace std;
union shirt
{
	char size;
	int chest;
	int height;
	
};
int main()
{
	shirt mine;
	cout<<"enter the size"<<sizeof(mine)<<endl;
	cin>>mine.chest;
}

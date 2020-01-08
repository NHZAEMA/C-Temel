//alt fonk ornekleri -2
#include <iostream>
using namespace std;
long fakt(int a);
int main()
{
	int sayi;
	cout<<"sayi gir:";		cin>>sayi;
	cout<<sayi<<"! ="<<fakt(sayi)<<endl;
	return 0;
} 

long fakt(int a)
{
	if (a<=1)
		return (1);
	else 
		return (a*fakt(a-1));
} 

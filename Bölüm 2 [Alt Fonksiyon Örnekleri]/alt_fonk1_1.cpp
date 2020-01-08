//alt fonk ornekleri -2
#include <iostream>
using namespace std;
void mesaj(int a);
int main()
{
	int X;
	cout<<"X:";		cin>>X;
	mesaj(X);	
	return 0;
} 
void mesaj(int a)
{
	for (int i=1; i<=a; i++)
		cout<<"Merhaba\n";
} 


//alt fonksiyon Örnek 8: y=3!/(5^4+6!) iþleminin sonucunu alt fonksiyonlar yardýmý ile ekrana yazan program...
#include<iostream>
using namespace std;
float ust(int a, int b);	
float fakt(int c);	
int main()
{
	cout<<"Y="<<(fakt(3))/(ust(5,4)+fakt(6))<<endl;
	return 0;
}
float ust(int a, int b)						
{
    long carpim=1;
	for (int i=1; i<=b; i++)
	  carpim*=a;
	return carpim;
}
float fakt(int c)						
{
    long carpim=1;
	for (int i=1; i<=c; i++)
	  carpim*=i;
	return carpim;
}
	
	
	
	
	
	
	

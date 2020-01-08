//alt fonksiyon Örnek 7. X=a^b+c! iþleminin sonucunu alt fonksiyonlar yardýmý ile ekrana yazan program...
#include<iostream>
using namespace std;
long ust(int a, int b);	
long fakt(int c);	
int main()
{
	int a,b,c;
	cout<<"a gir:";		cin>>a;
	cout<<"b gir:";		cin>>b;
	cout<<"c gir:";		cin>>c;
	cout<<"X="<<ust(a,b)+fakt(c)<<endl;
	return 0;
}
long ust(int a, int b)						
{
    long carpim=1;
	for (int i=1; i<=b; i++)
	  carpim*=a;
	return carpim;
}
long fakt(int c)						
{
    long carpim=1;
	for (int i=1; i<=c; i++)
	  carpim*=i;
	return carpim;
}
	
	
	
	
	
	
	

//alt fonksiyon Örnek 3:Y=4!+..14! iþleminin sonucunu alt fonk yardýmý ile ekrana yazan program...
#include<iostream>
using namespace std;
long fakt(int sayi);					//1. basligi tanimla
int main()
{
   	long y=0;
   	for (int i=4; i<=14; i++)
   		y+=fakt(i);						//2. Ana fonkdan cagir 
	cout<<"Y="<<y<<endl;	
	
	return 0;
}
long fakt(int sayi)						//3. sona alt fonk yaz
{
    long carpim=1;
	for (int i=1; i<=sayi; i++)
	  carpim*=i;
	return carpim;
}
	

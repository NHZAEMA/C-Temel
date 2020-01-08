//alt fonksiyon Örnek 2: 3!+5!+8!+10! iþleminin sonucunu alt fonk yardýmý ile ekrana yazan program
#include<iostream>
using namespace std;
long fakt(int sayi);					//1. basligi tanimla
int main()
{
	cout<<"Sonuc="<<fakt(3)+fakt(5)+fakt(8)+fakt(10)<<endl;	//2. Ana fonkdan cagir 
	return 0;
}
long fakt(int sayi)						//3. sona alt fonk yaz
{
    long carpim=1;
	for (int i=1; i<=sayi; i++)
	  carpim*=i;
	return carpim;
}
	

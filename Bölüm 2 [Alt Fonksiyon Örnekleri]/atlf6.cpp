//alt fonksiyon Örnek 6: k=3^2+..+10^9 iþleminin sonucunu alt fonk yardýmý ile ekrana yazan program...
#include<iostream>
using namespace std;
long ust(int a, int b);					//1. basligi tanimla
int main()
{
	long k=0;
	for (int i=2; i<=9; i++)
	   k+=ust(i+1,i);
	cout<<"Ust Sonuc="<<k<<endl;	//2. Ana fonkdan cagir 
	return 0;
}
long ust(int a, int b)						//3. sona alt fonk yaz
{
    long carpim=1;
	for (int i=1; i<=b; i++)
	  carpim*=a;
	return carpim;
}
	

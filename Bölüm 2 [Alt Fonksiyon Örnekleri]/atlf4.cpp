//alt fonksiyon Örnek 4: 3^8 iþleminin sonucunu alt fonk yardýmý ile ekrana yazan program...
#include<iostream>
using namespace std;
long ust(int a, int b);					//1. basligi tanimla
int main()
{
	cout<<"Ust Sonuc="<<ust(3,8)<<endl;	//2. Ana fonkdan cagir 
	return 0;
}
long ust(int a, int b)						//3. sona alt fonk yaz
{
    long carpim=1;
	for (int i=1; i<=b; i++)
	  carpim*=a;
	return carpim;
}
	

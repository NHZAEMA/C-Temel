//alt fonksiyon �rnek 11: L=2!/6! + ... + 10!/14! i�leminin sonucunu ekrana yazan prog alt fonk ile ger�ekle�tiriniz.
#include<iostream>
using namespace std;
float fakt(int c);	
int main()
{
    float L=0;
    for (int i=2; i<=10; i++)
       L+=(fakt(i)/fakt(i+4));
	cout<<"L="<<L<<endl;
	return 0;
}
float fakt(int c)						
{
    long carpim=1;
	for (int i=1; i<=c; i++)
	  carpim*=i;
	return carpim;
}
	
	
	
	
	
	
	

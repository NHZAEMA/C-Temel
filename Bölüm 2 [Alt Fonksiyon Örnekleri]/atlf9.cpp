//alt fonksiyon �rnek 9: Z=-(1!/2^1)+...-(9!/10^9) i�leminin sonucunu ekrana yazan prog alt fonk ile ger�ekle�tiriniz.. (-..+.. �ekline dikkat)
#include<iostream>
using namespace std;
float ust(int a, int b);	
float fakt(int c);	
int main()
{
    float Z=0;
    for (int i=1; i<=9; i++)
       Z+=ust(-1,i)*(fakt(i)/ust(i+1,i));
	cout<<"Z="<<Z<<endl;
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
	
	
	
	
	
	
	

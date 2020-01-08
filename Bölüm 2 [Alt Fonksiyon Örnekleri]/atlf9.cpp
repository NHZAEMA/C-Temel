//alt fonksiyon Örnek 9: Z=-(1!/2^1)+...-(9!/10^9) iþleminin sonucunu ekrana yazan prog alt fonk ile gerçekleþtiriniz.. (-..+.. þekline dikkat)
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
	
	
	
	
	
	
	

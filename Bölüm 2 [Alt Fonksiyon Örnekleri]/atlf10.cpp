//alt fonksiyon Örnek 10: Z=[(4!+3^2)/3!]-[(5!+3^3)/4!]+...+[(8!+3^6)/7!] iþleminin sonucunu ekrana yazan prog alt fonk ile gerçekleþtiriniz.. (+..-.. þekline dikkat)
#include<iostream>
using namespace std;
float ust(int a, int b);	
float fakt(int c);	
int main()
{
    float K=0;
    for (int i=3; i<=7; i++)
       K+=ust(-1, i+1)*((fakt(i+1)+ust(3,i-1))/fakt(i));
	cout<<"K="<<K<<endl;
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
	
	
	
	
	
	
	

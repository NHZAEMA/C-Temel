//alt fonksiyon Örnek 12: N= -2!/6!+3!/7!-...-10!/14! iþleminin sonucunu ekrana yazan prog alt fonk ile gerçekleþtiriniz.
#include<iostream>
using namespace std;
float fakt(int c);	
float ust(int a, int b);
int main()
{
    float N=0;
    for (int i=2; i<=10; i++)
       N+=ust(-1,i+1)*(fakt(i)/fakt(i+4));
	cout<<"N="<<N<<endl;
	return 0;
}
float fakt(int c)						
{
    long carpim=1;
	for (int i=1; i<=c; i++)
	  carpim*=i;
	return carpim;
}
float ust(int a, int b)						
{
    long carpim=1;
	for (int i=1; i<=b; i++)
	  carpim*=a;
	return carpim;
}	
	
	
	
	
	
	

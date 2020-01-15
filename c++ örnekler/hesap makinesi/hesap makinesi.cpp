#include <iostream>
using namespace::std;
int x=0,y=0,a=0,b=0;
int topla(int a,int b)
{
	x=a+b;
	return x;
int cikar(int a,int b)
{
	x=a-b;
	return x;
}
int carp(int a,int b)
{
	x=a*b;
	return x;
}
int bol(int a,int b)
{
	x=a/b;
	return x;
}
int mod_al(int a,int b)
{
	x=a%b;
	return x;
}
int main()
{
while(1)
{
		cout<< "\n1. sayiyi gir";cin>>a;
	cout<< "2. sayiyi gir";cin>>b;
	cout<<"hangi islemi yapacaksiniz?\n";
	cout<<"1.TOPLAMA\n2.CIKARMA\n3.CARPMA\n4.BOLME\n5.MOD_ALMA";cin>>y;
	switch(y)
	{
		case 1:
		topla(a,b);  break;
		case 2:
		{cikar(a,b); break;}
		case 3:
		{carp(a,b); break;}
		case 4:
		{bol(a,b); break;}
		case 5:
		{mod_al(a,b); break;}										
			}
	cout<<"sonuc:"<<x;			
 }}

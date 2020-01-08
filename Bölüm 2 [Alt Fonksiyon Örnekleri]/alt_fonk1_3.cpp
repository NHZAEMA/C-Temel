//alt fonk ornekleri -2
#include <iostream>
using namespace std;
int sayilar();

int main()
{
	cout<<"sonuc:"<<sayilar()<<endl;
	cout<<"sonuc:"<<sayilar()<<endl;
	cout<<"sonuc:"<<sayilar()<<endl;
	return 0;
} 

int sayilar()
{
	static int sayi=5;
	sayi*=5;
	return (sayi);
} 


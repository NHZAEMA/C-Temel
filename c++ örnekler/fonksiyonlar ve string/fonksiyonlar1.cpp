//fonksiyonlar .

//�rne�in iki sayinin toplam�n� fonksi yon yard�mm� ile yapal�m

//fonksiyon int yada void �eklinde tipin'de tan�mlan�r int ile tan�mlad���m�z de�er d�nd�re bilirken void geriye de�er d�nd�rmez.

//fonksiyonu int mainden �nce tan�mlamam�z gerekir ki c++ bu kodlar� yukardan a��a�� okurken fonksiyonu tan�y�p int mainin i�inde s�k�nt� ya�amas�n

#include <iostream>
using namespace::std;

int x,y;

void deneme(int x,int y)
{
	cout<<"toplam:"<<x+y;
}

int main()
{
	cout<<"lutfen 2 sayi gir";
	cin>>x>>y;
	deneme(x,y);
	
}

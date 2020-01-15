//fonksiyonlar .

//örneðin iki sayinin toplamýný fonksi yon yardýmmý ile yapalým

//fonksiyon int yada void þeklinde tipin'de tanýmlanýr int ile tanýmladýðýmýz deðer döndüre bilirken void geriye deðer döndürmez.

//fonksiyonu int mainden önce tanýmlamamýz gerekir ki c++ bu kodlarý yukardan aþþaðý okurken fonksiyonu tanýyýp int mainin içinde sýkýntý yaþamasýn

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

//alt fonksiyon �rnek 1: Ekrana girilen sayi kadar Merhaba yazan program�n alt fonksiyon ile ger�ekle�tirilmesi
#include<iostream>
using namespace std;
void ekranayaz(int kackere);	//1. basligi tanimla
int main()
{
    int sayi;
	cout<<"Kac kere yazilsin:";	cin>>sayi;
	ekranayaz(sayi);			//2. Ana fonkdan cagir 
	return 0;
}
void ekranayaz(int kackere)		//3. sona alt fonk yaz
{
    for (int i=1; i<=kackere; i++)
	  cout<<i<<". Merhaba\n";	
}
	

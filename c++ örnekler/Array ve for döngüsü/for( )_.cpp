#include <iostream>
using namespace std;

//hat�rlarsan�z �nceki notlarda while d�ng�s�n� g�rm��t�k for d�ng�s�de while d�ng�s�ne benzer bir d�ng�d�r;

int main()
{
	//�rne�in ekrana 1'den 100'e kadar say� yazan bir d�ng� yazal�m.
	
	for(int i=1;i<=100;i++)//�ncelikle i de�i�keninin de�erini yaz�yoruz ard�ndan noktal� virg�l koyup ko�ulu yaz�yoruz yine ";" koyup her d�nd���nde i'nin ne kadar artaca��n� belirliyoruz.
	{
		cout<<i<<endl;
		}
	/*for(de�i�kenin ba�lang�� de�eri ; ko�ul ; de�i�kenin art��/azal�� miktar�)
	{	
		d�ng�n�n yapaca�� i�
		}
	*/	
	cout<<"\n*******************************************\n";
	int array[10]={1,2,3,4,5,6,7,8,9,10};//10 elemanl� bir array(dizi) tan�mlad�k. 	
	
	// array'in b�t�n elemanlar�n� yazan bir d�ng� yazal�m.
	for(int i=0;i<10;i++)//' i ' de�i�keni sadece for d�ng�s� i�inde tan�ml� oldu�u i�in ba�ka bir for d�ng�s� i�inde tekrer tan�mlay�p kullanabiliriz.
	{
		cout<<"array["<<i<<"]="<<array[i]<<endl;//burada array'�n t�m elemanlar�n� ekrana yazd�r�yoruz.
	}
	//�imdi for d�ng�s� ile bu dizideki elemanlar� toplay�p ekrana yazan bir program yazal�m;
	int a=0;
	for(int i=0;i<10;i++)
	{
	a=a+array[i];//burada array elemanlar�n� birbirleriyle topluyoruz.
	}
	cout<<"\nToplam="<<a<<endl;//buradada toplam� ekrana birkere yazs�n diye for d�ng�s�n�n d���nda yazd�r�yoruz fark ettiyseniz a'y� for d�n�s�n�n d���nda main fonksiyonunun i�inde tan�mlad�k.
	
	
	//array for i�in'e for d�ng�s�yle de�er atama.
	cout<<"******************************"<<endl;
	cout<<"assagida array elemanlarini degistirdik"<<endl;
	for(int i=10;i<20;i++)
	{
		array[i-10]=((i-10)*10);//buradan her ge�ti�inde i'nin de�erini " i-10 " a atayacak.
		cout<<i-10<<".eleaman="<<array[i-10]<<endl;
		}	
		
}

#include <iostream>
using namespace ::std;

/*programlarda s�k�a ku7lland���m�z d�ng�lerden biri while d�ng�s�d�r
while(){} �eklinde yaz�l�p normal parantez i�indeki ko�ullar ger�ekle�ti�i s�rece s�sl� parantez i�indeki i�lemleri yerine getirir
ne zaman ki ko�ul sa�lanad� o zamn s�sl� parantez i�indeki i�lemi ger�ekle�tirmeden ��kar
tabi bunun bide do {}while(); �eklinde yaz�lan�da vard�r bu ikisinin fark� do while i�lemi bir kere yapar sonra ko�ula ba�l� olarak
i�lemi yap�p yapmayaca��na karar verir oysaki while() �nce ko�ula bakar ko�ul ger�ekle�medi�i s�rece i�lemi yapmaz.
*/

int main()
 {
 	int i=0;
 	while(i<=10)  // i 10 dan k���k oldu�u s�rece s�sl� parantez i�indeki i�lemi yerine getir.
 	{
 		cout<<i<<endl;  //ekrana i nin de�erini yaz ve bir alt sat�ra ge�
 		i++;//i ye 1 ekle yani i=i+1;
	 }
	 i=41;
	 while(i>0)
	 {
	 	cout<<"masallah"<<endl;
	 	i--;	
	 }
	 cout<<"41 kere masallah"<<endl;
	 
	 int kosul;
	
	 cout<<"bir sayi gir";
	 cin>>kosul;
	 
	 while(kosul>0)
	 {
	 	cout<<"icerdeyim baba"<<endl;
	 	kosul--;
	 }
	 
	 
 }
 
 
 // do while �rne�i dosya i�inde di�er ornekte var;

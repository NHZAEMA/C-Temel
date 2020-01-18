#include <iostream>
using namespace ::std;

/*programlarda sýkça ku7llandýðýmýz döngülerden biri while döngüsüdür
while(){} þeklinde yazýlýp normal parantez içindeki koþullar gerçekleþtiði sürece süslü parantez içindeki iþlemleri yerine getirir
ne zaman ki koþul saðlanadý o zamn süslü parantez içindeki iþlemi gerçekleþtirmeden çýkar
tabi bunun bide do {}while(); þeklinde yazýlanýda vardýr bu ikisinin farký do while iþlemi bir kere yapar sonra koþula baðlý olarak
iþlemi yapýp yapmayacaðýna karar verir oysaki while() önce koþula bakar koþul gerçekleþmediði sürece iþlemi yapmaz.
*/

int main()
 {
 	int i=0;
 	while(i<=10)  // i 10 dan küçük olduðu sürece süslü parantez içindeki iþlemi yerine getir.
 	{
 		cout<<i<<endl;  //ekrana i nin deðerini yaz ve bir alt satýra geç
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
 
 
 // do while örneði dosya içinde diðer ornekte var;

// while if-else ile bir maas vergi uygulamasi
#include <iostream> 
using namespace std;
int main( )
{
  long double maas, net, vergi = 0.0; 	//degiskenler atandi
  cout<< "Lutfen maasinizi giriniz: ";  // maasi giriyoruz
  cin>> maas; 							// maasi programa al
  while( maas >= 0.0 ) 					// maasin kosunu yaz 
  { 
     if( maas <= 25000 )   				// maas 25 binden az ise
        vergi = 0.0;					// vergi yok
     else 									
       if( maas < 50000 ) 				// maas 50 binden az ise 
          vergi = maas * 0.10; 			// vergi %10
       else								// maas 50 binden fazla ise
          vergi = maas * 0.20; 			// vergi %20

     net = maas - vergi; 				// net maasdan vergi cikar
     cout<< "Odenmesi Gereken vergi " << vergi << endl; 	
     cout<< "Net maasiniz: " << net << endl; 

     cout<< "Lutfen maasinizi giriniz: "; 	// yeni hesap
     cin>> maas; 			 			
  }
  return 0; 
}

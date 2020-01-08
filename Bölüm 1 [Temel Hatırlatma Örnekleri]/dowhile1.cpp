//do-while döngüsünü kullandik
#include <iostream>
using namespace std;
int main ()
{
  long x;
  do {
    cout<< "Bir sayi giriniz (Durdurmak icin 0 ) : ";
    cin>> x;
    
	cout<< "Girdiginiz sayinin karesi: " ; 
	    << x*x +4 ;
		<< "\n";
		
    } while (x != 0);
  
  return 0;
}


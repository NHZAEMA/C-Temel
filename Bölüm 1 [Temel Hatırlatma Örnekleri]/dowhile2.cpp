//do-while d�ng�s�n� kullandik
#include <iostream>
using namespace std;
int main ()
{
  int x, ttop=0,ctop=0;
  do {
      cout<< "Bir sayi giriniz ( Durdurmak i�in 0 ) : ";
      cin>> x;
      if (x%2==1)
         ttop=ttop+x;
	  else
	     ctop=ctop+x;
         
    } while (x != 0);
  cout<< "Girdiginiz tek sayilarin toplami: " 
      << ttop<<"-----"<<ctop
	<<"\n";
  return 0;
}

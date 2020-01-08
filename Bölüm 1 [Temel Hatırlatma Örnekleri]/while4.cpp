// while ile faktoriyel hesaplama
#include <iostream>
using namespace std;
int main()
{
  int sayi;
  long faktoriyel=1;
  cout<<"Bir sayi giriniz: ";
  cin>>sayi;
  cout<<sayi<<" in Faktoriyeli:";

  while (sayi > 1)
  {  
    faktoriyel *= sayi;
    sayi--;
  }
  cout<<faktoriyel<<endl;
  
  return 0;
}

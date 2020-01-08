// for ile faktoriyel hesaplama
#include <iostream>
using namespace std;
int main()
{
  int sayi;
  long faktoriyel=1;
  cout<<"Bir sayi giriniz: ";
  cin>>sayi;
  cout<<sayi<<" in Faktoriyeli:";

  for (int i=1; i<=5; i++)
    faktoriyel *= sayi;

  cout<<faktoriyel<<endl;
  
  return 0;
}

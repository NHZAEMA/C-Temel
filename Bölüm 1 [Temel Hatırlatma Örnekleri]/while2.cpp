//while döngüsü ile klavyeden girilen sayilari topluyor

#include <iostream>
using namespace std;
int main()
{
  int sayi, top = 0, sayac=0;

  while (top<100)
  {
  	sayac++;
    cout<<"Bir sayi gir:";
    cin>>sayi;
    top+=sayi;
  }
  cout<<"Ortalama="<<top/sayac<<endl;
  return 0;
}

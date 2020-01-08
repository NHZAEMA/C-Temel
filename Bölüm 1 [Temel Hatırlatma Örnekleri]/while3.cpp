// while döngüsü ile girilen 10 ogrencinin notlarin ortalamasi
#include <iostream>
using namespace std;
int main()
{
  int toplam=0, sayac=1, nott, ortalama; 
  while ( sayac <= 5 )
  {
    cout <<sayac<< ". Notu giriniz: ";
    cin >>nott; 
    toplam += nott;
    sayac++; 
  }
  ortalama = toplam / 5;
  cout << "Sinif ortalamasi = " << ortalama << endl;

  system("PAUSE");
  return 0;
}

// while döngüsü ile girilen 10 ogrencinin notlarin ortalamasi
#include <iostream>
using namespace std;
int main()
{
  int toplam=0, nott, ortalama; 
  for (int i=1; i<=10; i++)
  {
    cout <<i<< ". Notu giriniz: ";
    cin >>nott; 
    toplam += nott; 
  }
  ortalama = toplam / 10;
  cout << "Sinif ortalamasi = " << ortalama << endl;

  return 0;
}

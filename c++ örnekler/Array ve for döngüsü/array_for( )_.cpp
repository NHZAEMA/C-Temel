//array(dizi) ve for  d�ng�s�;
#include<iostream>
using namespace::std;

//array t�rk�edeki anlam�yla dizi  de�i�kenleri bir k�me i�inde tutmam�z� sa�lar tabi bu onun en basit tan�m� �rne�in matrix i�lemlerinideyapmam�za yard�medebiliyor
//dizileri belli b�l�mleri olan bir �e�it dolaba benzete biliriz burada en �nemli �ey bu b�l�mlerin s�f�rdan ba�lad���n� unutmamam�z gerekir.
//�rne�in 10'tane indexi olan bir dizi tan�mlay�p bu indexlere de�erler at�yal�m.

int main()
{
int dizi[10]={0,1,2,3,4,5,6,7,8,9};//ka�tane index alabilece�ini belirlemek i�in k�me parantezine istenen b�y�kl�k yaz�l�r.
//ayr�ca dizilere yukardaki gibi s�sl� parantezle de�er at�ya bilece�imiz gibi dizinin ismini yaz�p k�mee parantezi i�ine index numaras�n� yazarak de�er atayabiliriz
/*dizi[0]=5;
dizi[1]=7;
.
.
.
dizi[n]=m;*/
cout<<"*****************************************\n1.\n";
cout<<"dizi[0]="<<dizi[0];//index numareas�na 0 vererek dizinin 0.indexindeki de�eri okuduk.
dizi[0]=25; 
cout<<"\ndegistirilmis deger dizi[0]="<<dizi[0];//b�ylede deger atana bilece�ini yukarda yazm��t�m.
//a��a��da iki indexteki de�erlerin yerlerini  de�i�tirdik
cout<<"\n***********************************************\n2.";
cout<<"\ndizi[3]="<<dizi[3]<<"\ndizi[4]="<<dizi[4];//burada ilk b�taki de�erleri okuyoruz.
int a;
a=dizi[3];
dizi[3]=dizi[4];
dizi[4]=a;
cout<<"\ndizi[3]="<<dizi[3]<<"\ndizi[4]="<<dizi[4];//burada da de�i�tirilmi� hallerini okuyoruz.	
}

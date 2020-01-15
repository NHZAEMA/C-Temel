//array(dizi) ve for  döngüsü;
#include<iostream>
using namespace::std;

//array türkçedeki anlamýyla dizi  deðiþkenleri bir küme içinde tutmamýzý saðlar tabi bu onun en basit tanýmý örneðin matrix iþlemlerinideyapmamýza yardýmedebiliyor
//dizileri belli bölümleri olan bir çeþit dolaba benzete biliriz burada en önemli þey bu bölümlerin sýfýrdan baþladýðýný unutmamamýz gerekir.
//örneðin 10'tane indexi olan bir dizi tanýmlayýp bu indexlere deðerler atýyalým.

int main()
{
int dizi[10]={0,1,2,3,4,5,6,7,8,9};//kaçtane index alabileceðini belirlemek için küme parantezine istenen büyüklük yazýlýr.
//ayrýca dizilere yukardaki gibi süslü parantezle deðer atýya bileceðimiz gibi dizinin ismini yazýp kümee parantezi içine index numarasýný yazarak deðer atayabiliriz
/*dizi[0]=5;
dizi[1]=7;
.
.
.
dizi[n]=m;*/
cout<<"*****************************************\n1.\n";
cout<<"dizi[0]="<<dizi[0];//index numareasýna 0 vererek dizinin 0.indexindeki deðeri okuduk.
dizi[0]=25; 
cout<<"\ndegistirilmis deger dizi[0]="<<dizi[0];//böylede deger atana bileceðini yukarda yazmýþtým.
//aþþaðýda iki indexteki deðerlerin yerlerini  deðiþtirdik
cout<<"\n***********************************************\n2.";
cout<<"\ndizi[3]="<<dizi[3]<<"\ndizi[4]="<<dizi[4];//burada ilk bþtaki deðerleri okuyoruz.
int a;
a=dizi[3];
dizi[3]=dizi[4];
dizi[4]=a;
cout<<"\ndizi[3]="<<dizi[3]<<"\ndizi[4]="<<dizi[4];//burada da deðiþtirilmiþ hallerini okuyoruz.	
}

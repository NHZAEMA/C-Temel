#include<iostream>
using namespace::std;

//�imdide adres bulmaya �al��al�m adres bulmak i�in de�i�kenin �n�ne "&" i�aretini koymam�z yeterli olucakt�r.
int main()
{
	int x=0;//x'i herhangi bir de�ere e�itledik.
	cout<<"x="<<x;
	cout<<"\nreferance= "<<&x;//burada"&" i�aretini kullanarak x in nereye kaydoldu�una bakt�k.
	
	//�imdide dereferance konusuna bakacak olursak 
	int * ptrx;	// burada de�i�kenin �n�ne "*" i�aretini koyarak onun bir "pointer " de�eri olmas�n� sa�lad�k.bunlar adres tutmak i�in vard�r
	
	ptrx=&x;// burada ptr adl� ponter de�i�kenimizi x'in adresine e�itledik.
	cout<<"\ndereferance= "<<ptrx;
	
	//�imdi adres kullanarak adresteki de�eri okumaya �al��al�m;
	cout<<"\n"<<ptrx<<" adresindeki deger= "<<*ptrx;//burada de�i�kenin ismini kullanmadan adresi sayesinde de�i�kenin degerini okumu� olduk."*ptr" bahsi ge�en adresteki de�eri okumaz� sa�lar.
	
	//adresler sayesinde de�i�kenin degerinide de�i�tirebiliriz.
	*ptrx=5;//burada x' bulundu�u adresteki de�eri 5 ile de�i�tirmi� olduk yani dolayl� yoldan x'e ula��p onun de�erini de�i�tirdik.
	cout<<"\nx\'in yeni degeri= "<<x;
	cout<<endl<<endl;
	int y=10;
	cout<<"y="<<y;
	cout<<"\nreferance= "<<&y;
	
	int *ptry;
	ptry=&y;
	cout<<"\ndereferance= "<<ptry;
	
	cout<<endl<<ptry<<"adresindeki deger= "<<*ptry;
	cout<<"\ny\'nin yeni degeri= "<<y;
	
	 //iki de�i��kenin i�indeki de�erlerin birbiriyle de�i�tirme i�lemi a��a��daki gibi yap�l�r
	 //a��a��daki kod sat�r�n� �al��t�rmak i�in ba��ndaki " /* " i�aretini ve sonundaki " */ " i�aretini silin.
	 
	 int a;
	 
	 /* a=*ptrx;
	 *ptrx=*ptry;
	 *ptry=a;
	 cout <<"\nX="<<x<<endl;
	 cout<<"Y="<<y<<endl;*/
	 	
}

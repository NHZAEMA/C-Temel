#include<iostream>
using namespace::std;

//þimdide adres bulmaya çalýþalým adres bulmak için deðiþkenin önüne "&" iþaretini koymamýz yeterli olucaktýr.
int main()
{
	int x=0;//x'i herhangi bir deðere eþitledik.
	cout<<"x="<<x;
	cout<<"\nreferance= "<<&x;//burada"&" iþaretini kullanarak x in nereye kaydolduðuna baktýk.
	
	//þimdide dereferance konusuna bakacak olursak 
	int * ptrx;	// burada deðiþkenin önüne "*" iþaretini koyarak onun bir "pointer " deðeri olmasýný saðladýk.bunlar adres tutmak için vardýr
	
	ptrx=&x;// burada ptr adlý ponter deðiþkenimizi x'in adresine eþitledik.
	cout<<"\ndereferance= "<<ptrx;
	
	//þimdi adres kullanarak adresteki deðeri okumaya çalýþalým;
	cout<<"\n"<<ptrx<<" adresindeki deger= "<<*ptrx;//burada deðiþkenin ismini kullanmadan adresi sayesinde deðiþkenin degerini okumuþ olduk."*ptr" bahsi geçen adresteki deðeri okumazý saðlar.
	
	//adresler sayesinde deðiþkenin degerinide deðiþtirebiliriz.
	*ptrx=5;//burada x' bulunduðu adresteki deðeri 5 ile deðiþtirmiþ olduk yani dolaylý yoldan x'e ulaþýp onun deðerini deðiþtirdik.
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
	
	 //iki deðiþþkenin içindeki deðerlerin birbiriyle deðiþtirme iþlemi aþþaðýdaki gibi yapýlýr
	 //aþþaðýdaki kod satýrýný çalýþtýrmak için baþýndaki " /* " iþaretini ve sonundaki " */ " iþaretini silin.
	 
	 int a;
	 
	 /* a=*ptrx;
	 *ptrx=*ptry;
	 *ptry=a;
	 cout <<"\nX="<<x<<endl;
	 cout<<"Y="<<y<<endl;*/
	 	
}

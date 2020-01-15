 #include <iostream>
 using namespace::std;
 int x,y,a,b;
 int main()
 {	
 //temelde aþþaðýdaki gibi yazdýrýrsak ekran sýrasýyla yazýcaktýr
 	cout<<"merhaba ";
 	cout <<"dünya";
 	
 	// kýsaltma olarak yan yana da yazabiliriz
 	cout<<"merhaba"<<"dünya";
 	//eðer imleci bi alt satýra indirmek istiyorsak noktalý virgülden önce "<<endl" koyarýz
 	cout<<"merhaba"<<endl<<"dünya";
 	//bi alt satýra inmek için týrnak içine "\n" ifadesinide yazabiliriz.
 	cout<<"\nmerhaba\ndünya";
 	//atama iþlemleride klasik aþaðýdaki gibidir.
 	cout <<"\nbir sayi gir";
 	cin>>x;
 	cout<<"bir sayi daha gir";
 	cin >>y;
 	cout<<"x="<<x<<"\n"<<"y="<<y;
 	//kýsaltma olarak da
 	cout<< "\niki sayi gir";
 	cin>>a>>b;
 	cout<<"a="<<a<<"\nb="<<b;
 	
 	//tek týrnak için "\'"
 	//ekrana týrnak iþareti koymak için " \" "ifadesi kullanýlýr.
 	cout<<"\nmerhabadün\"ya";
 	//"\"ifadesinden sonra "a" yazarsak ana karttan bir bip sesi gelir.
 	cout<<"merhaba \a";
 	//eðer "\"ifadesini yazzmak istersek.
 	cout<<"mer\\haba";
 	//tab kadar boþluk için "\t"
 	
 	
 	
 	
 	
 	
 }

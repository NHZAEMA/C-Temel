 #include <iostream>
 using namespace::std;
 int x,y,a,b;
 int main()
 {	
 //temelde a��a��daki gibi yazd�r�rsak ekran s�ras�yla yaz�cakt�r
 	cout<<"merhaba ";
 	cout <<"d�nya";
 	
 	// k�saltma olarak yan yana da yazabiliriz
 	cout<<"merhaba"<<"d�nya";
 	//e�er imleci bi alt sat�ra indirmek istiyorsak noktal� virg�lden �nce "<<endl" koyar�z
 	cout<<"merhaba"<<endl<<"d�nya";
 	//bi alt sat�ra inmek i�in t�rnak i�ine "\n" ifadesinide yazabiliriz.
 	cout<<"\nmerhaba\nd�nya";
 	//atama i�lemleride klasik a�a��daki gibidir.
 	cout <<"\nbir sayi gir";
 	cin>>x;
 	cout<<"bir sayi daha gir";
 	cin >>y;
 	cout<<"x="<<x<<"\n"<<"y="<<y;
 	//k�saltma olarak da
 	cout<< "\niki sayi gir";
 	cin>>a>>b;
 	cout<<"a="<<a<<"\nb="<<b;
 	
 	//tek t�rnak i�in "\'"
 	//ekrana t�rnak i�areti koymak i�in " \" "ifadesi kullan�l�r.
 	cout<<"\nmerhabad�n\"ya";
 	//"\"ifadesinden sonra "a" yazarsak ana karttan bir bip sesi gelir.
 	cout<<"merhaba \a";
 	//e�er "\"ifadesini yazzmak istersek.
 	cout<<"mer\\haba";
 	//tab kadar bo�luk i�in "\t"
 	
 	
 	
 	
 	
 	
 }

// switch case kar��la�t�rmalar�

// bazen birden fazla kar��la�t�rmalara ihtiya� duyar�z if() ifadesi i�e yarar ama �okfazla kod sat�r� kaplar switch case bu y�n�yle i�e yarar bir ifadedir.

#include <iostream>
using namespace::std;

int main()
{
	int x;
	
	cout<<"1'den 7'ye kadar bir sayi girin";
	cin>>x;
	
	switch (x)
	{
		case 1:
		{   cout<<"pazartesi"; break;//"break" ifadesi fonksiyondan ��kmaya yarar(break'tan sonra i�lem yap�lmaz)
		 	}
		case 2:
			{ cout<<"sali"; break;}
		case 3:
			{ cout<<"carsamba"; break;}
		case 4:
			{ cout<<"persembe"; break;}
		case 5:
			{ cout<<"cuma"; break;}
		case 6:
			{ cout<<"cumartesi"; break;}
		case 7:
			{ cout<<"pazar"; break;}
		
			default:	//burada case i�inde yazmad���m�z �n g�r�lemeyen bir giri� al�nd���nda yap�lacak i� yaz�l�r.
			{	main();	} // 1-7 aras�nda bir say� girilmesse program� ba�a sar. 
		
	}


}  

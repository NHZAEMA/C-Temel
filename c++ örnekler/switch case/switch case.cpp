// switch case karþýlaþtýrmalarý

// bazen birden fazla karþýlaþtýrmalara ihtiyaç duyarýz if() ifadesi iþe yarar ama çokfazla kod satýrý kaplar switch case bu yönüyle iþe yarar bir ifadedir.

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
		{   cout<<"pazartesi"; break;//"break" ifadesi fonksiyondan çýkmaya yarar(break'tan sonra iþlem yapýlmaz)
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
		
			default:	//burada case içinde yazmadýðýmýz ön görülemeyen bir giriþ alýndýðýnda yapýlacak iþ yazýlýr.
			{	main();	} // 1-7 arasýnda bir sayý girilmesse programý baþa sar. 
		
	}


}  

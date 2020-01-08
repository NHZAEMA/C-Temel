//for ile toplama islemi...
#include<iostream>
using namespace std;
int main()
{
    int sayi, toplam=0;
	for (int i=1; i<=10;i++)
	   {
	   	 cout<<i<<". sayiyi gir:"; 
		 cin>>sayi;
		 toplam=toplam+sayi;
		 cout<<"Ara Top:"<<toplam<<endl;   
	   }	
	return 0;
}


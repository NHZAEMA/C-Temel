//switch örneði
#include<iostream>
using namespace std;
int main()
{
	int il_kodu;
	cout<<"il kodu giriniz:";	cin>>il_kodu;
	
	switch(il_kodu){
		case 1: cout<<"Adana..."; break;
		case 6: cout<<"Ankara..."; break;
		case 34: cout<<"Istanbul..."; break;
		case 66: cout<<"Yozgat..."; break;
		case 81: cout<<"Duzce..."; break;
		default : cout<<"Il bulunamadi..."; break;
	}
	system("PAUSE");
	return 0;
}

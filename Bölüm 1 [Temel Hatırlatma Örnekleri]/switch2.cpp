//switch yapisi
#include<iostream>
using namespace std;
int main()
{
	int plaka,a=5,b=10;
	cout<<"plaka kodu giriniz:";  cin>>plaka;
	switch(plaka)
	{
		case 1: cout<<a*b; 
		        cout<<"Adana..."<<endl;	break;
		case 2: cout<<"Adiyaman..."<<endl; break;
		case 6: cout<<"Ankara..."<<endl; break;
		case 7: cout<<"Anlatya..."<<endl; break;
		case 34: cout<<"istanbul..."<<endl; break;
		case 66: cout<<"yozgat..."<<endl; break;
		case 71: cout<<"kirikkale..."<<endl; break;
		case 82: cout<<"duzce..."<<endl; break;
		default: 
		   cout<<"Yanlis veya bulunamayan plaka girdiniz..."<<endl;
	}
	return 0;
}








#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int sayi1,sayi2; 
	char islem;	
	cout<<"Sayi1 giriniz:";cin>>sayi1;
	cout<<"Sayi2 giriniz:";cin>>sayi2;
	cout<<"Ýslem seciniz";cin>>islem;
switch(islem)
{
case '+':
cout<<sayi1<<"+"<<sayi2<<"="<<(sayi1+sayi2)<<endl;
break;
case '-':
cout<<sayi1<<"-"<<sayi2<<"="<<(sayi1-sayi2)<<endl;
break;	
case '*':
cout<<sayi1<<"*"<<sayi2<<"="<<(sayi1*sayi2)<<endl;
break;
case '/':
cout<<sayi1<<"/"<<sayi2<<"="<<(sayi1/sayi2)<<endl;
break;
default :
	cout<<"Yanlis islem sectiniz.."<<endl;
}
system("PAUSE");
		return 0;
}

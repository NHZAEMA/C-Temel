//switch yapii
#include<iostream>
using namespace std;
int main()
{
	int gun;
	cout<<"gun giriniz:";  cin>>gun;
	switch(gun%7)
	{
		case 1: cout<<"Pazartesi..."<<endl;	
		case 2: cout<<"sali..."<<endl; 
		case 3: cout<<"carsamba..."<<endl; 
		case 4: cout<<"persembe..."<<endl; 
		case 5: cout<<"cuma..."<<endl; 
		case 6: cout<<"cumartesi..."<<endl; 
		case 0: cout<<"Pazar..."<<endl; 
		default: 
		   cout<<"Yanlis gun girdiniz..."<<endl;
	}
	return 0;
}








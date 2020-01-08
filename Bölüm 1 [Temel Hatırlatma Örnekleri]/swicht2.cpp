//switch örneði_mod alma
#include<iostream>
using namespace std;
int main()
{
	int gun;
	cout<<"gun giriniz:";	cin>>gun;
	switch(gun%7){
		case 0: cout<<"Pazartesi..."; break;
		case 1: cout<<"Sali..."; break;
		case 2: cout<<"Carsamba..."; break;
		case 3: cout<<"Persembe..."; break;
		case 4: cout<<"Cuma..."; break;
		case 5: cout<<"Cumartesi..."; break;
		case 6: cout<<"Pazar..."; break;
		default : cout<<"gun bulunamadi..."; break;
	}
	return 0;
}

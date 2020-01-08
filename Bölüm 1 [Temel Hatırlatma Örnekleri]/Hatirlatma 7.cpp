#include <iostream>
using namespace std;
int main()
{
	int gun;
	cout<<"Gun :";  	cin>>gun;
	switch(gun%7)
	{
		case 0:	cout<<"Pazar"<<endl; 		break;
		case 1:	cout<<"Pazartesi"<<endl;	break;
		case 2:	cout<<"Sali"<<endl; 		break;
		case 3:	cout<<"carsamba"<<endl; 	break;
		case 4:	cout<<"persembe"<<endl; 	break;
		case 5:	cout<<"cuma"<<endl; 		break;
		case 6:	cout<<"cumartesi"<<endl; 	break;				
		default: cout<<"hatali gun girdiniz..!";
	}
	return 0;
}






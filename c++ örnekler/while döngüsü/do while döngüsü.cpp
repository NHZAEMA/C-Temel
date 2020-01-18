#include<iostream>
using namespace::std;

/*
do{}while(); while döngüsünün diðer bir çeþididir süslü parantez içine yazýlan iþlemi en az birkere yapar.
*/

int main()
{
	int a=0;
	do{
		cout<<"karabas"<<endl;//c++, programý yukardanaþþaðýya doðru satýr satýr okuduðu için önce bu iþlemi yapar sonra alt satýrlardaki koþula bakar eðer koþuþl saðlarsa iþemi yapmaya devam eder saðlamaz ise döngüyü sonlandýrýrr; 
		a++;	
	}while(a<40);
	
}

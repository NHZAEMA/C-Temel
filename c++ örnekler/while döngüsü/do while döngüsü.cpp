#include<iostream>
using namespace::std;

/*
do{}while(); while d�ng�s�n�n di�er bir �e�ididir s�sl� parantez i�ine yaz�lan i�lemi en az birkere yapar.
*/

int main()
{
	int a=0;
	do{
		cout<<"karabas"<<endl;//c++, program� yukardana��a��ya do�ru sat�r sat�r okudu�u i�in �nce bu i�lemi yapar sonra alt sat�rlardaki ko�ula bakar e�er ko�u�l sa�larsa i�emi yapmaya devam eder sa�lamaz ise d�ng�y� sonland�r�rr; 
		a++;	
	}while(a<40);
	
}

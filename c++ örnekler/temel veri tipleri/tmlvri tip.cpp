#include <iostream>
using namespace::std;

int main()
{
	char a; //karakter  alabilir atama yaparken tek t�rnak kullan�l�r.
	short int x; //-32768 - +32767 say�lar� aras�nda tamde�er alabilir.
	int y; // -2147483648 - +2147483647 say�lar� aras�nda tamde�er alabilir.
	long int z; // -2147483648 - +2147483647 say�lar� aras�nda tamde�er alabilir.
	bool k; // 1 yada 0 de�eri al�r yani true yada false do�ru yada yanl��.
	
	
	a='b';	//char �rne�i
	cout<<a;
	
	//short int �rne�i
	x=32769;// g�r�ld��� gibi burda 32769 de�erini atayam�yoruz.
	cout<<"\n"<<x;
	x=32766;//burda max de�eri ge�medi�imiz i�in s�k�nt� ��km�yo.
	cout<<"\n"<<x;
	


}

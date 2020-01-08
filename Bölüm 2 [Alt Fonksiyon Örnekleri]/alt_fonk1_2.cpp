#include <iostream>
using namespace std;
void mesaj(int a);
void yaz();
int main()
{
	int X=10;
	mesaj(X);
	return 0;
} 
void mesaj(int a)
{
	for (int i=1; i<=a; i++)
		yaz();
} 
void yaz()
{
	cout<<"Merhaba\n";
}

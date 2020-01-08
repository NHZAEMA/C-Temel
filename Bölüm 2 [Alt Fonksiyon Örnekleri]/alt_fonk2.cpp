//alt fonk ornekleri -2
#include <iostream>
using namespace std;
long fakt(int a);		//1-alt fonk basligi tanimla
int main()
{
	long x=0;
	for(int i=1;i<=10;i++)
	x=x+fakt(i);
	cout<<x;
	return 0;
} //ana fonk burada biter...
long fakt(int a)	//3-alt fonk tamamini yaz...
{
	long sonuc=1;
	for (int i=1; i<=a; i++)
	   sonuc = sonuc*i;
	return sonuc;
} //alt fonk burada biter...

//alt fonk ornekleri -3
#include <iostream>
using namespace std;
long ust(int a, int b);		//1-alt fonk basligi tanimla
int main()
{
	long X=ust(4,5);		//2-ana fonk cagir
	cout<<"Sonuc="<<X<<endl;
	return 0;
} //ana fonk burada biter...
long ust(int a, int b)	//3-alt fonk tamamini yaz...
{
	long sonuc=1;
	for (int i=1; i<=b; i++)
	   sonuc = sonuc*a;
	return sonuc;
} //alt fonk burada biter...

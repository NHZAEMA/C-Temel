//alt fonk ornekleri -2
#include <iostream>
using namespace std;
long ust(int a, int b);
int main()
{
long y=0;
for(int i=2;i<=8;i++)
{
	y=y+ust(i,i+1);
}
cout<<y;
	return 0;
} //ana fonk burada biter...

long ust(int a, int b)	//3-alt fonk tamamini yaz...
{
	long sonuc=1;
	for (int i=1; i<=b; i++)
	   sonuc = sonuc*a;
	return sonuc;
} //alt fonk burada biter...

//alt fonk ornekleri -1
#include <iostream>
using namespace std;
long fakt(int a);
int main()
{
	long X=10;
	cout<<X<<"!="<<fakt(X)<<endl;
	return 0;
} 
long fakt(int a)
{
	long sonuc=1;
	for (int i=1; i<=a; i++)
	   sonuc = sonuc*i;
	return sonuc;
}

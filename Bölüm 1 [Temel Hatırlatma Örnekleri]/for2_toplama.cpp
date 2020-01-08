//belli sayiyi klavyeden girip toplar...
#include <iostream>
using namespace std;
long ust(int a, int b);
long fakt(int c);
int main()
{
	int sayi,top=0;
	for (int i=1; i<=5; i++)
	{
		cout<<i<<". sayi gir:";	cin>>sayi;
		top+=sayi;	
	}
		
	cout<<"toplam="<<top<<endl;	
	return 0;
}

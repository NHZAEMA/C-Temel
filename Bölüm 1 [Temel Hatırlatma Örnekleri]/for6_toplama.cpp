//belli sayiyi klavyeden girip toplar...
#include <iostream>
using namespace std;
long ust(int a, int b);
long fakt(int c);
int main()
{
	int top=0;
	for (int i=1; i<=10; i++)
	{
		top+=fakt(i)/ust(2,i);	
	}
		
	cout<<"toplam="<<top<<endl;	
	return 0;
}
long ust(int a, int b)
{
	long carpim=1;
	for (int i=1; i<=b; i++)
		carpim*=a;
	return carpim;
}
long fakt(int c)
{
	long carpim=1;
	for (int i=1; i<=c; i++)
		carpim*=i;
	return carpim;
}

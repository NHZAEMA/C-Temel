#include <iostream>
using namespace std;
struct hesap
{
	float sayi[10];
	float toplama()
	{
		int top=0;
		for (int i=0; i<10;i++)
			top+=sayi[i];
		return (top);
	}	
}h;
int main()
{
	for (int i=0; i<10; i++)
	{
		cout<<i+1<<". sayi:";	cin>>h.sayi[i];	
	}
	cout<<"Ortalama:"<<h.toplama()/10<<endl;
	return 0;
} 


//döngü sonunda denetim
#include<iostream>
using namespace std;
int main()
{
	int sayi;
	int top=0;
	while(top<=1000)
	{
		cout<<"sayi:";	cin>>sayi;
		top+=sayi;
	}
	cout<<"toplam:"<<top<<endl;
	return 0;
}

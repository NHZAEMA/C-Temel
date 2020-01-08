//döngü sonunda denetim
#include<iostream>
using namespace std;
int main()
{
	int sayi;
	int top=0;
	do
	{
		cout<<"sayi:";	cin>>sayi;
		top+=sayi;
	}while(top<=1000);
	
	cout<<"toplam:"<<top<<endl;
	
	system("PAUSE");
	return 0;
}

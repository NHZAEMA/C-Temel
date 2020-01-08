//static degisken
#include<iostream>
using namespace std;


int main()
{
	int sayi,faktoriyel=1;
	
	cout<<"sayi giriniz..."<<endl;
	cin>>sayi;
	
	if(sayi<0)
		cout<<"negatif sayilarin faktoriyeli alinmaz...";
	else if(sayi==0)
		cout<<sayi<<" sayisinin faktoriyeli= 1";
	else
	{
		for(int i=1;i<=sayi;i++)
		{
			faktoriyel=faktoriyel*i;
		}
		cout<<sayi<<" sayisinin faktoriyeli= "<<faktoriyel;
	}
system("PAUSE");
return(0);
}



// if() ,else if() ,else komutlar�
#include <iostream>
using namespace:: std;

int main()
{
	int x;
	cout<<"lutfen yasinizi girin";
	cin>>x;
	
	if(x<=50) //x<= 50ise 
	{
		cout<<"epey gencsiniz :)";
	}
	else if(x>50 & x<80) //& i�areti ve anlam�na gelir iki taraf�ndaki �artda sa�lan�rsa parantez i�indeki i�i yapar ve "else if()" olursa yukardaki  "if()" sa�lanmaz ise buraya ge�er sa�lan�rsa bu i�i yapmaz.
	{
		cout<< "yavas yavas yaslaniyorum desene :(";
		
	}
	else if(x>80) 
	{
		cout<<"yaw otur namazini kil kuran oku yarin bigun olucen lafin gelisi degil X)";
	}
}

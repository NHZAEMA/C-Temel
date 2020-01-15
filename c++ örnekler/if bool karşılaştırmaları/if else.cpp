
// if() ,else if() ,else komutlarý
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
	else if(x>50 & x<80) //& iþareti ve anlamýna gelir iki tarafýndaki þartda saðlanýrsa parantez içindeki iþi yapar ve "else if()" olursa yukardaki  "if()" saðlanmaz ise buraya geçer saðlanýrsa bu iþi yapmaz.
	{
		cout<< "yavas yavas yaslaniyorum desene :(";
		
	}
	else if(x>80) 
	{
		cout<<"yaw otur namazini kil kuran oku yarin bigun olucen lafin gelisi degil X)";
	}
}

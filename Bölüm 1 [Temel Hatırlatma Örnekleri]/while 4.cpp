//döngü baþýnda denetim
#include<iostream>
using namespace std;
int main()
{
	int i=1;
	while(i<=20)
	{
		if(i%2==0)
		{
			cout<<i<<" cift sayi"<<endl;
		}else
		{
			cout<<i<<" tek sayi"<<endl;
		}
		i++;
	}

	
	
	system("PAUSE");
	return 0;
}

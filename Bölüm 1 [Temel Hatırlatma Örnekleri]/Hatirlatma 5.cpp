//100 tane klavyeden girilen sayilarý toplama...
#include<iostream>
using namespace std;
int main()
{
	int top=0, sayi;
	for(int i=1; i<=100; i++)
	{
	  cout<<i<<". sayi gir:"; 	cin>>sayi;
	  top+=sayi;
	  cout<<"100 sayinin toplami:"<<top<<endl;	
	}
	   
	
	return 0;
}

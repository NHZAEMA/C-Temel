//continue-break farki
#include<iostream>
using namespace std;
int main()
{
	cout<<"break : 5"<<endl;
	for (int i=1; i<=10; i++)
	  {
	  	if (i==5) 
	  	   break;
	  	cout<<i<<endl;
	  }
	cout<<"continue : 5"<<endl;
	for (int i=1; i<=10; i++)
	  {
	  	if (i==5) 
	  	   continue;
	  	cout<<i<<endl;
	  }	  
	return 0;
}

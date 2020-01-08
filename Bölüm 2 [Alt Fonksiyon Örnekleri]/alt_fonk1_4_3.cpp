//alt fonk ornekleri -2
#include <iostream>
using namespace std;
long fakt(int a);

int main()
{
	int x,y;
	cout<<"x gir:";		cin>>x;
	cout<<"y gir:";		cin>>y;
	cout<<x+y<<"! ="<<fakt(x+y)<<endl;
} 

long fakt(int a)
{
	if (a<=1)
		return (1);
	else 
		return (a*fakt(a-1));
} 

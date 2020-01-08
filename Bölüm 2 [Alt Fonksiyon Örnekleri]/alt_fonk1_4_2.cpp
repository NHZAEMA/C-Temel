//alt fonk ornekleri -2
#include <iostream>
using namespace std;
long fakt(int a);
int main()
{
   long top=0;
   for (int i=1; i<=8; i++)
      top+=fakt(i);
	cout<<"top="<<top;
	return 0;
} 
long fakt(int a)
{
	if (a<=1)
		return (1);
	else 
		return (a*fakt(a-1));
} 

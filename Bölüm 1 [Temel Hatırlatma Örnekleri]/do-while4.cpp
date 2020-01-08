//döngü baþýnda denetim
#include<iostream>
using namespace std;
int main()
{
	int i=1, fakt=1;
	do
	{
		fakt*=i;
		i++;
	}while(i<=4);
	cout<<"4!="<<fakt<<endl;
	return 0;
}

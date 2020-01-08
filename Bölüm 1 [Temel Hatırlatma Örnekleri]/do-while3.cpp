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
	}while(i<=5);
	cout<<"5!="<<fakt<<endl;
	return 0;
}

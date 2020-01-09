#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char katar[100];
	cout<<"Katari gir:";		gets(katar);
	for(int i=0; katar[i]; i++)
		cout<<"Katar["<<i+1<<"]="<<katar[i]<<endl;
	
	return 0;
}






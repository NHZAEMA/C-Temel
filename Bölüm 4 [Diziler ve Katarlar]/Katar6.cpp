#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char katar[100];
	cout<<"Katar gir:";		gets(katar);
	for(int i=0; katar[i]; i++)
		cout<<"katar["<<i+1<<"]:"<<katar[i]<<endl;
	
	return 0;
}






#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char katar1[50]="selam", katar2[50]="millet";
	strcpy(katar1, "Turkiye");
	strcpy(katar2, " Cumhuriyeti");
	strcat(katar1, katar2);
	for(int i=0; katar1[i]; i++)
		cout<<katar1[i]<<endl;
	cout<<"Katar1 uzunlugu:"<<strlen(katar1)<<endl;
	return 0;
}






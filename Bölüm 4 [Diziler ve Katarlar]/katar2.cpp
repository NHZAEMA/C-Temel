//katarlar
#include <iostream>
using namespace std;
int main()
{
	char katar1[50]="Algoritma";
	char katar2[25]=" ve Bil. Programlama";
	cout<<"katar 1 in uzunlugu:"<<strlen(katar1)<<endl;
	cout<<"katar 2 in uzunlugu:"<<strlen(katar2)<<endl;
	strcpy(katar1, " ve Bil. Programlama");
	cout<<katar1<<endl;
	if (strcmp(katar1,katar2))
		cout<<"farkli"<<endl;
	else
		cout<<"ayni"<<endl;

	strcat(katar1, katar2);
	for (int i=0; katar1[i]; i++)
		cout<<i<<". eleman:"<<katar1[i]<<endl;
	return 0;
}

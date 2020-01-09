#include <iostream>
using namespace std;
int main()
{
	char katar1[50], katar2[50];
	cout<<"Katar 1 gir:";		gets(katar1);
	cout<<"Katar 2 gir:";		gets(katar2);
	strcat(katar1, katar2);
	for(int i=0; katar1[i]; i++)
		cout<<"katar1["<<i+1<<"]:"<<katar1[i]<<endl;
	cout<<"Katar1 uzunlugu:"<<strlen(katar1)<<endl;
	return 0;
}






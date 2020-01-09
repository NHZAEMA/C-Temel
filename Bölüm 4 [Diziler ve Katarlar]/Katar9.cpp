#include <iostream>
using namespace std;
int main()
{
	char katar1[50], katar2[50];
	cout<<"Katar 1 gir:";		gets(katar1);
	cout<<"Katar 2 gir:";		gets(katar2);
	if (strcmp(katar1, katar2))
		cout<<"Katarlar farkli"<<endl;
	else
		cout<<"Katarlar ayni"<<endl;
	return 0;
}






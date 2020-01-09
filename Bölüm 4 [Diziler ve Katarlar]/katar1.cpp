//katarlar
#include <iostream>
using namespace std;
int main()
{
	char katar1[]="selam", katar2[]="Cim bom bom";
	cout<<"katar 1 in uzunlugu:"<<strlen(katar1)<<endl;
	strcpy(katar1, "Cim bom");
	cout<<katar1<<endl;
	strcat(katar1, " bom");
	cout<<katar1<<endl;
	if (strcmp(katar1,katar2))
		cout<<"farkli"<<endl;
	else
		cout<<"ayni"<<endl;
	return 0;
}

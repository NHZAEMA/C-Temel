//katarlar
#include <iostream>
using namespace std;
int main()
{
	char katar1[50], katar2[50];
	cout<<"katar 1:";	gets(katar1);
	cout<<"katar 2:";	gets(katar2);
	if (strlen(katar1) > strlen(katar2))
		cout<<"katar 1 buyuk:"<<katar1<<endl;
	else
		cout<<"katar 2 buyuk:"<<katar2<<endl;

	return 0;
}

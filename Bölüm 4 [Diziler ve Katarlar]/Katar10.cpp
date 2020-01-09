#include <iostream>
using namespace std;
int main()
{
	char katar1[50], katar2[50];
	strcpy(katar1, "Turk ");
	strcpy(katar2, "Turk");
	if (strcmp(katar1, katar2))
		cout<<"farkli"<<endl;
	else
		cout<<"Ayni"<<endl;
	return 0;
}






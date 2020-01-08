#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int i=1;
	
	while(i<=20)
	{
	if(i%2==0)
	{
		cout<<"Cift sayi:"<<i<<endl;
	}else{
		cout<<"Tek sayi:"<<i<<endl;
	}
	i++;
	}

	
	
	return 0;
}

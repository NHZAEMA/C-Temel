//döngü baþýnda denetim
#include<iostream>
using namespace std;
int main()
{
int i=1;
do
{
if(i%2==0)
{
	cout<<"Cift sayi:"<<i<<endl;
}
else{
	cout<<"Tek sayi:"<<i<<endl;
}
i++;

}while(i<=20);

	
	
	return 0;
}

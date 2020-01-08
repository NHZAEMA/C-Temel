#include <iostream>
using namespace std;

int main(){
	int x,islem=1;
	cout << "sayiyi giriniz" << "\n";
	cin>>x;
	
	for(int i=1;i<=x;i++)
	{
		islem=islem*i;
	}
	cout<<"sonuc="<<islem<<endl;

system("PAUSE");
}




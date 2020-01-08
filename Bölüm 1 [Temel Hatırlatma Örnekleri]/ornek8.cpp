//iki sayidan buyuk olani yazan program..
#include<iostream>
using namespace std;
int main()
{
    int vize, final, ortalama;
    cout<<"vize gir:"; 
	cin>>vize;
    cout<<"final gir:"; 
	cin>>final;
	ortalama=vize*0.4+final*0.6;
    if (ortalama>=50)
        cout<<"GECTI:"<<ortalama<<endl;
    else
    	{
			cout<<"KALDI:"<<ortalama<<endl;
        }
	return 0;
}


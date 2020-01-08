//Klavyeden girilen A,B,C ortalamasi..
#include<iostream>
using namespace std;
int main()
{
    int A, B, C, top, ort;
    cout<<"A gir:"; cin>>A;
    cout<<"B gir:"; cin>>B;
    cout<<"C gir:"; cin>>C;
    top=A+B+C;
    ort=top/3;
	cout<<"Ortalama="<<ort<<endl;
	return 0;
}


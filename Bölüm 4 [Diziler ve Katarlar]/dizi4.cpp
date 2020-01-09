#include <iostream>
using namespace std;
int main()
{
	int A[10], enk=99999, enb=-99999;
	cout<<"A dizisinin klavyeden giriliyor..."<<endl;
	for(int i=0; i<10; i++)
	{
		cout<<"A["<<i+1<<"]:";
		cin>>A[i];
		if (enk>A[i])	//en kucuk kontrolü
			enk=A[i];		
		if (enb<A[i])	//en buyuk kontrolü
			enb=A[i];	
	}
	cout<<"A dizisinin enk ve enb elemani yaziliyor..."<<endl;
	cout<<"En kucuk :"<<enk<<endl;
	cout<<"En buyuk :"<<enb<<endl;
	return 0;
}






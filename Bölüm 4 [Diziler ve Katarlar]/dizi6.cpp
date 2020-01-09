#include <iostream>
using namespace std;
int main()
{
	int A[6];
	for(int i=0; i<6; i++)
	{
		cout<<i+1<<". eleman:";	cin>>A[i];
	}
	for (int i=0; i<6; i++)
		cout<<i<<". kare:"<<A[i]*A[i]<<endl;
	return 0;
}






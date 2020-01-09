#include <iostream>
using namespace std;
int main()
{
	int A[5], B[5];
	for(int i=0; i<6; i++)
	{
		cout<<"A["<<i+1<<"]:";	cin>>A[i];
		cout<<"B["<<i+1<<"]:";	cin>>B[i];
	}
	for (int i=0; i<5; i++)
	{
		cout<<"A["<<i+1<<"]*B["<<i+1<<"]="<<A[i]*B[i]<<endl;
		cout<<"A["<<i+1<<"]-B["<<i+1<<"]="<<A[i]-B[i]<<endl;
		cout<<"A["<<i+1<<"]+B["<<i+1<<"]="<<A[i]+B[i]<<endl;
		cout<<"A["<<i+1<<"]/B["<<i+1<<"]="<<A[i]/B[i]<<endl;	
	}
		
	return 0;
}






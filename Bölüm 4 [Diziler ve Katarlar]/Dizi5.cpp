#include <iostream>
using namespace std;
int main()
{
	int A[3],B[3],C[3], top=0 ;
	for(int i=0; i<3; i++)
	{
		cout<<"A["<<i+1<<"]:";		cin>>A[i];
		cout<<"B["<<i+1<<"]:";		cin>>B[i];
		cout<<"C["<<i+1<<"]:";		cin>>C[i];
		top+=(A[i]+B[i]+C[i]);
	}
	cout<<"Ort="<<top/9<<endl;
	return 0;
}






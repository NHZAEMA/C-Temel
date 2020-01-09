#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int A[5], B[5];	//dizi tanimla... 1 nolu madde
	for(int i=0; i<5; i++)		//dizi klavyeden gir..4 nolu madde
	{
		cout<<"A["<<i+1<<"]:";
		cin>>A[i];
		cout<<"B["<<i+1<<"]:";
		cin>>B[i];		
	}	
	for(int i=0; i<5; i++)		//diziyi ekrana yaz.. 3 nolu madde
		cout<<"A["<<i+1<<"]*B["<<i+1<<"]="
		    <<A[i]*B[i]<<endl;
	return 0;
}






#include <iostream>
#define PI 3.14				//const float pi=3.14;
using namespace std;
float alan(float r);
float hacim(float r);
int main()
{
	float r;
	cout<<"r:";		cin>>r;
	cout<<"kurenin alani="<<alan(r)<<endl;
	cout<<"kurenin hacmi="<<hacim(r)<<endl;
	return 0;
} 
float alan(float r)
{
	return (4*PI*r*r);
} 
float hacim(float r)
{
	return (4*PI*r*r*r/3);
} 

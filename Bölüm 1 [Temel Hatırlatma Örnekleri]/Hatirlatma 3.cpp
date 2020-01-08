/*a,b,c kenari girilen ucgenin
 çevresini ve alanýný hesaplayan program:*/
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  int a,b,c,u,alan,cevre;

  cout << "a :";    cin>>a;
  cout << "b :";    cin>>b;
  cout << "c :";    cin>>c;
  u=(a+b+c)/2;
  cout << "Cevresi:" << 2*u << endl;
  alan=sqrt(u*(u-a)*(u-b)*(u-c));
  cout << "Alani:" << alan << endl;
  return 0;
}

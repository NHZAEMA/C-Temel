/*Yar��ap� girilen 
dairenin �evresini ve alan�n� hesaplayan program:*/
#include <iostream>
#define PI 3.14
using namespace std;
int main()
{
  float radius;
  float circum, area;

  cout << "Yaricapi yaziniz :";
  cin >> radius;
  circum = 2 * PI * radius;
  area = PI * radius * radius;
  cout << "Cevresi:" << circum << endl;
  cout << "Alani:" << area << endl;
  return 0;
}

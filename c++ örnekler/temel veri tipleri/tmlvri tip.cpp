#include <iostream>
using namespace::std;

int main()
{
	char a; //karakter  alabilir atama yaparken tek tırnak kullanılır.
	short int x; //-32768 - +32767 sayıları arasında tamdeğer alabilir.
	int y; // -2147483648 - +2147483647 sayıları arasında tamdeğer alabilir.
	long int z; // -2147483648 - +2147483647 sayıları arasında tamdeğer alabilir.
	bool k; // 1 yada 0 değeri alır yani true yada false doğru yada yanlış.
	
	
	a='b';	//char örneği
	cout<<a;
	
	//short int örneği
	x=32769;// görüldüğü gibi burda 32769 değerini atayamıyoruz.
	cout<<"\n"<<x;
	x=32766;//burda max değeri geçmediğimiz için sıkıntı çıkmıyo.
	cout<<"\n"<<x;
	


}

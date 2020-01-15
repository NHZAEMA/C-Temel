#include <iostream>
using namespace std;

//hatýrlarsanýz önceki notlarda while döngüsünü görmüþtük for döngüsüde while döngüsüne benzer bir döngüdür;

int main()
{
	//örneðin ekrana 1'den 100'e kadar sayý yazan bir döngü yazalým.
	
	for(int i=1;i<=100;i++)//öncelikle i deðiþkeninin deðerini yazýyoruz ardýndan noktalý virgül koyup koþulu yazýyoruz yine ";" koyup her döndüðünde i'nin ne kadar artacaðýný belirliyoruz.
	{
		cout<<i<<endl;
		}
	/*for(deðiþkenin baþlangýç deðeri ; koþul ; deðiþkenin artýþ/azalýþ miktarý)
	{	
		döngünün yapacaðý iþ
		}
	*/	
	cout<<"\n*******************************************\n";
	int array[10]={1,2,3,4,5,6,7,8,9,10};//10 elemanlý bir array(dizi) tanýmladýk. 	
	
	// array'in bütün elemanlarýný yazan bir döngü yazalým.
	for(int i=0;i<10;i++)//' i ' deðiþkeni sadece for döngüsü içinde tanýmlý olduðu için baþka bir for döngüsü içinde tekrer tanýmlayýp kullanabiliriz.
	{
		cout<<"array["<<i<<"]="<<array[i]<<endl;//burada array'ýn tüm elemanlarýný ekrana yazdýrýyoruz.
	}
	//þimdi for döngüsü ile bu dizideki elemanlarý toplayýp ekrana yazan bir program yazalým;
	int a=0;
	for(int i=0;i<10;i++)
	{
	a=a+array[i];//burada array elemanlarýný birbirleriyle topluyoruz.
	}
	cout<<"\nToplam="<<a<<endl;//buradada toplamý ekrana birkere yazsýn diye for döngüsünün dýþýnda yazdýrýyoruz fark ettiyseniz a'yý for dönüsünün dýþýnda main fonksiyonunun içinde tanýmladýk.
	
	
	//array for için'e for döngüsüyle deðer atama.
	cout<<"******************************"<<endl;
	cout<<"assagida array elemanlarini degistirdik"<<endl;
	for(int i=10;i<20;i++)
	{
		array[i-10]=((i-10)*10);//buradan her geçtiðinde i'nin deðerini " i-10 " a atayacak.
		cout<<i-10<<".eleaman="<<array[i-10]<<endl;
		}	
		
}

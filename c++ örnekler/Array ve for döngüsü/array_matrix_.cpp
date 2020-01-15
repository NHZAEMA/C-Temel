//matrix array çoklu dizler.
#include <iostream>
using namespace::std;

/*
*çoklu dizlerde satýr ve sütun ifadeleri iþin içine girer
*eðer bir matrix dizi oluþturmak istenirse önce dizinin ismi sonra köþeli parantez içine satýr sayýsý ve ardýndan köþeli parantez içine sütun sayýsý yazýlýr.
*bu komut çoðu yerde iþimize yarýyo örneðin lineer cebir gibi derslerde sýkça kullanýlýr.
*/

int main()
{
	int array[2][3]={  {1,2,3},{4,5,6} };//süslü parantez içindeki süslü parentezlerin içine yazdýðýmýz deðerler sýrasýyla sütun sütun yerleþtirilir
	for(int i=0;i<2;i++)
	{	//burada for içine for döngüsü yazarak array dizisinin tüm indexlerine ulaþabiliyoruz.
	for(int j=0;j<3;j++)
		{
			cout<<"array["<<i<<"]["<<j<<"]="<<array[i][j]<<endl;//array'in tüm indexlerindeki deðerleri ekrana yazdýrýyoruz.
		}
	}
	
	//þimdi for döngüsüyle array'in indexlerine deðer atýyalým.
	int sayi=10; 
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			
			array[i][j]=sayi;
			sayi += sayi;//þimdi diyiceksin ki bu orada neypmýþ anlatiyim anam babam(mahsun) orda yaptýðým þey [sayi =sayi+sayi]bununla ayný bu diðer iþlemler içinde aynen geçerli.
		}
	}
	cout<<"\n*****************************************************\n";
	cout<< "assagida arrayin icine sonradan atadigimiz degerler gorulmektedir";
	for(int i=0;i<2;i++)
	{	
	for(int j=0;j<3;j++)
		{
			cout<<"array["<<i<<"]["<<j<<"]="<<array[i][j]<<endl;
		}
	}	
	
	/*arrayin içine aþþaðýdaki gibi deðer atýlabilir
	array[0][0]=5;
	array[0][1]=6;
	.
	.
	.
	aray[n][m]=z;	
	*/
	
	//burada sadece 2 lik matrixler oluþturulmaz adý üstünde çoklu matrix sadece 2lik olsaydý adý 2 lik matrix olurdu.
	//bir tane deneyelim.
	cout<<"\n****************************************\n";
	cout<<"assagida 3\'lu matrix kullanilmistir\n";
	int dizi[4][3][2];
	int a=0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<2;k++)
			{	
			
				dizi[i][j][k]=a;
				cout<<"dizi["<<i<<"]["<<j<<"]["<<k<<"]="<<dizi[i][j][k]<<endl;	
				a++;
			}
		}
	}
	//þimdi farkettimde bu karno haritalarýnda kullanýlýrmýþ heaa
	
	
	
	
		    	
	
	
	
	
	
	
	
}

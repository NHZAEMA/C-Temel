//matrix array �oklu dizler.
#include <iostream>
using namespace::std;

/*
*�oklu dizlerde sat�r ve s�tun ifadeleri i�in i�ine girer
*e�er bir matrix dizi olu�turmak istenirse �nce dizinin ismi sonra k��eli parantez i�ine sat�r say�s� ve ard�ndan k��eli parantez i�ine s�tun say�s� yaz�l�r.
*bu komut �o�u yerde i�imize yar�yo �rne�in lineer cebir gibi derslerde s�k�a kullan�l�r.
*/

int main()
{
	int array[2][3]={  {1,2,3},{4,5,6} };//s�sl� parantez i�indeki s�sl� parentezlerin i�ine yazd���m�z de�erler s�ras�yla s�tun s�tun yerle�tirilir
	for(int i=0;i<2;i++)
	{	//burada for i�ine for d�ng�s� yazarak array dizisinin t�m indexlerine ula�abiliyoruz.
	for(int j=0;j<3;j++)
		{
			cout<<"array["<<i<<"]["<<j<<"]="<<array[i][j]<<endl;//array'in t�m indexlerindeki de�erleri ekrana yazd�r�yoruz.
		}
	}
	
	//�imdi for d�ng�s�yle array'in indexlerine de�er at�yal�m.
	int sayi=10; 
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			
			array[i][j]=sayi;
			sayi += sayi;//�imdi diyiceksin ki bu orada neypm�� anlatiyim anam babam(mahsun) orda yapt���m �ey [sayi =sayi+sayi]bununla ayn� bu di�er i�lemler i�inde aynen ge�erli.
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
	
	/*arrayin i�ine a��a��daki gibi de�er at�labilir
	array[0][0]=5;
	array[0][1]=6;
	.
	.
	.
	aray[n][m]=z;	
	*/
	
	//burada sadece 2 lik matrixler olu�turulmaz ad� �st�nde �oklu matrix sadece 2lik olsayd� ad� 2 lik matrix olurdu.
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
	//�imdi farkettimde bu karno haritalar�nda kullan�l�rm�� heaa
	
	
	
	
		    	
	
	
	
	
	
	
	
}

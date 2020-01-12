#include <iostream>
using namespace std;
class sinif{

		
		public:
			
			sinif(int n,int m)
			{
				int bir[n][m];
      for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    cout << "Birinci Matris [" << i+1 << "][" << j+1 << "] =";
                    cin >> bir[i][j];}
      	
	}
	
      	
	}
			
}; 
class sinif2
{
	public:
	sinif2(int n,int m)
			{
				int iki[n][m];
      for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    cout << "ikinci Matris [" << i+1 << "][" << j+1 << "] =";
                    cin >> iki[i][j];}
}

};
class top
{
	
	top(int n,int m)
			{
				int toplam[n][m];
      for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    int toplam=(bir[i][j]+iki[i][j]);
                    }}
                    
                }
	
};
class yazdur
{
	yazdur()
	{
	
	for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            	cout<<toplam[i][j]<<endl;
            }}
}
};



int main()
{
	int n,m;
	cout<<"matris boyutlarýný gýrýnýz";
	cin>>n;
	cout<<"matris boyutlarýný gýrýnýz";
	cin>>m;
	sinif (n,m);
	sinif2 (n,m);
	yazdur ();
		
}


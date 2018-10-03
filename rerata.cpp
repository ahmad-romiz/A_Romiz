#include <iostream>
#include <conio.h>
#include <math.h>
//Ahmad Romiz
using namespace std;
main ()
{
	float a[100],tot=0;
	int n=0,i;


	cout<<"Program menghitung rerata dari sejumlah inputan\n";
	cout<<"Masukan jumlah yang akan di inputan : ";cin>>i;
	for (int x=0;x<i;x++)
	{
		cout<<"Masukan angka ke-"<<x<<" = "; cin>>a[x];
		tot=tot+a[x];								//oprasi perhitungan jumlah angka
	}
	cout<<"jumlah total ="<<tot;
	cout<<"\nbanyak data ="<<i;
	cout<<"\nRata-rata = "<<(tot/i);						//output dan oprasi menghitung rata-rata
	cout<<endl<<endl;
	
	return 0;
}


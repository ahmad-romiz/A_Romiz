#include <iostream>
#include <conio.h>
#include <math.h>
//Ahmad Romiz
using namespace std;
main ()
{
	float a[100],tot=0;
	int n=0,i;
	float a_kuadrat[100],tot1=0,tot_kuadrat;
	float sd;

	cout<<"Program menghitung Standar deviasi\n";			//berdasarkan pengembangan sourcode rerata
	cout<<"Masukan jumlah yang akan di inputan (i) : ";cin>>i;
	for (int x=0;x<i;x++)
	{
		cout<<"Masukan angka (Xi) ke-"<<x<<" = "; cin>>a[x];
		tot=tot+a[x];								//oprasi perhitungan jumlah angka
		a_kuadrat[x]=pow(a[x],2);
		tot1=tot1+a_kuadrat[x];
	}
	tot_kuadrat=pow(tot,2);
	sd=sqrt(((i*tot1)-tot_kuadrat)/(i*(i-1)));
	cout<<"\n\n(jmlh Xi)	="<<tot;
	cout<<"\n(jmlh Xi^2) 	="<<tot1;
	cout<<"\n((jmlh Xi)^2)	="<<tot_kuadrat;
	cout<<"\njadi ";
	cout<<"\nHasil Standar Deviasi	="<<sd;
	return 0;
}


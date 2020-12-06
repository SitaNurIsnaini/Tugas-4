#include <iostream>
#include <conio.h>
using namespace std;
main ()
{
	int l,a,x,y,b,i,t,h;
	
	cout<<"Gambar Bangun Datar \n";
	cout<<"==================== \n";
	cout<<"1. Kotak Bolong \n";
	cout<<"2. Segitiga \n";
	cout<<"Pilih : "; cin>>a;
	cout<<"\n";
	switch (a)
	{
		case 1 : cout<<"Panjang : "; cin>>x;
				 cout<<"Lebar   : "; cin>>y;
			for (i=1; i<=y; i++)
		{	cout<<endl;
			for (b=1; b<=x; b++)
			{
			if (i==1 || i==y || b==1 || b==x)
			{cout<<" *";}
			else {cout<<"  ";} } 
		}
		break;
		
		case 2 : cout<<"Tinggi : "; cin>>t;
	for (l=1; l<=t; l++) {
	h = l;
		for (b=1; b<=l; b++) {
			cout<<h<<" ";
			h = h + t - b;
			}
			cout<<endl;
		}
		break;
		default : cout<<"Salah Input!! \n";
	}
	cout<<"\nPress any key to continue..";
	getche();
	}



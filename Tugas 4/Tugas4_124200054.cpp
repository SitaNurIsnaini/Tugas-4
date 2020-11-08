#include <iostream>
#include <conio.h>
using namespace std;
main ()

{ 
	int a, n, m ;
	int t = 1;
	int h=0, i ;
	cout<<"Perkalian & Perpangkatan \n";
	cout<<"======================== \n";
	cout<<"1. Perkalian \n";
	cout<<"2. Perpangkatan \n";
	cout<<"Pilih : "; cin>>a;
	
	switch (a)
	{
		case 1 :	
			cout<<"Input angka N : "; cin>>n;
			cout<<"Input angka M : "; cin>>m;
			{cout<<"Hasil "<<n<<" X "<<m<<endl;}
			for (i=1;i<=n; i++)
			{h = h + m; 
			if (i != n)
				 {cout<<m; cout<<" + ";}
			}if (i!=n)
				{cout<<m;}
			cout<<" = "<<h<<endl<<endl;
			cout<<"Terimakasih :)) \n";
			
		break;
		case 2 :
			cout<<"Input angka N : "; cin>>n;
			cout<<"Input angka M : "; cin>>m;
			cout<<"Hasil "<<n<<"^"<<m<<endl;
			 for (i=1; i<=m; i++) 
			 { t = t * n;
				 if (i!= m)
				 {cout<<n<<" X "; }
				}
				if (i!= m)
					{cout<<n;}
			cout<<" = ";cout<<t<<endl<<endl;
			cout<<"Terimakasih :)) \n";
		break;	
		default : cout<<"Salah Input! \n\n";
	}
	cout<<"Press any key to continue..";
	getche () ;



}

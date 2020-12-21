#include <iostream>
#define phi 3.14

using namespace std;

double j; double r; double m,t;

void input(){
    cout<<"Jari-jari: ";cin>>j;
}
void input1(){
	cout<<"Jari-jari: ";cin>>r;
}
void input2(){
	cout<<"Jari-jari: ";cin>>m;
	cout<<"Tinggi   : ";cin>>t;
}
double luasLingkaran(){
    double luas;    
    luas=phi*j*j;   
    return luas;    
    }
double kelilingLingkaran(){
	double keliling;
	keliling=2*phi*r;
	return keliling;
	}
double volumeTabung(){
	double volume;
	volume=phi*m*m*t;
	return volume;
	}

main(){
	int p;
	string u;
	ulang:
    cout<<" MENGHITUNG LINGKARAN===================\n";
    cout<<"1. Luas Lingkaran \n";
    cout<<"2. Keliling Lingkaran \n";
    cout<<"3. Volume Tabung \n";
    cout<<"Pilih : "; cin>>p;
    switch (p) 
	{	case 1 : input(); 
				 cout<<"Luas Lingkaran Adalah "<<luasLingkaran();cout<<endl;
			     
		break;
		case 2 : input1 ();
				 cout<<"Keliling Lingkaran adalah "<<kelilingLingkaran();cout<<endl;
		break;
		case 3 : input2 ();
				 cout<<"Volume Tabung adalah "<<volumeTabung();cout<<endl;
		break;
		default: {cout<<"Salah Input!\n";}
	}
		cout<<"Ulangi Program? (y/n): ";cin>>u;
		if (u=="y") goto ulang;
		else exit(0);
		system("pause");
}

#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
	int angka, maksimum, minimum, selisih, selisihmax;
	float rata, jumlah;
	
	
	cout<<"Masukkan banyak angka : "; cin>>angka;
	int deret[angka];
	for (int i=0; i<angka; i++) {
		cout<<"Angka ke-"<<i+1<<" : ";cin>>deret[i];
	}
	cout<<"\n\n\n";
	
	maksimum = deret[0];
	for (int i=0; i<angka; i++) {
		if (deret[i]>maksimum) {
			maksimum = deret[i];
		}
	}
	minimum = deret[0];
	for (int i=0; i<angka; i++) {
		if (deret[i]<minimum) {
			minimum = deret[i];
		}
	}
	for (int i=0; i<angka; i++) {
		jumlah += deret[i];
	}
	rata = jumlah / angka;	
		
	for (int i=0; i<angka; i++) {
			selisih = deret[i] - deret [i+1];
			if (selisih<0) {
				selisih = selisih * -1;
			}
			else {
				selisih = selisih * 1;
			}
		
	}
	selisihmax = selisih;
	for (int i=0; i<angka; i++) {
		for (int i=0; i<angka; i++) {
			selisih = deret[i] - deret [i+1];
				if (selisih > selisihmax) {
					selisihmax = selisih;
				}
		}
	}
	cout<<endl;
	cout<<"________Hasil________\n";
	cout<<"Deret		: ";
	for (int i=0; i<angka; i++) {
		cout<<deret[i]<<" ";
	}
	cout<<endl;
	cout<<"Maksimum	: "<<maksimum<<endl;
	cout<<"Minimum		: "<<minimum<<endl;
	cout<<"Rata-rata	: "<<rata<<endl;
	cout<<"Selisih Max	: "<<selisihmax<<endl;


system("pause");
}

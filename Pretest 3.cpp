#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	
	double a;

	cout << "==========================================" << endl;
	cout << "Masukkan jumlah harga belanjaan" << endl << endl;
	cout << "Jumlah Harga Belanjaan	= Rp.";
	cin >> a;
	
	if (a >= 120000){
		a;
	}else if(a < 50000){
		a = a + 41000;
	}else if(a >= 50000){
		a = a + 11000;
	}
	
	cout << "==========================================" << endl;
	cout << "Total Belanja	= Rp." << a;
	return 0;
}

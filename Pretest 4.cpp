#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	
	//data type
	int a;
	float b;
	float c;
	float d;
	int i=1;

	//input
	cout << "=================================" << endl;
	cout << "Jumlah Simpanan Pokok	= ";
	cin >> a;
	cout << "Bunga per Bulan		= ";
	cin >> b;
	cout << "Lama Simpanan (bulan)	= ";
	cin >> c;
	
	//output
	cout << "=================================" << endl;
	cout << "Simpanan Pokok	= " << a << endl;
	while(i<=c){
		d = a*(b/100);
		a = a+d;
		cout << "Tabungan Bulan ke-" << i << " = " << a << endl;
		i++;
	}
	
	return 0;
}

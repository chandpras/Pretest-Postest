#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
	string a;
	double b;
	double c;
	double d;
	double e;
	
	cout<<"===================================================="<<endl;
	cout<<"Masukkan data anda"<<endl<<endl;
	cout<<"Nama			= ";
	getline(cin,a);
	cout<<"Jumlah Pinjaman		= ";
	cin>>b;
	cout<<"Bunga per Bulan		= ";
	cin>>c;
	cout<<"Lama Peminjaman		= ";
	cin>>d;
	
	d = d*12.0;
	c = c/100.0;
	e = c*d;
	e = e*b;
	
	cout<<"===================================================="<<endl;
	cout<<"Hasil Data Anda"<<endl<<endl;
	cout<<"Nama			= "<<a<<endl;
	cout<<"Cicilan per Bulan	= Rp. "<<(b+e)/d;
	
	return 0;
}

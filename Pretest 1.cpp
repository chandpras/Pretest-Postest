#include <iostream>
using namespace std;

int main()
{
	string a;
	string b;
	string c;
	string d;
	cout<<"Nama			= ";
	getline(cin,a);
	cout<<"Jumlah Pinjaman		= ";
	getline(cin,b);
	cout<<"Lama Peminjaman		= ";
	getline(cin,c);
	cout<<"Suku bunga per-tahun	= ";
	getline(cin,d);
	
	cout<<"===================================="<<endl;
	cout<<"Nama			= "<<a<<endl;
	cout<<"Jumlah Pinjaman		= Rp."<<b<<endl;
	cout<<"Lama Peminjaman		= "<<c<<endl;
	cout<<"Suku bunga per-tahun 	= "<<d<<"%"<<endl;
	return 0;
} 

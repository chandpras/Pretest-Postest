#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
	int a, b, c, x;
	
	cout<<"========================================"<<endl;
	cout<<"Operasi ax^2 + bx + c"<<endl<<endl;
	cout<<"Masukkan angka a b c x = ";
	cin>>a>>b>>c>>x;
	
	cout<<"========================================"<<endl;
	cout<<"Hasil Operasi = ";
	cout<<((a*(x*x))+(b*x)+(c));
	
	return 0;
}

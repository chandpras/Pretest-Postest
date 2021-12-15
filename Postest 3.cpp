#include <iostream>
using namespace std;

int main (){
	
	int a;

	cout << "=========================" << endl;
	cout << "Masukkan angka	= ";
	cin >> a;
	cout << "=========================" << endl;
	
	switch (a){
		case 1:
			cout << "Satu" << endl;
			break;
		case 2:
			cout << "Dua" << endl;
			break;
		case 3:
			cout << "Tiga" << endl;
			break;
		case 4:
			cout << "Empat" << endl;
			break;
		case 5:
			cout << "Lima" << endl;
			break;
		case 6:
			cout << "Enam" << endl;
			break;
		case 7:
			cout << "Tujuh" << endl;
			break;
		case 8:
			cout << "Delapan" << endl;
			break;
		case 9:
			cout << "Sembilan" << endl;
			break;
		default:
			cout << a << endl;
	}
	
	return 0;
}

#include <iostream>
using namespace std;

int main()
  {
  	
  	int n;
  	float jumlah, rata;
  	int matriks[5];
  
	cout<<"=================================="<<endl;
  	cout<<"Masukkan jumlah data = ";
  	cin>>n;
  	cout<<"Masukkan nilai = ";
  	for(int i=0;i<n;i++){
	  	cin>>matriks[i];
	  	jumlah+=matriks[i];
	  	rata=jumlah/n;
	}
  
	cout<<"=================================="<<endl;
	cout<<"Output nilai = "<<endl;
	for(int i=0;i<n;i++){
		cout<<matriks[i]<<endl;	
	}
	cout<<endl;
	cout<<"Rata-rata = "<<rata;
	
	return 0;
  }

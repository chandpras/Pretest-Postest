#include <iostream>
using namespace std;

int main()
  {
  	
//data type
  	int n;
  	float jumlah, rata;
  	int matriks[5];
  
//input
	cout<<"=================================="<<endl;
  	cout<<"Masukkan jumlah data = ";
  	cin>>n;
  	cout<<"Masukkan nilai = ";
  	for(int i=0;i<n;i++){
	  	cin>>matriks[i];
	  	jumlah+=matriks[i];
	  	rata=jumlah/n;
	}
  
//output
	cout<<"=================================="<<endl;
	cout<<"Output nilai = "<<endl;
	for(int i=0;i<n;i++){
		cout<<matriks[i]<<endl;	
	}
	cout<<endl;
	cout<<"Rata-rata = "<<rata;
	
	return 0;
  }

#include<iostream>
using namespace std;

int i, ba, bb, counter=0;

int Jumlah(int x, int y, int z){
	for (i=x; i<=y; i++){
		z += i;
	}
	return z;
}

int main(){
	bb=5;
	ba=10;
	
	counter = Jumlah(bb, ba, counter);
	
	cout<<"Batas Bawah : "<<endl;
	cout<<bb<<endl;
	cout<<"Batas Atas : "<<endl;
	cout<<ba<<endl;
	cout<<"Hasil : "<<endl;
	cout<<counter;
	
	
	
}

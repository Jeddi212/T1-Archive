#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	float hasil = 1;
	float suku;
	int z = 0, i = 2;
	int x, a, k = 1;
	
	cout << "INPUT Cosinus-mu Padaku : ";
	cin >> x;
	cout << endl;
	
	do{
		
		float pangkat = 1;
		for(a=1; a<=i; a++){
			pangkat = pangkat * x;
		}
		
		float faktorial = 1; 
		for(a=1; a<=i; a++){
			faktorial = faktorial * a;
		}
		
		suku = pangkat / faktorial;
		
		if (k == -1){
			hasil = hasil + suku;
		} else {
			hasil = hasil - suku;
		}
		
		k*=-1;
		i+=2;
		z+2;
		
	} while (suku >= 0.000005);
	
	cout << "Hasil : " << hasil << endl << endl;
	
	cout << "Ini Pake Fungsi cos(x) : " << cos(x);
}

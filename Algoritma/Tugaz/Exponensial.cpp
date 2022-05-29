#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	float pangkat = 1;
	float faktorial = 1;
	double hasil = 1;
	double suku;
	int x , i = 1;
	
	cout << "INPUT : ";
	cin >> x;
	
	do{
		
		pangkat = pangkat * x;
		faktorial = faktorial * i;
		
		suku = pangkat / faktorial;
		hasil = hasil + suku;
		
		i++;
		
	} while (suku >= 0.000005);
	
	cout << hasil << endl << endl;
	
	cout << pow(2.71828,x)<< endl << endl;
	
	cout << exp(x) << endl << endl;
}

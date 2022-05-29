#include <iostream>
using namespace std;

int main(){
	
	int a, b, h;
	int t;
	
	cout << "Masukkan Tinggi SEGITIGA : ";
	cin >> t;
	
	for (a = 1; a <= t; a++){
		for (b = 1; b <= (t-a); b++){
			cout << " ";
		}
		for (b = 1; b <= a; b++){
			cout << b << " ";
		}
		cout << endl;
	}
	
}

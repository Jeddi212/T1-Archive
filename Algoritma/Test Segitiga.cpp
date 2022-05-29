#include <iostream>
using namespace std;

int main(){
	
	int a, b, t;
	
	cout << "Masukkan Tinggi SEGITIGA : ";
	cin >> t;
	
	for (a = 1; a <= t; a++){
		for (b = 1; b <= (t-a); b++){
			cout << " ";
		}
		for (b = 2; b <= (a * 2); b++){
			cout << "*";
		}
		cout << endl;
	}
	
}

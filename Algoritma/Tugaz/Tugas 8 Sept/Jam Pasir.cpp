#include <iostream>
using namespace std;

int main(){
	
	int t;
	int a;
	int b;
	int h;
	
	cout << "Masukkan Tinggi (Ganjil) : ";
	cin >> h;
	
	t = h/2+1;
	
	for (a = 1; a <= t-1; a++){
		for (b = 1; b <= a - 1; b++){
			cout << " ";
		}
		for (b = 1; b <= t+1 - a; b++){
			cout << a << " ";
		}
		cout << endl;
	}
	for (a = 1; a <= t; a++){
		for (b = 1; b <= t - a; b++){
			cout << " ";
		}
		for (b = 1; b <= t - (t - a); b++){
			cout << a+(t/2)+1 << " ";
		}
		cout << endl;
	}
}

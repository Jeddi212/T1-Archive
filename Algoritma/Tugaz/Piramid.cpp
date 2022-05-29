#include <iostream>
using namespace std;

int main(){
	
	int t, j, i;
	
	cout << "Masukkan Tinggi : ";
	cin >> t;
	
	for (i = 1; i <= t; i++){
		for (j = 1; j <= 2 * t - 1; j++){
			if (j >= t - (i - 1) && j <= t + (i - 1)) {
				cout << "*";
			} else {
				cout << " ";
				}
		}
		cout << endl;
	}
	return 0;
}

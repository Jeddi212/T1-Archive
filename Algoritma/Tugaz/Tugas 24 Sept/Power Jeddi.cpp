#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int a, pangkat, hasil, n;
	
	cout << "Masukkan Nilai : ";
	cin >> n;
	
	cout << "Masukkan pangkat : ";
	cin >> pangkat;
	cout << endl;
	
	hasil=1;
	for(a=1; a<=pangkat; a++){
		hasil *= n;
	}
	
	cout << "Hasilnya : " << hasil << endl << endl;
	
	cout << "Ini menggunakan fungsi power : " << pow(n,pangkat);
}

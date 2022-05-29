#include <iostream>
using namespace std;

int main(){
	
	int n, i;
	string bilangan = "PRIMA !";
	
	cout << "Masukkan Bilangan : ";
	cin >> n;
	
	for (i = 2; i <= n / 2; i++){
		if (n % i == 0){
			bilangan = "BUKAN PRIMA !";
			break;
		}
	}
	if (bilangan == "PRIMA !"){
		cout << bilangan;
	} else {
		cout << bilangan;
	}
}

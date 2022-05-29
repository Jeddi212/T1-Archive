#include <iostream>
using namespace std;

int main(){
	
	int pass = 1234;
	int passmasuk;
	int i = 1;
	
	while (i < 3 && passmasuk != pass){
		i++;
		cout << "Masukkan password (4 digit) : ";
		cin >> passmasuk;
		cout << endl;
		
		if (passmasuk == pass){
			cout << "\nWelcome";
		} else if (i > 3 && passmasuk != pass){
			cout << "\nError";
		}
	}
		
}

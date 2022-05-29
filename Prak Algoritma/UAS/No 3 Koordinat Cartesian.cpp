#include <iostream>
using namespace std;

struct RPoint {
	int x;
	int y;
};

int main(){
	RPoint t1, t2;
	
	cout << "Masukkan Input Titik Pertama : " << endl;
	cout << "x = ";
	cin >> t1.x;
	cout << "y = ";
	cin >> t1.y;
	
	cout << endl;
	
	cout << "Masukkan Input Titik Kedua : " << endl;
	cout << "x = ";
	cin >> t2.x;
	cout << "y = ";
	cin >> t2.y;
	
	if(t1.x == t2.x && t1.y == t2.y){
		cout << "\nTitik Pertama dan Kedua Sama Koordinatnya";
	} else {
		cout << "Kedua Titik Berbeda Koordinatnya";
	}
}

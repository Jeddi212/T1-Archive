#include <iostream>
#include <math.h>
using namespace std;

float jarak2Titik(int x1, int y1, int x2, int y2){
	return sqrt(pow((x2 - x1), 2) + (pow((y2 - y1), 2)));
}

struct RPoint {
	int x;
	int y;
};

int main(){
	RPoint t1, t2;
	float hasil;
	
	
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
	
	hasil = jarak2Titik(t1.x, t1.y, t2.x, t2.y);
	
	cout << "\nJarak Kedua Titik = " << hasil;
}

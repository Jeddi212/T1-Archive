#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int x1, y1, x2, y2, x3, y3; 
	int terbesar, second, third;
	
	cout << "Masukkan titik pertama : " << endl;
	cout << "x : ";
	cin >> x1;
	cout << "y : ";
	cin >> y1;
	
	cout << "Masukkan titik kedua : " << endl;
	cout << "x : ";
	cin >> x2;
	cout << "y : ";
	cin >> y2;
	
	cout << "Masukkan titik ketiga : " << endl;
	cout << "x : ";
	cin >> x3;
	cout << "y : ";
	cin >> y3;
	
	int R1, R2, R3;
	
	R1 = sqrt(pow((x2-x1),2) + pow((y2-y1), 2));
	R2 = sqrt(pow((x2-x3),2) + pow((y2-y3), 2));
	R3 = sqrt(pow((x3-x1),2) + pow((y3-y1), 2));
	
	if(R1 > R2){
		terbesar = R1;
		second = R2;
		third = 0;
	} else if (R3 > R1){
		third = R2;
		second = R1;
		terbesar = R3;
	}
	
	if(terbesar == sqrt(pow(second,2)) + pow(third,2)){
		cout << "Ini Segitiga Siku-Siku";
	} else {
		cout << "Bukan Segitiga Siku-Siku";
	}
}

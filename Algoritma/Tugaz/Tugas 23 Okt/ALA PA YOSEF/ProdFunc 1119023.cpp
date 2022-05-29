#include <iostream>
#include <sstream>
#include <stdlib.h>
using namespace std;

int main (){
	
int nmax = 10, i, a;
float NA, Nilai, Total;
string arr[nmax][6];
int n;
string NAkhir;

cout << "Masukkan Jumlah Siswa : ";
cin >> n;

for(a = 0; a < n;  a++){
	cout << "Masukkan Data (NIM, NAMA, N1, N2, N3)" << endl;
	for(i = 0; i < 5; i++){
		cin >> arr[a][i];
	}
	cout << endl;
}

for(a = 0; a < n ; a++){
	for(i = 0; i < 3; i++){
		/*Casting Ke-Integer*/
		Nilai =  atoi(arr[a][i+2].c_str());
		Total += Nilai;
	}
	NA = Total/3;
	
	//CASTING Float Ke String
	ostringstream convert;
	convert << NA;
	NAkhir = convert.str();
	
	//input Nilai Akhir ke array
	arr[a][5] = NAkhir;
	Total = 0;
}

cout << "				Data Nilai Algoritma				";
cout << endl << "-------------------------------------------------------";
cout << endl << "No |   NIM   |  Nama  \t|  N1  \t|  N2  \t|  N3  \t|  Nilai Akhir" << endl;
for(a = 0; a < n; a++){
	cout << a+1 << "   ";
	for(i = 0; i < 6; i++){
		cout << arr[a][i] << "\t|";
	}
	cout << endl;
}

}

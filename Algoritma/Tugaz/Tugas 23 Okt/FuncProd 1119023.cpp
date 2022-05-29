#include <iostream>
using namespace std;

void cinta_bu_inge(string &q, string &w, float &e, float &r, float &t){
	cout << "Masukkan Data (NIM, NAMA, N1, N2, N3)" << endl;
	cin >> q >> w >> e >> r >> t;
}

float apa_aja_ya_bu(float e, float r, float t){
	float udin = (0.25 * e + 0.35 * r + 0.4 * t);
	return udin;
}

int main (){

int nmax = 10, i, a;

string nim[nmax], nama[nmax];
float n1[nmax], n2[nmax], n3[nmax], NA[nmax];
 
int n;

cout << "Masukkan Jumlah Siswa : ";
cin >> n;

for(a = 0; a < n;  a++){
	cinta_bu_inge(nim[a], nama[a], n1[a], n2[a], n3[a]);
}

for(a = 0; a < n ; a++){
	NA[a] = apa_aja_ya_bu(n1[a], n2[a], n3[a]);
}

cout << "				Data Nilai Algoritma				";
cout << endl << "-------------------------------------------------------";
cout << endl << "No |NIM\t\t|Nama\t\t|N1\t\t|N2\t\t|N3\t\t|Nilai Akhir" << endl;
for(i = 0; i < n; i++){
	cout << i+1 << "  |"<< nim[i] << "\t|" << nama[i] << "\t\t|" << n1[i] << "\t\t|" << n2[i] << "\t\t|" << n3[i] << "\t\t|" << NA[i] << endl;
}

}

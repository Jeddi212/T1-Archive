#include <iostream>
using namespace std;

void cinta_bu_inge(string &q, string &w, float &e, float &r, float &t){
	cout << "Masukkan Data (NIM, NAMA(tanpa spasi), N1, N2, N3)" << endl;
	cin >> q >> w >> e >> r >> t;
}

float apa_aja_ya_bu(float e, float r, float t){
	float udin = (0.25 * e + 0.35 * r + 0.4 * t);
	return udin;
}

int main (){

int nmax = 10, i, a;
float terbesar, terkecil;
 
int n;

struct arr {
	string nim, nama;
	float n1, n2, n3;
	float NA;
};

cout << "Masukkan Jumlah Siswa : ";
cin >> n;

arr alay[n];

for(a = 0; a < n;  a++){
	cinta_bu_inge(alay[a].nim, alay[a].nama, alay[a].n1, alay[a].n2, alay[a].n3);
}

for(a = 0; a < n ; a++){
	alay[a].NA = apa_aja_ya_bu(alay[a].n1, alay[a].n2, alay[a].n3);
}

cout << "\t\t\tData Nilai Algoritma\t\t\t";
cout << endl << "--------------------------------------------------------------------------------------------";
cout << endl << "No |NIM\t\t|Nama\t\t|N1\t\t|N2\t\t|N3\t\t|Nilai Akhir" << endl;
for(i = 0; i < n; i++){
	cout << i+1 << "  |"<< alay[i].nim << "\t|" << alay[i].nama << "\t\t|" << alay[i].n1 << "\t\t|" << alay[i].n2 << "\t\t|" << alay[i].n3 << "\t\t|" << alay[i].NA << endl;
}

cout << endl << endl;

for(a = 0; a < n; a++){
	if(alay[a].NA > alay[a+1].NA){
		terbesar = alay[a].NA;
	}
	if(alay[a].NA < alay[a+1].NA){
		terkecil = alay[a].NA;
	}
}

cout << "Nilai Akhir Terbesar : " << terbesar << endl;
cout << "Nilai Akhir Terkecil : " << terkecil << endl;

}

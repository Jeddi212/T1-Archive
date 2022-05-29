#include <iostream>
using namespace std;

struct harga{
	int xs; //1000
	int s; //2000
	int m; //3000
	int l; //4000
	int xl; //5000
};

struct penjualan{
	string Nama;
	harga Ukuran;
	float Total;
};

const int nmax = 10;
penjualan tabel[nmax];

void bacaData(string &nama, int &u1, int &u2, int &u3, int &u4, int &u5){
	cout << "Masukkan Data (Nama, Jumlah Ukuran -> [XS, S, M, L, XL])" << endl;
	cin >> nama >> u1 >> u2 >> u3 >> u4 >> u5;
}

double TOTAL(int u1, int u2, int u3, int u4, int u5){
	return (1000*u1)+(2000*u2)+(3000*u3)+(4000*u4)+(5000*u5);
}

int main(){
	int n, i;
	
	cout << "Masukkan Jumlah Pembeli (Max : 10) : ";
	cin >> n;
	
	for(i = 0; i < n; i++){
		bacaData(tabel[i].Nama, tabel[i].Ukuran.xs, tabel[i].Ukuran.s, tabel[i].Ukuran.m, tabel[i].Ukuran.l, tabel[i].Ukuran.xl);
	}
	
	for(i = 0; i < n; i++){
		tabel[i].Total = TOTAL(tabel[i].Ukuran.xs, tabel[i].Ukuran.s, tabel[i].Ukuran.m, tabel[i].Ukuran.l, tabel[i].Ukuran.xl);
	}
	
	cout << "\t\t\t\t\tData Penjualan Jaket\t\t\t\t\t";
	cout << endl << "------------------------------------------------------------------------------------------------------------------------";
	cout << endl << "No |Nama\t\t|XS\t\t|S\t\t|M\t\t|L\t\t|XL\t\t|Total Bayar\t\t";
	cout << endl << "------------------------------------------------------------------------------------------------------------------------" << endl;
	
	for(i = 0; i < n; i++){
		cout << i+1 << "  |"<< tabel[i].Nama << "\t\t|" << tabel[i].Ukuran.xs << "\t\t|" << tabel[i].Ukuran.s << "\t\t|" << tabel[i].Ukuran.m << "\t\t|" << tabel[i].Ukuran.l << "\t\t|" << tabel[i].Ukuran.xl << "\t\t|" << tabel[i].Total << endl;
	}
}

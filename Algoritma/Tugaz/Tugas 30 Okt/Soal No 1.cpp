#include <iostream>
using namespace std;

const int JMhs = 10;

struct SMhs{
	string NIM, NAMA;
	int ANGKATAN, JSKS, JPRAK;
	int BIAYA[3]; //biaya total sks, biaya total praktikum, bayar
};

SMhs Mhs[JMhs];

int total[3];

void BacaData(string &a, string &b, int &c, int &d, int &e){
	cout << "Masukkan : NIM, NAMA, ANGKATAN, JSKS, JPRAK" << endl;
	cin >> a >> b >> c >> d >> e;
}

int BSKS(int a, int j){
	if (a <= 2011){
		return(180000 * j);
	} else if (a <= 2014){
		return(250000 * j);
	} else {
		return(300000 * j);
	}
}

int BPRAK(int n, int m){
	if (n <= 2011){
		return(200000 * m);
	} else if (n <= 2014){
		return(225000 * m);
	} else {
		return(250000 * m);
	}
}

int B(int j, int k){
	return (j + k);
}

void tabel(string &a, string &b, int &c, int &d, int &e, int &index){
	cout << "No\t NIM\t\t Nama\t\t Biaya Total SKS\t\t Biaya Total Praktikum\t\t Bayar\t\t" << endl;
	cout <<  index+1 << "\t" << a << "\t\t" << b << "\t\t\t" << c << "\t\t\t\t" << d << "\t\t\t" << e << "\t\t\t" << endl << endl;
}

int main(){
	
	int i, n, j;
	
	cout << "Masukkan Jumlah Mahasiswa : ";
	cin >> n;
	
	//bacadata
	for(i = 0; i < n; i++){
		BacaData(Mhs[i].NIM, Mhs[i].NAMA, Mhs[i].ANGKATAN, Mhs[i].JSKS, Mhs[i].JPRAK);
	}
	
	//biayaSKS
	for(i = 0; i < n; i++){
		Mhs[i].BIAYA[0] = BSKS(Mhs[i].ANGKATAN, Mhs[i].JSKS);
	}
	
	//biayaPRAK
	for(i = 0; i < n; i++){
		Mhs[i].BIAYA[1] = BPRAK(Mhs[i].ANGKATAN, Mhs[i].JPRAK);
	}
	
	//Bayar
	for(i = 0; i < n; i++){
		Mhs[i].BIAYA[2] = B(Mhs[i].BIAYA[0], Mhs[i].BIAYA[1]);
	}
	
	//tabel
	for(i = 0; i < n; i++){
		tabel(Mhs[i].NIM, Mhs[i].NAMA, Mhs[i].BIAYA[0], Mhs[i].BIAYA[1], Mhs[i].BIAYA[2], i);
	}
	
	int counter = 0;
	
	//total bawah
	for(i = 0; i <= n; i++){
		for(j = 0; j < n; j++){
			total[i] += Mhs[j].BIAYA[counter];
		}
		counter++;
	}
	
	cout << endl << "\t\t\t\t\t\t" << total[0] << "\t\t\t\t" << total[1] << "\t\t\t\t" << total[2];
}

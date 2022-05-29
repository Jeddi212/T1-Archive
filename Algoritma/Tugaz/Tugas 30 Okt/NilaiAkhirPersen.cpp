#include <iostream>
using namespace std;

struct persen{
	float p1, p2, p3, p4, p5;
};

persen P;

struct dataMahasiswa{
	string NIM, Nama;
	float Nilai[5];
};

const int nmax = 10;
dataMahasiswa data[nmax];

void bacaPersen(float &a,float &i, float &u, float &e, float &o){
	cout << "Masukkan input Persentasi (5 nilai dalam desimal dari [0 sampai 1])" << endl;
	cin >> a >> i >> u >> e >> o;
}

void bacaData(string &nim, string &nama, float &n1, float &n2, float &n3, float &n4, float &n5){
	cout << "Masukkan input NIM, NAMA, dan 5 nilai" << endl;
	cin >> nim >> nama >> n1 >> n2 >> n3 >> n4 >> n5;
}

float NAkhir(float N1,float N2,float N3,float N4,float N5,float PP1,float PP2,float PP3,float PP4,float PP5){
	return(N1*PP1)+(N2*PP2)+(N3*PP3)+(N4*PP4)+(N5*PP5);
}

int main(){
	int n, i;
	
	//BACADATA
	bacaPersen(P.p1, P.p2, P.p3, P.p4, P.p5);
	
	cout << "Masukkan Jumlah Mahasiswa (Max = 10)" << endl;
	cin >> n;
	
	for(i = 0; i < n; i++){
		bacaData(data[i].NIM, data[i].Nama, data[i].Nilai[0], data[i].Nilai[1], data[i].Nilai[2], data[i].Nilai[3], data[i].Nilai[4]);
	}
	
	for(i = 0; i < n; i++){
		data[i].Nilai[5] = NAkhir(data[i].Nilai[0], data[i].Nilai[1], data[i].Nilai[2], data[i].Nilai[3], data[i].Nilai[4], P.p1, P.p2, P.p3, P.p4, P.p5);
	}
	
	cout << "\t\t\t\t\tData Nilai Akhir Mahasiswa\t\tt\t\t";
	cout << endl << "------------------------------------------------------------------------------------------------------------------------";
	cout << endl << "No |NIM\t\t|Nama\t\t|N1\t\t|N2\t\t|N3\t\t|N4\t\t|N5\t\t|Nilai Akhir" << endl;
	cout << endl << "------------------------------------------------------------------------------------------------------------------------" << endl;
	
	for(i = 0; i < n; i++){
		cout << i+1 << "  |"<< data[i].NIM << "\t|" << data[i].Nama << "\t\t|" << data[i].Nilai[0] << "\t\t|" << data[i].Nilai[1] << "\t\t|" << data[i].Nilai[2] << "\t\t|" << data[i].Nilai[3] << "\t\t|" << data[i].Nilai[4] << "\t\t|" << data[i].Nilai[5] << endl;
	}

}

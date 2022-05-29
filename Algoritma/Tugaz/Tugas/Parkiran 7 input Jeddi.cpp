#include <iostream>
using namespace std;

int main() {
	int Jam_M, Jam_K, Menit_M, Menit_K, Detik_M, Detik_K, Jam_P;
	int B1 = 1500, B2 = 1000;
	int Max_B, Total_B;
	
	cout << "PENGHITUNGAN JAM PARKIR" << "\n";
	cout << "Gunakan Jam versi 24 JAM" << "\n";
	cout << "\n";
	cout << "Masukkan Jam Masuk : ";
	cin >> Jam_M;
	cout << "Masukkan Menit Masuk : ";
	cin >> Menit_M;
	cout << "Masukkan Detik Masuk : ";
	cin >> Detik_M;
	cout << "\n";
	cout << "Masukkan Jam Keluar : ";
	cin >> Jam_K;
	cout << "Masukkan Menit Keluar : ";
	cin >> Menit_K;
	cout << "Masukkan Detik Keluar : ";
	cin >> Detik_K;
	cout << "\n";
	cout << "Masukkan Biaya Maksimal : ";
	cin >> Max_B;

	
	if (Jam_M < Jam_K){
			Jam_P = Jam_K - Jam_M;
		} else if (Jam_M > Jam_K){
				Jam_P = 24 - (Jam_M - Jam_K);
			} else /*(Jam_M == Jam_K)*/{
					Jam_P = Jam_K - Jam_M;
				}
	
	if (((Menit_M > Menit_K) || ((Menit_M == Menit_K) && (Detik_M == Detik_K))) || ((Menit_M == Menit_K) && (Detik_M > Detik_K))){
			Jam_P = Jam_P;
		} else /*((Menit_Masuk < Menit_Keluar)) || ((Menit_Masuk = Menit_Keluar) && (Detik_Masuk < Detik_Keluar))*/{
				Jam_P = Jam_P + 1;
			}
	
	cout << "Jam Parkir : " << Jam_P << " Jam" << "\n";
	
	if (Jam_P <= 1){
			Total_B = B1;
		} else /*(Jam_P > 1)*/{
				Total_B = B1 + (Jam_P - 1) * B2;
			}
	
	if (Total_B > Max_B){
			Total_B = Max_B;
		}

	cout << "Total Biaya Parkir : " << Total_B;
	
	return 0;		
		
}

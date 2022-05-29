#include <iostream>
using namespace std;

int main(){
	
	float beras, porsi;
	float makanday, makanend;
	int jumlah1 /*weekday*/, jumlah2 /*weekend*/;
	int hari = 1, belilagi = 0;
	string kondisi = "AMAN";
	
	
	cout << "Masukkan Jumlah Persediaan Beras (Kilogram): ";
	cin >> beras;
	
	cout << "Masukkan Jumlah makan per orang (Kilogram) : ";
	cin >> porsi;
	
	cout << "Masukkan Jumlah Orang Saat Weekday : ";
	cin >> jumlah1;
	
	cout << "Masukkan Jumlah Orang Saat Weekend : ";
	cin >> jumlah2;
	
	makanday = jumlah1 * porsi;
	makanend = jumlah2 * porsi;
	
	
	do {
		if (hari <= 5 && beras >= makanday){
			beras -= makanday;
			belilagi++;
		} else if (hari > 5 && beras >= makanend){
			beras -= makanend;
			belilagi++;
		} else {
			kondisi = "KURANG";
		}
		
		hari++;
		
		if (hari == 8){
			hari = 1;
		}
	}
	
	while (kondisi == "AMAN");
		cout << "\nBeli beras lagi dalam " << (belilagi - 1) << " hari lagi.";
	
}

#include <iostream>
using namespace std;

int main () {
	long int Gaji; //penghasilan kotor
	long int THR; //penghasilan kotor
	string Status;
	int Anak;
	long int PTKP = 54000000; // penghasilan tidak kena pajak
	long int PKP; //penghasilan bersih
	long int Pajak;
	long int PTKP1;
	long int PTKPH;
	
	cout << "Masukkan Gaji Pokok : ";
	cin >> Gaji;
	cout << endl;
	cout << "Masukkan Tunjangan Hari Raya : ";
	cin >> THR;
	cout << endl;
	cout << "Status Menikah ? (Iya/Tidak) : ";
	cin >> Status;
	cout << endl;
	cout << "Masukkan Jumlah Anak : ";
	cin >> Anak;
	cout << endl;
	
	
	
if (Status == "Iya"){
	PTKPH = PTKP + 4500000;
	} else if (Status == "Tidak"){
		PTKPH = PTKP;
		}
		
if (Anak >= 1 && Anak < 4){
	PTKP1 = PTKPH + (4500000 * Anak);
	} else if (Anak > 3){
		PTKP1 = PTKPH + (4500000 * 3);
		} else{ // (Anak == 0)
			PTKP1 = PTKPH;
			}

cout << "PTKP : " << PTKP1 << endl;
cout << endl;
	
PKP = (Gaji*12) + (THR) - PTKP1;

cout << "PKP : " << PKP << endl;
cout << endl;

if (Gaji*12 + THR >= 500000000){
	Pajak = PKP * 0.5;
	} else if (Gaji*12 + THR >= 250000000){
		Pajak = PKP * 0.25;
		} else if (Gaji*12 + THR >= 50000000){
			Pajak = PKP * 0.15;
			} else{ //(Gaji*12 + THR >= 50000000)
				Pajak = PKP * 0.05;
				}
			
cout << "Pajak Penghasilan : " << Pajak;

if(Pajak <=0){
	cout << "\nAnda tidak dikenakan pajak";
}

}

#include <ctime>
#include <iostream>
using namespace std;

	int main() {
	
  	int tahun, tahunt;
  	int bulan, bulan2, bulant;
  	int hari, hari2, hari3, harit;
  	int total;
  	
	time_t now = time(0);
	tm *ltm = localtime(&now);

	cout <<"Tanggal Hari Ini\n";
	cout << "\n Tahun   : " << 1900 + ltm->tm_year<<endl;
	cout << " Bulan   : "<< 1 + ltm->tm_mon<< endl;
	cout << " Hari    : "<< ltm->tm_mday << endl;

	cout << "\nInput tahun : ";
	cin >> tahun;
	
	cout << "Input bulan : ";
	cin >> bulan;
	
	cout << "Input hari : ";
	cin >> hari;
	
	if (bulan <= ltm->tm_mon){
		tahunt = (1900 + ltm->tm_year) - tahun;
	} else {
		tahunt = (1901 + ltm->tm_year) - tahun;
	}
	
	
	if (bulan > ltm->tm_mon}{
		bulant = 12 - (bulan - ltm->tm_mon);
	} else {
		bulant = ltm->tm_mon - bulan;
	}
	
	if (hari > ltm->tm_mday){
		hari2 = 
	}
	hari2 = bulant * 
	hari3 = tahun2 * 365
}

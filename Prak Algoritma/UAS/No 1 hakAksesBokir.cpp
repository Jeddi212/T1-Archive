#include <iostream>
using namespace std;

int main(){
	const int NUM_MENU = 6;
	
	string listMenu[NUM_MENU] = { "Input Data Mahasiswa", "Input Data Dosen", "Data Mata Kuliah", "Daftar Hadir", "Input Nilai", "Rekapitulasi"};
	
	bool hakAksesMenuBokir[NUM_MENU]	 = {false, false, false, true, true, true};
	
	cout << "Menu Bokir: " << endl << endl;
	
	int j = 1;
	for(int i = 0; i < 6; i++){
		if(hakAksesMenuBokir[i] == true){
			cout << j << ". " << listMenu[i] << endl;
			j++;
		}
	}
}

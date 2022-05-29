#include <iostream>
using namespace std;

void tampilMenu(string LIST[], bool HAK[], int maxArr){
	int j = 1;
	for(int i = 0; i < maxArr; i++){
		if(HAK[i] == true){
			cout << j << ". " << LIST[i] << endl;
			j++;
		}
	}
}

int main(){
	const int NUM_MENU = 6;
	
	string listMenu[NUM_MENU] = { "Input Data Mahasiswa", "Input Data Dosen", "Data Mata Kuliah", "Daftar Hadir", "Input Nilai", "Rekapitulasi"};
	
	bool hakAksesMenuBokir[NUM_MENU]	 = {false, false, false, true, true, true};
	bool hakAksesMenuKincup[NUM_MENU]	 = {true, true, true, false, false, true};
	
	cout << "Menu Bokir: " << endl << endl;
	tampilMenu(listMenu, hakAksesMenuBokir, NUM_MENU);
	
	cout << endl;
	
	cout << "Menu Kincup: " << endl << endl;
	tampilMenu(listMenu, hakAksesMenuKincup, NUM_MENU);
	
}

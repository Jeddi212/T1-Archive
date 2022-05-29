#include <iostream>
using namespace std;

int main() {
	string satu, dua, keluar;
	bool hasil;
	int a, b, counter;
	
	cout << "Masukkan Kata Pertama : ";
	cin >> satu;
	cout << "Masukkan Kata Kedua : ";
	cin >> dua;
	
	if(satu.length() == dua.length()){
		for(a = 0; a < satu.length(); a++){
			hasil = false;
			b = 0;
			counter = 0;
			while(hasil == false && b < dua.length()){
				if (satu[a] == dua[b]){
					dua[b] = '+';
					counter += 1;
					hasil = true;
				} else {
					hasil = false;
				}
				if(b == dua.length()-1 && counter == 0){
					keluar = "BUKAN ANAGRAM";
				}
				b += 1;
			}
		}
		
		if(!hasil || keluar == "BUKAN ANAGRAM"){
			cout << "Bukan Anagram Karena Ada Karakter yang Berbeda";
		} else {
			cout << "Anagram Mantap";
		}
	} else {
		cout << "Bukan Anagram Karena Panjang Kata Berbeda";
	}
}
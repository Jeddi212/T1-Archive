#include <iostream>
using namespace std;

struct RAkun {
	string email, nama;
};
	
int main(){
	
	int banyakAkun = 3;
	int i;
	string EMAIL;
	
	RAkun listAkun[banyakAkun] = {
		{"bokirb@ithb.ac.id", "Bokir Bieber"},
		{"kincup@ithb.ac.id", "Kincup Kardhasian"},
		{"uucup@ithb.ac.id", "Ucup Uchiha"}
	};
	
	cout << "Masukkan Email Anda : ";
	cin >> EMAIL;
	
	int indexPosisiAkun = -1;
	
	for(i = 0; i < banyakAkun; i++){
		if(EMAIL == listAkun[i].email){
			indexPosisiAkun = i;
			break;
		}
	}
	
	if(indexPosisiAkun > -1){
		cout << "Akun tersedia atas nama : ";
		cout << listAkun[indexPosisiAkun].nama;
	} else {
		cout << "Akun tidak tersedia";
	}
}

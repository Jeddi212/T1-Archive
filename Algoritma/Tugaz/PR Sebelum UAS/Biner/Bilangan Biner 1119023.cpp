#include <iostream>
#include <string>
using namespace std;

void opener(int& input){
	cout << "MASUKKAN ANGKA SESUAI PILIHAN !" << endl << endl;
	cout << "1.  Desimal \t -> Biner" << endl;
	cout << "2.  Biner \t -> Desimal" << endl << endl;
	
	cout << "3.  Desimal \t -> Hexadesimal" << endl;
	cout << "4.  Heksadesimal -> Desimal" << endl << endl;
	
	cout << "5.  Desimal \t -> Oktal" << endl;
	cout << "6.  Oktal \t -> Desimal" << endl << endl;
	
	cout << "7.  Biner \t -> Hexadesimal" << endl;
	cout << "8.  Heksadesimal -> Biner" << endl << endl;
	
	cout << "9.  Biner \t -> Oktal" << endl;
	cout << "10. Oktal \t -> Biner" << endl << endl;
	
	cout << "11. Heksadesimal -> Oktal" << endl;
	cout << "12. Oktal \t -> Heksadesimal" << endl << endl;
	
	cout << endl;
	cout << "Anda memilih nomor : ";
	cin >> input;
}

//PANGKAT FUCNTION
int pangkat(int z, int p){
	int result = 1;
	for(int a = 0; a < p; a++){
		result *= z;
	}
	return result;
}

//REVERSE FUNCTION
string reverse(string bin){
	int n = (bin.length()) - 1;
	string temp = "";
	
	for(int i = n; i >= 0; i--){
		temp += bin[i];
	}
	return temp;
}

//DESIMAL TO BINER
void DtoBinary(int& decimal){
	cout << "Masukkan angka : ";
	cin >> decimal;
}

string funcD_BINER(int d){
	string bin;
	while(d > 1){
		if(d % 2 != 0){
			bin += "1";
		} else {
			bin += "0";
		}
		d /= 2;
	}
	bin += "1";
	
	return bin;
}

//BINER TO DESIMAL
void BtoDesimal(string& bin){
	cout << "Masukkan Biner : ";
	cin >> bin;
}

int funcB_DESIMAL(string bin, int p){
	int des = 0;
	int pan = p-1;
	for(int i = 0; i <= pan; i++){
		if(bin[i] == '1'){
			des += pangkat(2, i);
		}
	}
	return des;
}

//DESIMAL TO HEXADESIMAL
void DtoHexa(int& decimal){
	cout << "Masukkan Angka : ";
	cin >> decimal;
}

string funcD_HEXA(int d){
	string hex = "";
	if(d == 0){
		hex += "0";
	}
	
	while(d > 0){
		if(d % 16 == 0){
			hex += "0";
		} else if (d % 16 == 1) {
			hex += "1";
		} else if (d % 16 == 2) {
			hex += "2";
		} else if (d % 16 == 3) {
			hex += "3";
		} else if (d % 16 == 4) {
			hex += "4";
		} else if (d % 16 == 5) {
			hex += "5";
		} else if (d % 16 == 6) {
			hex += "6";
		} else if (d % 16 == 7) {
			hex += "7";
		} else if (d % 16 == 8) {
			hex += "8";
		} else if (d % 16 == 9) {
			hex += "9";
		} else if (d % 16 == 10) {
			hex += "A";
		} else if (d % 16 == 11) {
			hex += "B";
		} else if (d % 16 == 12) {
			hex += "C";
		} else if (d % 16 == 13) {
			hex += "D";
		} else if (d % 16 == 14) {
			hex += "E";
		} else if (d % 16 == 15) {
			hex += "F";
		}
		d /= 16;
	}
	
	return hex;
}

//HEXADESIMALTO DESIMAL
void HtoDesimal(string& hex){
	cout << "Masukkan Hexadesimal : ";
	cin >> hex;
}

int funcH_DESIMAL(string bin, int p){
	int des = 0;
	int pan = p-1;
	for(int i = 0; i <= pan; i++){
		/*
		char hexChar = bin[i];
		switch(hexChar){
			case '0':
				des += 0 * pangkat(16, i);
				break;
			case '1':
				des += 1 * pangkat(16, i);
				break;
			case '2':
				des += 2 * pangkat(16, i);
				break;
			case '3':
				des += 3 * pangkat(16, i);
				break;
			case '4':
				des += 4 * pangkat(16, i);
				break;
			case '5':
				des += 5 * pangkat(16, i);
				break;
			case '6':
				des += 6 * pangkat(16, i);
				break;
			case '7':
				des += 7 * pangkat(16, i);
				break;
			case '8':
				des += 8 * pangkat(16, i);
				break;
			case '9':
				des += 9 * pangkat(16, i);
				break;
			case 'A':
				des += 10 * pangkat(16, i);
				break;
			case 'a':
				des += 10 * pangkat(16, i);
				break;
			case 'B':
				des += 11 * pangkat(16, i);
				break;
			case 'b':
				des += 11 * pangkat(16, i);
				break;
			case 'C':
				des += 12 * pangkat(16, i);
				break;
			case 'c':
				des += 12 * pangkat(16, i);
				break;
			case 'D':
				des += 13 * pangkat(16, i);
				break;
			case 'd':
				des += 13 * pangkat(16, i);
				break;
			case 'E':
				des += 14 * pangkat(16, i);
				break;
			case 'e':
				des += 14 * pangkat(16, i);
				break;
			case 'F':
				des += 15 * pangkat(16, i);
				break;
			case 'f':
				des += 15 * pangkat(16, i);
				break;
		}
		*/
		
		if(bin[i] == '0'){
			des += 0 * pangkat(16, i);
		} else if (bin[i] == '1'){
			des += 1 * pangkat(16,i);
		} else if (bin[i] == '2'){
			des += 2 * pangkat(16,i);
		} else if (bin[i] == '3'){
			des += 3 * pangkat(16,i);
		} else if (bin[i] == '4'){
			des += 4 * pangkat(16,i);
		} else if (bin[i] == '5'){
			des += 5 * pangkat(16,i);
		} else if (bin[i] == '6'){
			des += 6 * pangkat(16,i);
		} else if (bin[i] == '7'){
			des += 7 * pangkat(16,i);
		} else if (bin[i] == '8'){
			des += 8 * pangkat(16,i);
		} else if (bin[i] == '9'){
			des += 9 * pangkat(16,i);
		} else if (bin[i] == 'A' || bin[i] == 'a'){
			des += 10 * pangkat(16,i);
		} else if (bin[i] == 'B' || bin[i] == 'b'){
			des += 11 * pangkat(16,i);
		} else if (bin[i] == 'C' || bin[i] == 'c'){
			des += 12 * pangkat(16,i);
		} else if (bin[i] == 'D' || bin[i] == 'd'){
			des += 13 * pangkat(16,i);
		} else if (bin[i] == 'E' || bin[i] == 'e'){
			des += 14 * pangkat(16,i);
		} else if (bin[i] == 'F' || bin[i] == 'f'){
			des += 15 * pangkat(16,i);
		}
	}
	return des;
}

//DESIMAL TO OKTAL
void DtoOktal(int& decimal){
	cout << "Masukkan Angka : ";
	cin >> decimal;
}

void prodD_OKTAL(int bil, int x[], int& i){
	int m;
	while(bil > 0){
		m = bil % 8;
		bil = bil / 8;
		x[i] = m;
		i++;
	}
}

//OKTAL TO DESIMAL
void OtoDesimal(int& okt){
	cout << "Masukkan Oktalnya : ";
	cin >> okt;
}

int funcO_DESIMAL(int octal){
	int des = 0;
	int i = 0;
	int angka;
	while(octal != 0){
		angka = octal % 10;
		octal /= 10;
		des += angka * pangkat(8, i);
		++i;
	}
	return des;
	
}

/* MAIN --  MAIN -- MAIN -- MAIN -- MAIN -- MAIN */
int main(){
	int opsi;
	int desimal;
	string biner;
	string hexadesimal;
	int oktal;
	
	opener(opsi);
	
	if(opsi == 1){
		DtoBinary(desimal);
		biner = funcD_BINER(desimal);
		biner = reverse(biner);
		cout << "\nBinernya : " << biner;
	} else if(opsi == 2){
		BtoDesimal(biner);
		biner = reverse(biner);
		int n = biner.length();
		desimal = funcB_DESIMAL(biner, n);
		cout << "\nDesimalnya : " << desimal;
	} else if(opsi == 3){
		DtoHexa(desimal);
		hexadesimal = funcD_HEXA(desimal);
		hexadesimal = reverse(hexadesimal);
		cout << "\nHexadesimalnya : " << hexadesimal;
	} else if(opsi == 4){
		HtoDesimal(hexadesimal);
		hexadesimal = reverse(hexadesimal);
		int n = hexadesimal.length();
		desimal = funcH_DESIMAL(hexadesimal, n);
		cout << "\nDesimalnya : " << desimal;
	} else if(opsi == 5){
		DtoOktal(desimal);
		int arrOKT[10];
		int index = 0;
		prodD_OKTAL(desimal, arrOKT, index);
		cout << "Oktalnya : ";
		
		for(int a = index-1; a >= 0; a--){
			cout << arrOKT[a];
		}
	} else if(opsi == 6){
		OtoDesimal(oktal);
		desimal = funcO_DESIMAL(oktal);
		cout << "\nDesimalnya : " << desimal;
	} else if(opsi == 7){
		BtoDesimal(biner);
		biner = reverse(biner);
		int n = biner.length();
		desimal = funcB_DESIMAL(biner, n);
		
		hexadesimal = funcD_HEXA(desimal);
		hexadesimal = reverse(hexadesimal);
		cout << "\nHexadesimalnya : " << hexadesimal;
	} else if(opsi == 8){
		HtoDesimal(hexadesimal);
		hexadesimal = reverse(hexadesimal);
		int n = hexadesimal.length();
		desimal = funcH_DESIMAL(hexadesimal, n);
		
		biner = funcD_BINER(desimal);
		biner = reverse(biner);
		cout << "\nBinernya : " << biner;
	} else if(opsi == 9){
		BtoDesimal(biner);
		biner = reverse(biner);
		int n = biner.length();
		desimal = funcB_DESIMAL(biner, n);
		
		int arrOKT[10];
		int index = 0;
		prodD_OKTAL(desimal, arrOKT, index);
		cout << "Oktalnya : ";
		
		for(int a = index-1; a >= 0; a--){
			cout << arrOKT[a];
		}
	} else if(opsi == 10){
		OtoDesimal(oktal);
		desimal = funcO_DESIMAL(oktal);
		
		biner = funcD_BINER(desimal);
		biner = reverse(biner);
		cout << "\nBinernya : " << biner;
	} else if(opsi == 11){
		HtoDesimal(hexadesimal);
		hexadesimal = reverse(hexadesimal);
		int n = hexadesimal.length();
		desimal = funcH_DESIMAL(hexadesimal, n);
		
		int arrOKT[10];
		int index = 0;
		prodD_OKTAL(desimal, arrOKT, index);
		cout << "Oktalnya : ";
		
		for(int a = index-1; a >= 0; a--){
			cout << arrOKT[a];
		}
	} else if(opsi == 12){
		OtoDesimal(oktal);
		desimal = funcO_DESIMAL(oktal);
		
		hexadesimal = funcD_HEXA(desimal);
		hexadesimal = reverse(hexadesimal);
		cout << "\nHexadesimalnya : " << hexadesimal;
	}
	
}

#include <iostream>
using namespace std;

/*
	Masih Bingung Pisan Sih Bu 
*/

const int maxN = 10;

//MERGE SORT
void sorting(int *array, int low, int mid, int high){
	int a = low;
	int a2 = mid + 1;
	int c[maxN];
	int i = low;
	
	while(a <= mid && a2 <= high){
		
		if(array[a] < array[a2]){
			c[i] = array[a];
			i++;
			a++;
		} else {
			c[i] = array[a2];
			i++;
			a2++;
		}
		
	}
	
	//untuk sisa array a kalau masih ada
	while(a <= mid){
		c[i] = array[a];
		i++;
		a++;
	}
	
	//untuk sisa array a2 kalau masih ada
	while(a2 <= high){
		c[i] = array[a2];
		i++;
		a2++;
	}
	
	for(a = low; a < i; a++){
		array[a] = c[a];
	}
}

//PECAH ARRAY
void mergeSort(int *ARR, int bawah, int atas){
	int tengah;
	if(bawah < atas){
		tengah = (bawah + atas) / 2;
		
		mergeSort(ARR, bawah, tengah);
		mergeSort(ARR, tengah+1, atas);

		//Nyatuin
		sorting(ARR, bawah, tengah, atas);
	}
}

//INPUT ARRAY
void input_Arr(int *x, int jumlah){
	for(int i = 0; i < jumlah; i++){
		cout << "Masukkan data ke-" << i+1 << " : ";
		cin >> x[i];
	}
}

//PRINT ARRAY
void output_Arr(int *x, int jumlah){
	for(int i = 0; i < jumlah; i++){
		cout << x[i] << " ";
	}
}

int main(){
	
	int arr_NUM[maxN];
	int n;
	
	cout << "MASUKKAN JUMLAH DATA (Max = 10): ";
	cin >> n;
	
	//INPUT ARRAY
	input_Arr(arr_NUM, n);
	
	//PROSES SORTING
	mergeSort(arr_NUM, 0, n-1);
	
	//PRINT ARRAY
	cout << "\nHasilnya : ";
	output_Arr(arr_NUM, n);
}

#include <iostream>
using namespace std;

const int maxN = 10;

//!INPUT
void inputArray(int *ARR, int n){
    
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan Nilai Array Ke-" << i+1 << " : ";
        cin >> ARR[i];
    }

}

//!OUTPUT
void outputArray(int *ARR, int n){
    
    for (int i = 0; i < n; i++)
    {
        cout << ARR[i] << " ";
    }

}

//!URUT & GABUNG ARRAY
void Sorting(int *array, int low, int mid, int high){

    int x = low;
    int y = mid+1;
    int temp[maxN];
    int i = low;

    while (x <= mid && y <= high)
    {
        if (array[x] < array[y])
        {
            temp[i] = array[x];
            i++;
            x++;
        }
        else
        {
            temp[i] = array[y];
            i++;
            y++;
        }

    }
    
    //!Untuk Sisa di array X
    while (x <= mid)
    {
        temp[i] = array[x];
        i++;
        x++;
    }
    
    //!Untuk Sisa di array Y
    while (y <= high)
    {
        temp[i] = array[y];
        i++;
        y++;
    }

    //!INI NGEBALIKIN ARRAY YG UDH KESUSUN
    for (int a = 0; a < i; a++)
    {
        array[a] = temp[a];
    }

}

//!PECAH ARRAY
void MergeSort(int *ARR, int bawah, int atas){
    
    int tengah;
    if (bawah < atas)
    {
        tengah = (bawah + atas) / 2;
        MergeSort(ARR, bawah, tengah);
        MergeSort(ARR, tengah+1, atas);

        //SUSUN + SATUIN
        Sorting(ARR, bawah, tengah, atas);
    }

}

int main() {

    int Array[maxN];
    int n;
    
    cout << "Masukkan Panjang Array : ";
    cin >> n;

    //INPUT
    inputArray(Array, n);

    //MERGESORT
    MergeSort(Array, 0, n-1);

    //PRINT
    cout << "Hasilnya : ";
    outputArray(Array, n);

    return 0;
}
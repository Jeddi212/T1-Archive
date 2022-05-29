#include <iostream>
using namespace std;

void INPUT(string &x, string&y){
    cout << "Masukkan kata pertama : ";
    cin >> x;

    cout << "Masukkan kata kedua : ";
    cin >> y;
}

int main(){
    string satu, dua, keluar;
    bool hasil;
    int a, b, counter;

    cout << endl;
    INPUT(satu, dua);
    cout << endl;

    if (satu.length() == dua.length())
    {
        for (a = 0; a < satu.length(); a++)
        {
            hasil = false;
            b = 0;
            counter = 0;
            while (hasil == false && b < dua.length())
            {
                if (satu[a] == dua[b])
                {
                    dua[b] = '+';
                    counter += 1;
                    hasil = true;
                }
                else
                {
                    hasil = false;
                }
                
                if (b == dua.length()-1 && counter == 0)
                {
                    keluar = "BUKAN ANAGRAM";
                }
                
                b += 1;

            }

        }
        
        if (!hasil || keluar == "BUKAN ANAGRAM")
        {
            cout << "BUKAN ANAGRAM KARNA ADA KARAKTER YANG BEDA";
        }
        else
        {
            cout << "INI ANAGRAM !!!";
        }

    } else
    {
        cout << "Bukan anagram karena panjang kata berbeda";
    }

    return 0;
}

#include <iostream>
using namespace std;

void INPUT(string &x, string&y){
    cout << "Masukkan kata pertama : ";
    cin >> x;

    cout << "Masukkan kata kedua : ";
    cin >> y;
}

int main() {
    string satu, dua;
    bool hasil, bukan = false;
    int i, b, counter;

    cout << endl;
    INPUT(satu, dua);
    cout << endl;

    if (satu.length() == dua.length())
    {
        for (i = 0; i < satu.length(); i++)
        {
            hasil = false;
            b = 0;
            counter = 0;
            while (hasil == false && b < dua.length())
            {
                if (satu[i] == dua[b])
                {
                    hasil = true;
                    counter += 1;
                    dua[b] = '+';
                }
                else
                {
                    hasil = false;
                }

                if (b == dua.length()-1 && counter == 0)
                {
                    bukan = true;
                }

                b += 1;

            }

        }
        
        if (!hasil || bukan)
        {
            cout << "BUKAN ANAGRAM !!!";
        }
        else
        {
            cout << "ANAGRAM BOSQUE !!!";
        }

    }
    else
    {
        cout << "Bukan anagram karena panjang kata berbeda";
    }

    cout << endl;
    return 0;
}
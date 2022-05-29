#include <iostream>
using namespace std;

int main () {
   int p;
   int l;
   int t;
   int a;
   int b;
   
   cout << "Panjang Bingkai : ";
   cin >> p;
   cout << "\n";
   cout << "Lebar Bingkai : ";
   cin >> l;
   cout << "\n";
   cout << "Ketebalan Bingkai : ";
   cin >> t;
   
   for (a=1; a<=l; a++){
   		for (b=1; b<=p; b++){
   			if (a<=t || b<=t || a>l-t || b>p-t){
   				cout << "*";
			}
			else{	
				cout << " ";
			}
   		}
   		cout << "\n";
   }
   
}

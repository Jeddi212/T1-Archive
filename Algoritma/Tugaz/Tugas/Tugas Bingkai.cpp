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
   
	for (a=1; a<=t; a++){
		for (b=1; b<=p; b++){
		cout << "*";
   		}
   		cout << endl;
  	}
  	
   	for (a=1; a<=l-t*2; a++){
		for (b=1; b<=t; b++){
		cout << "*" ;
		}
   		for (b=1; b<=p-t*2; b++){
		cout << " " ;
   		}
   		for (b=1; b<=t; b++){
		cout << "*" ;
   		}
   		cout << endl;
   	}
   	
   	for (a=1; a<=t; a++){
		for (b=1; b<=p; b++){
		cout << "*";
		}
		cout << endl;
	}
	
}
	

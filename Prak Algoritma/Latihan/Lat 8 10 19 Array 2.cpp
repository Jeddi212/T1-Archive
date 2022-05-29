#include <iostream>
using namespace std;

int main(){
	
	int nim[5];
	int nim2[5] = {1,2,3,4,5};
	
	int p = sizeof(nim2)/sizeof(nim2[0]);
	cout << "Total n  :" << p << endl;
	
	for(int a = 0; a < p; a++){
		cout << "Indeks " << a << "_:" << nim2[a] << endl;
	}
}

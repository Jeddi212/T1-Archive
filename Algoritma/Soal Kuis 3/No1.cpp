#include<iostream>
using namespace std;

int F1(int p, int q){
	if(p>q){
		q = q*2;
	} else {
		p = p+q;
	}
	return p+q;
}

void P1(int&  x, int& y){
	int bil1,bil2;
	
	bil1 = x+y;
	bil2 = x+bil1;
	y = y-bil1;
}

int main(){
	int bil1,bil2,m,n;
	
	cin >> bil1 >> bil2 >> m >> n;
	
	for(int j=m; j>=n; j--){
		j--;
		if(bil1>bil2){
			bil1 = F1(bil1,bil2);
		} else {
			bil2 = F1(bil2,bil1);
		}
		P1(bil1,bil2);
		cout << " " << bil1 << " " << bil2;
	}
}

#include <iostream>
using namespace std;
// rekursif
int faktorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	} else {
		return n*faktorial(n-1);
	}
}

int main() {
	int n;
	cout << "Masukan angka: ";
	cin >> n;
	
	if(n < 0) {
		cout << "faktorial tidak di definisikan untuk angka negatif!" << endl;	
	} else {
		cout << "Faktorial dari " << n << " adalah: " << faktorial(n) << endl;
	}
}

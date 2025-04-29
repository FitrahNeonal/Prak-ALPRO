#include <iostream>
using namespace std;

int main() {
	int n;
	int hasil= 1;
	
	cout << "Masukan angka: ";
	cin >> n;
	
	if(n < 0) {
		cout << "Fakstorial tidak bisa pakai bil. negatif!" << endl;
	} else {
		for(int i = 1; i <= n; ++i) {
			hasil *= i;
		}
		cout << "Faktorial dari " << n << " adalah: " << hasil << endl;
	}
}

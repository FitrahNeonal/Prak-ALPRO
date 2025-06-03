#include <iostream>
using namespace std;

int main(){
//	int angka[5] = {10, 20, 30, 40, 50};
//	
//	for(int i=0; i<5; i++) 
//		cout << angka[i] << "\n";
//	cout << "total panjang array: " << sizeof(angka)/sizeof(*angka);


//	int atas, bawah;
//	int totalangka;
//	cout << "Masukan: ";	cin >> totalangka;
//	int angka[totalangka];
//	
//	for(int i = 0; i<sizeof(angka)/sizeof(*angka); i++) {
//		cout << "\nmasukan angka ke-" << i+1 <<" : ";	cin >> angka[i];
//	}
//	
//	cout << "\nAngka yang dimasukan: ";
//	for(int i = 0; i<sizeof(angka)/sizeof(*angka); i++) {
//		cout << angka[i] << ", ";
//	}
//	
//	cout << "\nPilih indeks bawah dan atas\n";
//	cout << "maasukan batas bawah: ";	cin >> bawah;
//	cout << "maasukan batas bawah: ";	cin >> atas;
//	
//	for(int i = bawah; i <= atas ; i++) {
//		cout << angka[i] << ", ";
//	}

	string huruf[5] = {"a", "b", "c", "d", "e"};
	
	for(int i = 0; i < 5; i++) {
		cout << huruf[i] << ", ";
	}
	
	cout << "\ncetak mundur\n";
	
	for(int i = 4; i >= 0; i--) {
		cout << huruf[i] << ", ";
	}
}

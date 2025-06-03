#include <iostream>
using namespace std;

int main(){
	int matkul, atas, bawah;
	
	cout << "Masukan jumlah mata kuliah: ";
	cin >> matkul;
	
	cout << "Masukan nama ke matkul:\n";
	string matakuliah[matkul];
	
	for(int i = 0; i< sizeof(matakuliah)/sizeof(*matakuliah); i++) {
		cout << "Masukan matkul ke-" << i+1 <<" : ";
		cin >> matakuliah[i];
	}
	
	cout << "\nCetak dari depan:\n";
	for(int i = 0; i < sizeof(matakuliah)/sizeof(*matakuliah); i++) {
		cout << matakuliah[i] << ", ";
	}
	cout << "\nCetak dari belakang:\n";
		for(int i = sizeof(matakuliah)/sizeof(*matakuliah) - 1; i >= 0; i--) {
		cout << matakuliah[i] << ", ";
	}
	
	cout << "\n\nPilih indeks bawah dan atas\n";
	cout << "maasukan batas bawah: ";	cin >> bawah;
	cout << "maasukan batas bawah: ";	cin >> atas;
	
	cout << "\nCetak dari " << bawah << " sampai " << atas << " : \n";
	for(int i = bawah; i <= atas ; i++) {
		cout << matakuliah[i] << ", ";
	}
}

#include <iostream>
using namespace std;

int main() {
	int matriks1[4][4];
	int matriks2[4][4];
	int hasilJumlah[4][4];
	int hasilKali[4][4];
	
	cout << "Masukan elemen-elemen matriks 1:\n";
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			cout << "Elemen [" << i << "][" <<j << "]: ";
			cin >> matriks1[i][j];
		}
	}
	cout << "Masukan elemen-elemen matriks 2:\n";
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			cout << "Elemen [" << i << "][" <<j << "]: ";
			cin >> matriks2[i][j];
		}
	}
	
	cout << "\nMariks 1 yang dimasukan:\n";
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			cout << matriks1[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\nMariks 2 yang dimasukan:\n";
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			cout << matriks2[i][j] << "\t";
		}
		cout << endl;
	}
	
	cout << "\nHasil tambah 2 matriks:\n";
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			cout << matriks1[i][j] + matriks2[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\nHasil kali 2 matriks:\n";
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			cout << matriks1[i][j] * matriks2[i][j] << "\t";
		}
		cout << endl;
	}
	
}

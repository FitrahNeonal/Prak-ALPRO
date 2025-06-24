#include <iostream>
using namespace std;

int main() {
	int baris1, kolom1, baris2, kolom2;
	int matriks1[baris1][kolom1];
	int matriks2[baris2][kolom2];
	int hasilJumlah[baris1][kolom1];
	int hasilKali[baris1][kolom1];
	
	cout << "Masukan elemen-elemen matriks 1:\n";
	for(int i = 0; i < baris1; i++) {
		for(int j = 0; j < kolom1; j++) {
			cout << "Elemen [" << i << "][" <<j << "]: ";
			cin >> matriks1[i][j];
		}
	}
	cout << "Masukan elemen-elemen matriks 2:\n";
	for(int i = 0; i < baris2; i++) {
		for(int j = 0; j < kolom2; j++) {
			cout << "Elemen [" << i << "][" <<j << "]: ";
			cin >> matriks2[i][j];
		}
	}
	
	cout << "\nMariks 1 yang dimasukan:\n";
	for(int i = 0; i < baris1; i++) {
		for(int j = 0; j < kolom1; j++) {
			cout << matriks1[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\nMariks 2 yang dimasukan:\n";
	for(int i = 0; i < baris2; i++) {
		for(int j = 0; j < kolom2; j++) {
			cout << matriks2[i][j] << "\t";
		}
		cout << endl;
	}
	
	cout << "\nHasil tambah 2 matriks:\n";
	for(int i = 0; i < baris1; i++) {
		for(int j = 0; j < kolom1; j++) {
			cout << matriks1[i][j] + matriks2[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\nHasil kali 2 matriks:\n";
	for(int i = 0; i < baris1; i++) {
		for(int j = 0; j < kolom1; j++) {
			cout << matriks1[i][j] * matriks2[i][j] << "\t";
		}
		cout << endl;
	}
	
	char edit;
	cout << "Edit matriks hasil perkalian: (y/n) ?";
	cin >> edit;
	if(edit == 'y' || edit == 'Y') {
		int editBaris, editKolom, hasil, baru;
		cout << "Masukan baris yang ingin diedit (indeks dari 0) : ";
		cin >> editBaris;
		cout << "Masukan kolom yang ingin diedit (indeks dari 0) : ";
		cin >> editKolom;
		
		cout << "masukan nilai baru untuk elemen: ";
		cin >> baru;
		
		matriks1[editBaris][editkolom]
		
		cout << "\nMatriks setelah diubah:\n";
		for(int i = 0; i < baris1; i++) {
			for(int j = 0; j < kolom1; j++) {
				cout << matriks1[i][j] * matriks2[i][j] << "\t";
			}
			cout << endl;
		}
	}
	
}

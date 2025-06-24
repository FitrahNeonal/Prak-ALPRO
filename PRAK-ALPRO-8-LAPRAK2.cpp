#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
 
class Matriks {
    friend ostream& operator<<(ostream&, Matriks&);
    friend istream& operator>>(istream&, Matriks&);
public:
    void baca_matriks();
    void matriks_jumlah(const Matriks&, const Matriks&);
    void perkalian_matriks(const Matriks&, const Matriks&);
    void cetak_matriks();
    void ubah();
private:
    int A[10][10];
    int baris, kolom;
};
 
void Matriks::baca_matriks() {
    int i, j;
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            cout << "Data [" << i << "," << j << "] : ";
            cin >> A[i][j];
        }
    }
}
 
void Matriks::matriks_jumlah(const Matriks& matriks1, const Matriks& matriks2) {
    int i, j;
    baris = matriks1.baris;
    kolom = matriks1.kolom;
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            A[i][j] = matriks1.A[i][j] + matriks2.A[i][j];
        }
    }
    cetak_matriks();
}
 
void Matriks::perkalian_matriks(const Matriks& matriks1, const Matriks& matriks2) {
    int i, j, k;
    int barkol;
    baris = matriks1.baris;
    kolom = matriks2.kolom;
    barkol = matriks1.kolom;
 
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            A[i][j] = 0;
            for (k = 0; k < barkol; k++) {
                A[i][j] += matriks1.A[i][k] * matriks2.A[k][j];
            }
        }
    }
    cetak_matriks();
}
 
void Matriks::cetak_matriks() {
    int i, j;
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            cout << setw(8) << A[i][j] << " ";
        }
        cout << endl;
    }
}
 
istream& operator>>(istream& in, Matriks& A) {
    cout << "Banyak baris : ";
    in >> A.baris;
    cout << "Banyak kolom : ";
    in >> A.kolom;
    cout << "\nMasukkan data matriks\n\n";
    A.baca_matriks();
    cout << "\nMatriks yang dibuat adalah :\n";
    A.cetak_matriks();
    return in;
}
 
ostream& operator<<(ostream& out, Matriks& A) {
    int i, j;
    for (i = 0; i < A.baris; i++) {
        for (j = 0; j < A.kolom; j++) {
            out << setw(8) << A.A[i][j] << " ";
        }
        out << endl;
    }
    return out;
}

void Matriks::ubah() {
	char edit;
	cout << "Edit matriks hasil perkalian: (y/n) ?";
	cin >> edit;
	if(edit == 'y' || edit == 'Y') {
		int editBaris, editKolom;
		cout << "Masukan baris yang ingin diedit (indeks dari 0) : ";
		cin >> editBaris;
		cout << "Masukan kolom yang ingin diedit (indeks dari 0) : ";
		cin >> editKolom;
		
		cout << "masukan nilai baru untuk elemen: ";
		cin >> A[editBaris][editKolom];
		
		cetak_matriks();
		}
}
 
int main() {
    Matriks matriks1, matriks2;
    Matriks jumlah;
 
    cout << "Memasukkan data matriks I\n";
    cin >> matriks1;
    cout << "\nMemasukkan data matriks II\n";
    cin >> matriks2;
 
    cout << "\nHasil Penjumlahan : \n";
    jumlah.matriks_jumlah(matriks1, matriks2);
 
    cout << "\nHasil Perkalian : \n";
    jumlah.perkalian_matriks(matriks1, matriks2);
 	
 	jumlah.ubah();
 	
    getch();
    return 0;
}

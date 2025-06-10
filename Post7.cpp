#include <iostream>
using namespace std;

int main() {
	int array[100];
	int indeks[100];
	int jumlah;
	
	cout << "Masukan jumlah elemen array: ";
	cin >> jumlah;
	
	for(int i = 0; i < jumlah; i++) {
		cout << "Data[" << i << "] : ";
		cin >> array[i];
	}
	
	cout << "\nArray awal : \n";
	cout << "Isi array : ";
	for(int i = 0; i < jumlah; i++) {
		cout << array[i] << " ";
	}
	
	
	cout << "\n\nMenambah +3 ke semua array...\n";
	cout << "Isi array : ";
	for(int i = 0; i < jumlah; i++) {
		array[i] = array[i] + 3;
		cout << array[i] << " ";
	}
	
	
	cout << "\n\nGeser ke kiri sekali...\n";
	cout << "Isi array : ";
	for(int i = 0; i < jumlah; i++) {
		indeks[i] = array[i+1];
		if(indeks[i] == 0){
			indeks[i] = array[0];
		}
		cout << indeks[i] << " ";
	}
	

	cout << "\n\nGeser ke kanan sekali...\n";
	cout << "Isi array : ";
	for(int i = 0; i < jumlah; i++) {
		indeks[i] = array[i];
		if(indeks[i] == 0){
			indeks[i] = array[0];
		}
		cout << indeks[i] << " ";
	}
	
	int temp;	
	cout << "\n\nMengurutkan aray secara naik...\n";
	cout << "Isi array : ";
	for (int i = 0; i < jumlah - 1; i++) {
		for (int j = 0; j < jumlah - i - 1; j++) {
			if (indeks[j] > indeks[j+1]) {
				temp = indeks[j];
				indeks[j] = indeks[j+1];
				indeks[j+1] = temp;
			}
		}
	}
	for(int i = 0; i < jumlah; i++) {
		cout << indeks[i] << " ";
	}
}

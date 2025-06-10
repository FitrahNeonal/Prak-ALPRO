#include <iostream>
using namespace std;

class sorting {
	friend istream& operator>>(istream& in, sorting& a);
	friend ostream& operator<<(ostream & out, sorting& a);
public:
	void selectionSort();
	int data[10], n;
	int pencarianBiner(int low, int high, int kunciPencarian);
private:
	void minimum(int, int, int&);
	void tukar(int&, int&);
};

istream& operator>>(istream& in, sorting& a){
	cout << "Masukan jumlah elemen: ";
	in >> a.n;
	for(int i = 0; i < a.n; i++) {
		cout << "Data ke-" << i+1 << ": ";
		in >> a.data[i];
	}
	return in;
}

ostream& operator<<(ostream& out, sorting& a){
	for (int i = 0; i < a.n; i++) {
		out << a.data[i] << " ";
	}
	out << endl;
	return out;
}

void sorting::minimum(int dari, int n, int &tempat) {
	int min = data[dari];
	tempat = dari;
	for(int i = dari + 1; i < n; i++) {
		if(data[i] < min) {
			min = data[i];
			tempat = i;
		}
	}
}

void sorting::tukar(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void sorting::selectionSort(){
	int t;
	for( int i = 0; i < n; i++) {
		minimum(i, n, t);
		tukar(data[i], data[t]);
	}
} 

int sorting::pencarianBiner(int low, int high, int kunciPencarian) {
	int middle;
	while (low <= high) {
		middle = (low + high) / 2;
		if(kunciPencarian == data[middle])
			return middle;
		else if(kunciPencarian < data[middle])
			high = middle - 1;
		else
			low = middle + 1;
	}
	return 0 ;
}

int main() {
	sorting s;
	cin >> s;
	
	cout << "\nData sebelum sorting:\n" << s;
	
	s.selectionSort();
	
	cout << "\nData setelah di sortir:\n" << s;
	
	int cari;
	cout << "\nMaskan angka yang ingin dicari: ";
	cin >> cari;
	
	int hasil = s.pencarianBiner(0, 3, cari);
	if(hasil != -1)
		cout << "Data ditemukan di indeks ke-" << hasil << endl;
	else
	cout << "\nData tidak ditemukan.";
	return 0;
}

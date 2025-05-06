#include <iostream>
using namespace std;

class perulangan {
	public:
		perulangan() {
			n = 4;
		}
		void ulang_rekursif(int);
	private:
		int n;
};

void perulangan::ulang_rekursif(int n){
	if( n == 0)
		return;
		cout << n << " ";
		ulang_rekursif(n-1);
}

int main() {
	perulangan X;
	cout << "Menggunakan cara rekursif: ";
	X.ulang_rekursif(4);
}

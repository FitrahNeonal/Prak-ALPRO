#include <iostream>
#include <string>
 
using namespace std;
 
double series(int i, int n) {
    if (i > n) {
        return 0.0;
    }
 
    double result;
 
    if (i == 1) {
        cout << "1";
        result = 1.0;
    } else {
        if (i % 2 == 0) {
            cout << "-1/" << i;
            result = -1.0 / i;
        } else {
            cout << "+1/" << i;
            result = 1.0 / i;
        }
    }
 
    return result + series(i + 1, n);
}
 
int main() {
    int n;
    double result = 0.0;
 
    cout << "Masukkan nilai n: ";
    cin >> n;
 
    if (n <= 0) {
         cout << "F(" << n << ") = " << endl;
    } else {
        cout << "F(" << n << ") = ";
        result = series(1, n);
        cout << endl;
    }
 
    cout << "Hasil: " << result << endl;
 
    return 0;
}

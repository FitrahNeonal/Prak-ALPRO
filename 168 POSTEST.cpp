#include <iostream>
#include <iomanip>
using namespace std;

void tampilkanMenu() {
    cout << "===== MENU KEDAI AYAM =====\n";
    cout << "1. Ayam Goreng Rp17.000\n";
    cout << "2. Ayam Bakar Rp21.000\n";
    cout << "3. Selesai dan Cetak Struk\n";
    cout << "===========================\n";
}

void hitungDanCetakStruk(int jumlah_goreng, int jumlah_bakar) {
    const int Harga_Ayam_Goreng = 17000;
    const int Harga_Ayam_Bakar = 21000;
    const double Batas_Diskon = 45000;
    const double Presentase_Diskon = 0.1;

    double total_harga = (jumlah_goreng * Harga_Ayam_Goreng) + (jumlah_bakar * Harga_Ayam_Bakar);
    double diskon = total_harga > Batas_Diskon ? total_harga * Presentase_Diskon : 0;
    double total_bayar = total_harga - diskon;

    cout << "\n=========== STRUK PEMBAYARAN ===========\n";
    cout << "Ayam Goreng\t: " << jumlah_goreng << " x Rp" << Harga_Ayam_Goreng 
         << " = Rp" << (jumlah_goreng * Harga_Ayam_Goreng) << endl;
    cout << "Ayam Bakar\t: " << jumlah_bakar << " x Rp" << Harga_Ayam_Bakar 
         << " = Rp" << (jumlah_bakar * Harga_Ayam_Bakar) << endl;
    cout << "Total Harga\t: Rp" << total_harga << endl;

    if (diskon > 0) {
        cout << "Diskon (10%)\t: -Rp" << fixed << setprecision(2) << diskon << endl;
    }

    cout << "Total Bayar\t: Rp" << fixed << setprecision(2) << total_bayar << endl;
    cout << "==========================================\n";
}

int main() {
    int jumlah_goreng = 0, jumlah_bakar = 0;
    char pilih;

    do {
        tampilkanMenu();
        cout << "Silahkan pilih menu anda (1/2/3): ";
        cin >> pilih;

        switch (pilih) {
            case '1':
                int temp_goreng;
                cout << "Masukkan jumlah Ayam Goreng: ";
                cin >> temp_goreng;
                jumlah_goreng += temp_goreng;
                break;
            case '2':
                int temp_bakar;
                cout << "Masukkan jumlah Ayam Bakar: ";
                cin >> temp_bakar;
                jumlah_bakar += temp_bakar;
                break;
            case '3':
                hitungDanCetakStruk(jumlah_goreng, jumlah_bakar);
                return 0;
            default:
                cout << "Pilihan tidak valid! Pilih lagi." << endl;
        }

        cout << "\nIngin memilih menu lain? (y/t): ";
        cin >> pilih;

    } while (pilih == 'y');
}

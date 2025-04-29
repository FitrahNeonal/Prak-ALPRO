#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <vector> // Tambahan untuk banyak KTP
 
using namespace std;
 
// Struktur untuk menyimpan data KTP
struct KTP {
    long long nik;
    string nama;
    string tempat_tgl_lahir;
    bool jenis_kelamin; // true = Laki-laki, false = Perempuan
    char gol_darah[3];
    string alamat;
    string rt_rw;
    string kel_desa;
    string kecamatan;
    int agama; // 1-6 sesuai pilihan
    string status_perkawinan;
    string pekerjaan;
    string kewarganegaraan;
    string berlaku_hingga;
};
 
void clearInputBuffer() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
 
void cetakBingkaiAtasBawah(int panjang) {
    for (int i = 0; i < panjang; i++) {
        cout << "=";
    }
    cout << endl;
}
 
string getAgamaName(int agama) {
    switch (agama) {
        case 1: return "Islam";
        case 2: return "Kristen";
        case 3: return "Katolik";
        case 4: return "Hindu";
        case 5: return "Budha";
        case 6: return "Konghucu";
        default: return "Tidak Diketahui";
    }
}
 
void inputKTP(KTP &ktp) {
    cout << "\nInput Data KTP\n";
    cout << "Masukkan NIK: ";
    cin >> ktp.nik;
    clearInputBuffer();
 
    cout << "Masukkan Nama: ";
    getline(cin, ktp.nama);
    cout << "Masukkan Tempat/Tgl Lahir: ";
    getline(cin, ktp.tempat_tgl_lahir);
 
    cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
    int jk;
    cin >> jk;
    ktp.jenis_kelamin = (jk == 1);
    clearInputBuffer();
 
    cout << "Masukkan Golongan Darah (A/B/AB/O): ";
    cin >> ktp.gol_darah;
    clearInputBuffer();
 
    cout << "Masukkan Alamat: ";
    getline(cin, ktp.alamat);
    cout << "Masukkan RT/RW: ";
    getline(cin, ktp.rt_rw);
    cout << "Masukkan Kelurahan/Desa: ";
    getline(cin, ktp.kel_desa);
    cout << "Masukkan Kecamatan: ";
    getline(cin, ktp.kecamatan);
 
    cout << "Pilih Agama:\n";
    cout << "1. Islam\n2. Kristen\n3. Katolik\n4. Hindu\n5. Budha\n6. Konghucu\n";
    cout << "Pilihan Anda: ";
    cin >> ktp.agama;
    clearInputBuffer();
 
    cout << "Masukkan Status Perkawinan: ";
    getline(cin, ktp.status_perkawinan);
    cout << "Masukkan Pekerjaan: ";
    getline(cin, ktp.pekerjaan);
    cout << "Masukkan Kewarganegaraan: ";
    getline(cin, ktp.kewarganegaraan);
    cout << "Masukkan Berlaku Hingga: ";
    getline(cin, ktp.berlaku_hingga);
}
 
void displayKTP(const KTP &ktp, int index = -1) {
    const int lebar = 60;
    cetakBingkaiAtasBawah(lebar);
 
    if (index != -1)
        cout << "Data KTP ke-" << index + 1 << endl;
 
    cout << setw((lebar + 18) / 2) << "KARTU TANDA PENDUDUK (KTP)" << endl;
    cetakBingkaiAtasBawah(lebar);
 
    cout << left << setw(20) << "NIK" << ": " << ktp.nik << endl;
    cout << left << setw(20) << "Nama" << ": " << ktp.nama << endl;
    cout << left << setw(20) << "Tempat/Tgl Lahir" << ": " << ktp.tempat_tgl_lahir << endl;
    cout << left << setw(20) << "Jenis Kelamin" << ": " 
         << (ktp.jenis_kelamin ? "Laki-laki" : "Perempuan")
         << "    Gol Darah: " << ktp.gol_darah << endl;
    cout << left << setw(20) << "Alamat" << ": " << ktp.alamat << endl;
    cout << left << setw(20) << "RT/RW" << ": " << ktp.rt_rw << endl;
    cout << left << setw(20) << "Kel/Desa" << ": " << ktp.kel_desa << endl;
    cout << left << setw(20) << "Kecamatan" << ": " << ktp.kecamatan << endl;
    cout << left << setw(20) << "Agama" << ": " << getAgamaName(ktp.agama) << endl;
    cout << left << setw(20) << "Status Perkawinan" << ": " << ktp.status_perkawinan << endl;
    cout << left << setw(20) << "Pekerjaan" << ": " << ktp.pekerjaan << endl;
    cout << left << setw(20) << "Kewarganegaraan" << ": " << ktp.kewarganegaraan << endl;
    cout << left << setw(20) << "Berlaku Hingga" << ": " << ktp.berlaku_hingga << endl;
 
    cetakBingkaiAtasBawah(lebar);
}
 
void editKTP(KTP &ktp) {
    int pilihan;
    do {
        cout << "\n== MENU EDIT DATA KTP ==\n";
        cout << "1. Nama\n2. Tempat/Tgl Lahir\n3. Jenis Kelamin\n4. Golongan Darah\n5. Alamat\n6. RT/RW\n";
        cout << "7. Kelurahan/Desa\n8. Kecamatan\n9. Agama\n10. Status Perkawinan\n11. Pekerjaan\n";
        cout << "12. Kewarganegaraan\n13. Berlaku Hingga\n0. Selesai Edit\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan;
        clearInputBuffer();
 
        switch (pilihan) {
            case 1: cout << "Nama baru: "; getline(cin, ktp.nama); break;
            case 2: cout << "Tempat/Tgl Lahir baru: "; getline(cin, ktp.tempat_tgl_lahir); break;
            case 3: {
                cout << "Pilih Jenis Kelamin baru (1 = Laki-laki, 2 = Perempuan): ";
                int jk;
                cin >> jk;
                ktp.jenis_kelamin = (jk == 1);
                clearInputBuffer();
                break;
            }
            case 4: cout << "Golongan Darah baru (A/B/AB/O): "; cin >> ktp.gol_darah; clearInputBuffer(); break;
            case 5: cout << "Alamat baru: "; getline(cin, ktp.alamat); break;
            case 6: cout << "RT/RW baru: "; getline(cin, ktp.rt_rw); break;
            case 7: cout << "Kelurahan/Desa baru: "; getline(cin, ktp.kel_desa); break;
            case 8: cout << "Kecamatan baru: "; getline(cin, ktp.kecamatan); break;
            case 9: {
                cout << "Pilih Agama baru:\n";
                cout << "1. Islam\n2. Kristen\n3. Katolik\n4. Hindu\n5. Budha\n6. Konghucu\n";
                cout << "Pilihan: ";
                cin >> ktp.agama;
                clearInputBuffer();
                break;
            }
            case 10: cout << "Status Perkawinan baru: "; getline(cin, ktp.status_perkawinan); break;
            case 11: cout << "Pekerjaan baru: "; getline(cin, ktp.pekerjaan); break;
            case 12: cout << "Kewarganegaraan baru: "; getline(cin, ktp.kewarganegaraan); break;
            case 13: cout << "Berlaku Hingga baru: "; getline(cin, ktp.berlaku_hingga); break;
            case 0: cout << "Selesai mengedit data.\n"; break;
            default: cout << "Pilihan tidak valid.\n"; break;
        }
    } while (pilihan != 0);
}
 
int main() {
    int jumlah;
    cout << "Berapa banyak KTP yang ingin dibuat? ";
    cin >> jumlah;
    clearInputBuffer();
 
    vector<KTP> dataKTP(jumlah);
 
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData ke-" << i + 1 << endl;
        inputKTP(dataKTP[i]);
    }
 
    cout << "\n=== Semua Data KTP ===\n";
    for (int i = 0; i < jumlah; i++) {
        displayKTP(dataKTP[i], i);
    }
 
    char edit;
    cout << "\nApakah Anda ingin mengedit data? (y/n): ";
    cin >> edit;
    clearInputBuffer();
 
    while (edit == 'y' || edit == 'Y') {
        int indeks;
        cout << "Masukkan nomor KTP yang ingin diedit (1 - " << jumlah << "): ";
        cin >> indeks;
        clearInputBuffer();
 
        if (indeks >= 1 && indeks <= jumlah) {
            editKTP(dataKTP[indeks - 1]);
            displayKTP(dataKTP[indeks - 1], indeks - 1);
        } else {
            cout << "Nomor tidak valid.\n";
        }
 
        cout << "\nApakah Anda ingin mengedit data lagi? (y/n): ";
        cin >> edit;
        clearInputBuffer();
    }
 
    cout << "\nTerima kasih.\n";
    return 0;
}

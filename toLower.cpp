#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void yaTidak(bool Y){
	if ( Y == 1) {
		cout << "Ya";
	} else {
		cout << "Tidak";
	}
}

int main() {
    string teks = "C168 Fitrah Neonal";

    // Ubah ke huruf kecil
    string teksKecil = teks;
    for (int i = 0; i < teks.length(); i++) {
        teksKecil[i] = tolower(teks[i]);
    }
    
    string teksBesar = teks;
    for (int i = 0; i < teks.length(); i++){
    	teksBesar[i] = toupper(teks[i]);
	}

    cout << "Teks asli   : " << teks << endl << endl;
    cout << "tolower : " << teksKecil << endl;
    cout << "toupper : " << teksBesar << endl;

	cout << "\n==============================================\n\n";
	
	char x = 'A';
    cout << "Karakter [" << x << "]" << endl;
    
    bool Ya;
    
    cout << "  Angka?     : ";		Ya = isdigit(x);	yaTidak(Ya);	cout << endl;
    cout << "  Huruf?     : ";		Ya = isalpha(x);	yaTidak(Ya);	cout << endl;
    cout << "  Alfanumerik: ";		Ya = isalnum(x);	yaTidak(Ya);	cout << endl;
    cout << "  Huruf kecil: ";		Ya = islower(x);	yaTidak(Ya);	cout << endl;
    cout << "  Huruf besar: ";		Ya = isupper(x);	yaTidak(Ya);	cout << endl;
    cout << "  Spasi?     : ";		Ya = isspace(x);	yaTidak(Ya);	cout << endl;
	cout << "\n==============================================";

}

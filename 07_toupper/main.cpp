#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string nama;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Huruf besar: ";
    for (char c : nama) {
        cout << (char)toupper(c);
    }

    cout << "\nHuruf kecil: ";
    for (char c : nama) {
        cout << (char)tolower(c);
    }

    cout << endl;
    return 0;
}

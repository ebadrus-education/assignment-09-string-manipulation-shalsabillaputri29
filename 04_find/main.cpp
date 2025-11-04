#include <iostream>
using namespace std;

int main() {
    string kalimat, cari;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan kata yang ingin dicari: ";
    getline(cin, cari);

    cout << "Posisi '" << cari << "' : " << kalimat.find(cari) << endl;

    return 0;
}

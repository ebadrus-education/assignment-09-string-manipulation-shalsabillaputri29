#include <iostream>
using namespace std;

int main() {
    string teks;
    int posisi, panjang;
    string pengganti;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, teks);

    cout << "Masukkan posisi mulai diganti: ";
    cin >> posisi;

    cout << "Masukkan panjang teks yang ingin diganti: ";
    cin >> panjang;
    cin.ignore();

    cout << "Masukkan teks pengganti: ";
    getline(cin, pengganti);

    teks.replace(posisi, panjang, pengganti);

    cout << "After replace: " << teks << endl;

    return 0;
}

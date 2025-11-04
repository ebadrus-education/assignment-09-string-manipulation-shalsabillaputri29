#include <iostream>
using namespace std;

int main() {
    string nama;
    int posisi, jumlah;

    cout << "Masukkan sebuah nama: ";
    getline(cin, nama);

    cout << "Masukkan posisi mulai hapus: ";
    cin >> posisi;

    cout << "Masukkan jumlah karakter yang ingin dihapus: ";
    cin >> jumlah;

    nama.erase(posisi, jumlah);

    cout << "After erase: " << nama << endl;

    return 0;
}

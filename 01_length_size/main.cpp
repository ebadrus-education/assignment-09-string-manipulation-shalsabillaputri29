#include <iostream>
using namespace std;

int main() {
    string name;

    cout << "Masukkan sebuah nama: ";
    getline(cin, name);

    cout << "\nNama yang dimasukkan: " << name << endl;
    cout << "Panjang string (length): " << name.length() << endl;
    cout << "Panjang string (size): " << name.size() << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    string name, school;

    cout << "Masukkan nama: ";
    getline(cin, name);

    cout << "Masukkan nama sekolah: ";
    getline(cin, school);

    name.append(" ").append(school);

    cout << "\nHasil append = " << name << endl;

    return 0;
}

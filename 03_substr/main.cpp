#include <iostream>
using namespace std;

int main() {
    string name;

    cout << "Masukkan nama: ";
    getline(cin, name);

    cout << "Substring (0,4): " << name.substr(0,4) << endl;

    return 0;
}

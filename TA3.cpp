#include <iostream>
using namespace std;

int main() {
    const int x = 15;
    int npm[x] = {1234, 2345, 1234, 3456, 5678, 6789, 7890, 8901, 
                  1234, 9012, 5678, 3456, 1234, 2345, 6789};
    int target;
    int i = 0;
    int counter = 0;

    cout << "Masukkan NPM (4 digit) yang ingin dicari : ";
    cin >> target;

    while (i < x) {
        if (npm[i] == target) {
            counter++;
        }
        i++;
    }

    if (counter > 0) {
        cout << "NPM " << target << " ditemukan sebanyak " << counter << " kali." << endl;
    } else {
        cout << "NPM " << target << " tidak ditemukan." << endl;
    }

    return 0;
}

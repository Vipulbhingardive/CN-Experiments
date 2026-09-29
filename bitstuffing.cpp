#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b = "";
    int count = 0;

    cout << "Enter frame bits: ";
    cin >> a;

    for (char bit : a) {
        b += bit;

        if (bit == '1')
            count++;
        else
            count = 0;

        if (count == 5) {
            b += '0';
            count = 0;
        }
    }

    cout << "Frame after bit stuffing: " << b << endl;

    return 0;
}
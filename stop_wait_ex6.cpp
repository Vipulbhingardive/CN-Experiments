#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of frames: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nSending Frame " << i << endl;
        cout << "Waiting for ACK..." << endl;
        cout << "ACK received for Frame " << i << endl;
    }

    cout << "\nAll frames transmitted successfully.";
    return 0;
}
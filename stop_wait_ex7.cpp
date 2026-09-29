#include <iostream>
using namespace std;

int main() {
    int n, ack;

    cout << "Enter number of frames: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Sending Frame " << i << endl;
        cout << "Enter ACK (1=Yes, 0=No): ";
        cin >> ack;

        if (ack == 1)
            cout << "ACK received\n";
        else {
            cout << "ACK not received\n";
            i--;   // retransmit
        }
    }

    cout << "All frames transmitted successfully.";
    return 0;
}
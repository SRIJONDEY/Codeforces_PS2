#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 7-segment masks for digits 0-9
    int seg[10] = {
        0b1111110, // 0
        0b0110000, // 1
        0b1101101, // 2
        0b1111001, // 3
        0b0110011, // 4
        0b1011011, // 5
        0b1011111, // 6
        0b1110000, // 7
        0b1111111, // 8
        0b1111011  // 9
    };

    string n;
    cin >> n;

    int n1 = n[0] - '0'; // tens digit
    int n2 = n[1] - '0'; // ones digit

    int count = 0;

    for (int x = 0; x <= 99; x++) {
        int x1 = x / 10; // tens
        int x2 = x % 10; // ones

        bool ok1 = (seg[n1] & seg[x1]) == seg[n1];
        bool ok2 = (seg[n2] & seg[x2]) == seg[n2];

        if (ok1 && ok2)
            count++;
    }

    cout << count << "\n";
    return 0;
}

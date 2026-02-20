#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> bus(n);
    for (int i = 0; i < n; i++) {
        cin >> bus[i];
    }

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (bus[i][0] == 'O' && bus[i][1] == 'O') {
            bus[i][0] = '+';
            bus[i][1] = '+';
            found = true;
            break;
        }
        if (bus[i][3] == 'O' && bus[i][4] == 'O') {
            bus[i][3] = '+';
            bus[i][4] = '+';
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        for (auto &row : bus) {
            cout << row << "\n";
        }
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> pos0, pos1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') pos0.push_back(i + 1);
        else pos1.push_back(i + 1);
    }

    if (pos0.size() % 2 != 0) {
        cout << pos0.size() << "\n";
        for (int i = 0; i < (int)pos0.size(); i++) {
            cout << pos0[i] << (i == (int)pos0.size() - 1 ? "" : " ");
        }
        cout << "\n";
    } else if (pos1.size() % 2 == 0) {
        cout << pos1.size() << "\n";
        for (int i = 0; i < (int)pos1.size(); i++) {
            cout << pos1[i] << (i == (int)pos1.size() - 1 ? "" : " ");
        }
        cout << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
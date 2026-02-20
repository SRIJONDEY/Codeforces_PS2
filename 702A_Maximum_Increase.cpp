#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int current = 1;   // current increasing length
    int maximum = 1;   // answer

    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            current++;
        } else {
            current = 1;
        }

        maximum = max(maximum, current);
    }

    cout << maximum << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;

    bool isColor = false;   // assume black & white

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;

            // if any color pixel found
            if (c == 'C' || c == 'M' || c == 'Y') {
                isColor = true;
            }
        }
    }

    if (isColor)
        cout << "#Color\n";
    else
        cout << "#Black&White\n";

    return 0;
}

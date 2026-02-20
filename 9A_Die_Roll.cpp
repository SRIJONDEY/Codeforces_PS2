#include <bits/stdc++.h>
using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;

    int need = max(Y, W);

    int win = 0;
    if (need <= 6)
        win = 7 - need;

    int total = 6;

    int g = __gcd(win, total);
    win /= g;
    total /= g;

    cout << win << "/" << total << "\n";
    return 0;
}

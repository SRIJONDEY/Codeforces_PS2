#include <bits/stdc++.h>
using namespace std;

// removes all '0' digits from a number
long long removeZeros(long long x) {
    string s = to_string(x);
    string t = "";

    for (char c : s) {
        if (c != '0')
            t += c;
    }

    return stoll(t);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;

    long long c = a + b;

    long long a2 = removeZeros(a);
    long long b2 = removeZeros(b);
    long long c2 = removeZeros(c);

    if (a2 + b2 == c2)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}

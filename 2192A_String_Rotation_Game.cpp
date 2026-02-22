#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; string s;
        cin >> n >> s;
        int blocks = 1;
        for(int i = 1; i < n; ++i)
            if(s[i] != s[i-1]) ++blocks;
        cout << min(blocks + (s[0] != s[n-1]), n) << "\n";
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    if (n == 0){
        cout << "O-|-OOOO\n";
        return 0;
    }

    vector<string> rods;

    while(n > 0){
        int d = n % 10;
        n /= 10;

        string rod = "";

        // go-dama: classic Soroban
        if(d >= 5)
            rod += "-O";  // shifted
        else
            rod += "O-";  // not shifted

        rod += "|";

        // ichi-damas
        int k = d % 5;

        for(int i=0;i<k;i++) rod += "O"; // left beads
        rod += "-";
        for(int i=0;i<4-k;i++) rod += "O"; // right beads

        rods.push_back(rod);
    }

    for(auto &line: rods) cout << line << "\n";

    return 0;
}

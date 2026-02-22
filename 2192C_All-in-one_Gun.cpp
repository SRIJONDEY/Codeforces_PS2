#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

typedef long long ll;

void solve() {
    ll n, h, k;
    cin >> n >> h >> k;
    vector<ll> a(n);
    ll S = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        S += a[i];
    }

    // Precompute prefix sums and prefix minimums
    vector<ll> pref(n + 1, 0);
    vector<ll> pref_min(n + 1, 2e18);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + a[i];
        pref_min[i + 1] = min(pref_min[i], a[i]);
    }

    // Precompute suffix maximums
    vector<ll> suff_max(n + 2, 0);
    for (int i = n - 1; i >= 0; i--) {
        suff_max[i + 1] = max(suff_max[i + 2], a[i]);
    }

    ll min_time = 4e18; // Sufficiently large

    for (int p = 1; p <= n; p++) {
        // Max prefix sum of length p with 1 swap
        ll current_pref = pref[p];
        ll best_pref = current_pref;
        
        // Option: Swap smallest in pref with largest in suff
        if (p < n) {
            best_pref = max(best_pref, current_pref - pref_min[p] + suff_max[p + 1]);
        }

        if (best_pref >= h) {
            min_time = min(min_time, (ll)p);
        } else {
            ll remaining_h = h - best_pref;
            ll cycles = (remaining_h + S - 1) / S;
            min_time = min(min_time, cycles * (n + k) + p);
        }
    }

    cout << min_time << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
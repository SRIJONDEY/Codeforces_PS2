#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int to, id, orig_a;
};

void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<int> a(n), b(n), deg(n + 1, 0);
    vector<vector<Edge>> adj(n + 1);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i = 0; i < n; i++) {
        deg[a[i]]++;
        deg[b[i]]++;
        adj[a[i]].push_back({b[i], i + 1, a[i]});
        adj[b[i]].push_back({a[i], i + 1, a[i]});
    }

    for (int i = 1; i <= n; i++) {
        if (deg[i] % 2 != 0) {
            cout << -1 << "\n";
            return;
        }
    }

    vector<int> res;
    vector<bool> used(n + 1, false);
    vector<int> ptr(n + 1, 0);
    vector<int> st;

    for (int i = 1; i <= n; i++) {
        if (ptr[i] < (int)adj[i].size()) {
            st.push_back(i);
            while (!st.empty()) {
                int u = st.back();
                bool found = false;
                while (ptr[u] < (int)adj[u].size()) {
                    Edge e = adj[u][ptr[u]++];
                    if (used[e.id]) continue;
                    used[e.id] = true;
                    if (u != e.orig_a) {
                        res.push_back(e.id);
                    }
                    st.push_back(e.to);
                    found = true;
                    break;
                }
                if (!found) st.pop_back();
            }
        }
    }

    sort(res.begin(), res.end());

    cout << res.size() << "\n";
    for (int i = 0; i < (int)res.size(); i++) {
        cout << res[i] << (i == (int)res.size() - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
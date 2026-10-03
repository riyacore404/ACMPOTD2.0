#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> x(n), y(n);
    vector<bool> vis(n, false);

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    auto dfs = [&](auto&& self, int u) -> void {
        vis[u] = true;

        for (int v = 0; v < n; v++) {
            if (!vis[v] && (x[u] == x[v] || y[u] == y[v])) {
                self(self, v);
            }
        }
    };

    int components = 0;

    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(dfs, i);
            components++;
        }
    }

    cout << components - 1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int y, k, n;
    cin >> y >> k >> n;

    bool found = false;

    for (int i = k; i <= n; i += k) {
        if (i > y) {
            cout << i - y << " ";
            found = true;
        }
    }

    if (!found) cout << -1;

    cout << endl;
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
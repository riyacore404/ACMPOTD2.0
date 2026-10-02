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

    int sum = 0;

    vector<int> numbers(n);
    for (auto& x : numbers) { cin >> x; sum += x; }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (numbers[i] * n == sum) cnt++;
        else numbers[i] = -1;
    }

    cout << cnt << endl;
    for (int i = 0; i < n; i++) { if (numbers[i] != -1) cout << (i+1) << " "; }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
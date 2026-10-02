#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    string colors = "ROYGBIV";
    string result;

    int full = n / 7;
    int rem = n % 7;

    for (int i = 0; i < full; i++) {
        result += colors;
    }

    if (rem > 0) {
        if (rem == 1) {
            result += "G";
        } else if (rem == 2) {
            result += "GB";
        } else if (rem == 3) {
            result += "GBI";
        } else if (rem == 4) {
            result += "GBIV";
        } else if (rem == 5) {
            result += "RGBIV";
        } else if (rem == 6) {
            result += "RYGBIV";
        }
    }

    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
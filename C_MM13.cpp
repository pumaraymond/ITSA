#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    int n;
    cin >> h1 >> m1 >> h2 >> m2;
    int ans = 0;
    if (h2 - h1 < 2) {
        if (m2 - m1 >= 0) {
            n = (h2 - h1) * 2 + (m2 - m1) / 30;
        }
        if (m2 - m1 < 0) {
            n = (h2 - h1 - 1) * 2 + 1;
        }
        cout << n * 30 << endl;
        return 0;
    }
    if (h2 - h1 >= 2 && h2 - h1 < 4) {
        ans += 120;
        h2 -= 2;
        if (m2 - m1 >= 0) {
            n = (h2 - h1) * 2 + (m2 - m1) / 30;
        }
        if (m2 - m1 < 0) {
            n = (h2 - h1 - 1) * 2 + 1;
        }
        ans += n * 40;
        cout << ans << endl;
        return 0;
    }
    if (h2 - h1 > 4) {
        h2 -= 4;
        ans += 280;
        if (m2 - m1 >= 0) {
            n = (h2 - h1) * 2 + (m2 - m1) / 30;
        }
        if (m2 - m1 < 0) {
            n = (h2 - h1 - 1) * 2 + 1;
        }
        ans += n * 60;
        cout << ans << endl;
    }
    return 0;
}
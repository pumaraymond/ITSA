#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    double ans;
    while (cin >> x >> y) {
        ans = x * y;
        ans /= 2;
        cout << fixed << setprecision(1) << ans << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int up, down, high;
    double ans;
    while (cin >> up >> down >> high) {
        ans = ((up + down) * high);
        ans /= 2;
        cout << "Trapezoid area:" << fixed << setprecision(1) << ans << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int ans;
    int a, b;
    while (cin >> a >> b) {
        if (a < b)
            swap(a, b);
        ans = __gcd(a, b);
        cout << ans << endl;
    }
    return 0;
}
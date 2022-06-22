#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int x, ans;
    while (cin >> x) {
        ans = 1;
        for (int i = 2;i <= x;i++)
            ans *= i;
        cout << ans << endl;
    
    }
    return 0;
}
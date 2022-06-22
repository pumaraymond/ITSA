#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int ans;
    int x;
    while (cin >> x) {
        if (x > 31) {
          cout<<"Value of more than 31\n";
            continue;
        }
        ans = 1;
        for (int i = 0;i < x;i++) {
            ans *= 2;
        }
        cout << ans << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int isprime[10000];
int main(){
    for (int i = 2;i < 10000;i++) {
        for (int j = i + 1;j < 10000;j++) {
            if (j % i == 0) {
                isprime[j] = 1;
            }
        }
    }
    int n;
    while (cin >> n) {
        if (isprime[n] == 0)
            cout <<"YES\n";
        else cout << "NO\n";
    }
    return 0;
}
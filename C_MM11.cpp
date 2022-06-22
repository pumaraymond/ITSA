#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    int one, five, ten;
    while (cin >> x) {
        ten = x / 10;
        x %= 10;
        five = x / 5;
        x %= 5;
        one = x / 1;
        cout << "NT10=" << ten << endl;
        cout << "NT5=" << five << endl;
        cout << "NT1=" << one << endl;
    }
    return 0;
}
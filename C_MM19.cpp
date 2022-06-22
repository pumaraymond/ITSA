#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    double fee;
    while (cin >> x) {
        fee = x * 0.9;
        if (x > 800 && x < 1500)
            fee *= 0.9;
        if (x >= 1500)
            fee = x * 0.9 * 0.79;

        cout << fixed << setprecision(1) << fee << endl;
    }
    return 0;
}
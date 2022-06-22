#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    double salary;
    while (cin >> x >> y) {
        if (x <= 60) {
            salary = x * y;
        }
        if (x > 60 && x <= 120) {
            salary = 60 * y + (x - 60) * y * 1.33;
        }
        else salary = 60 * y + 60 * y * 1.33 + (x - 120) * y * 1.66;
        cout << fixed << setprecision(1) << salary << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    double max = -0x3f3f3f3f, min = 0x3f3f3f3f, input;
    for (int i = 0;i < 10;i++) {
        cin >> input;
        if (input > max)
            max = input;
        if (input < min)
            min = input;
    }
    cout << "maximum:" << fixed << setprecision(2) << max << endl;
    cout << "minimum:" << fixed << setprecision(2) << min << endl;
    return 0;
}
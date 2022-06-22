#include <bits/stdc++.h>
using namespace std;

int main(){
    int input;
    double weight;
    int gender;
    while (cin >> input >> gender) {
        if (gender == 1)
            cout << fixed << setprecision(1) << (input - 80) * 0.7<<endl;
        if (gender == 2)
            cout << fixed << setprecision(1) << (input - 70) * 0.6 << endl;
    }
    return 0;
}
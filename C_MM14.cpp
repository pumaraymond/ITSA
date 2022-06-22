#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int time, day, hour, minute, second;
    while (cin >> time) {
        day = time / (24 * 60 * 60);
        time %= (24 * 60 * 60);
        hour = time / (60 * 60);
        time %= (60 * 60);
        minute = time / 60;
        time %= 60;
        second = time;
        cout << day << " days\n" << hour << " hours\n" << minute << " minutes\n" << second << " seconds\n";
    }
    return 0;
}
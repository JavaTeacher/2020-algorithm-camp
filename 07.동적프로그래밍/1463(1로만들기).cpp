#include <bits/stdc++.h>
using namespace std;
int d[1000001];

// 방식 1(Top-down)
int go(int n) {
    if (n == 1) {
        return 0;
    }
    if (d[n] > 0) {
        return d[n];
    }
    d[n] = go(n - 1) + 1;
    if (n % 2 == 0) {
        int temp = go(n / 2) + 1;
        if (d[n] > temp) {
            d[n] = temp;
        }
    }
    if (n % 3 == 0) {
        int temp = go(n / 3) + 1;
        if (d[n] > temp) {
            d[n] = temp;
        }
    }
    return d[n];
}
int main() {
    int n;
    cin >> n;
    cout << go(n) << '\n';
    return 0;
}

// 방식 2(Bottom-Up)
#include <iostream>
using namespace std;
int d[1000001];
int main2() {
    int n;
    cin >> n;
    d[1] = 0;
    for (int i = 2; i <= n; i++) {
        d[i] = d[i - 1] + 1;
        if (i % 2 == 0 && d[i] > d[i / 2] + 1) {
            d[i] = d[i / 2] + 1;
        }
        if (i % 3 == 0 && d[i] > d[i / 3] + 1) {
            d[i] = d[i / 3] + 1;
        }
    }
    cout << d[n] << '\n';
    return 0;
}

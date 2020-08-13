#include <bits/stdc++.h>

using namespace std;

long long a[100001];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    long long ans = a[0];
    int ans_cnt = 1;
    int cnt = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i-1]) {
            cnt += 1;
        } else {
            cnt=1;
        }
        if (ans_cnt < cnt) {
            ans_cnt = cnt;
            ans = a[i];
        }
    }

    cout << ans;
    return 0;
}

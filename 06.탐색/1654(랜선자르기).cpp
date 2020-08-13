#include <iostream>
#include <cstdio>

using namespace std;

int k, n;
long long a[10000];

bool check(int x) {
    int cnt=0;
    for (int i=0; i<k; i++) {
        cnt += a[i] / x;
    }
    return cnt >= n;
}

int main() {
    cin >> k >> n;
    long long max = 0;

    for (int i=0; i<k; i++) {
        scanf("%lld", &a[i]);
        if (max < a[i]) {
            max = a[i];
        }
    }

    long long ans = 0;
    long long l = 1, r = max;

    while(l <= r) {
        long long mid = (l+r)/2;
        if(check(mid)) {
            if (ans < mid) {
                ans = mid;
            }
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans << endl;
    return 0;
}

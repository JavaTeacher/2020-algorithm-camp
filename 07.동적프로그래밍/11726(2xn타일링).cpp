#include <bits/stdc++.h>
int d[1001];
int main() {
    d[0] = 1;
    d[1] = 1;
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        d[i] = d[i - 1] + d[i - 2];
        d[i] %= 10007;
    }
    printf("%d\n",d[n]);
    return 0;
}

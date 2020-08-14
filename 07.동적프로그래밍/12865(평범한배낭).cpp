#include <bits/stdc++.h>
using namespace std;

int n, k, weight, value;
int dp[101][100001];

int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
        cin >> weight >> value;
        for (int j = 1; j <= k; j++) {
            if (j < weight) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight] + value);
            }
        }
	}
	cout << dp[n][k];
}

#include <bits/stdc++.h>

using namespace std;

int n, k;
vector<int> data;

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x); // scanf()�� ������ �Է�
		data.push_back(x);
	}
	sort(data.begin(), data.end());
	cout << data[k - 1];
}

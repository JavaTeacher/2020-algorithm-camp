#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> data;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x); // scanf()�� ������ �Է�
		data.push_back(x);
	}
	sort(data.begin(), data.end());
	for (auto x: data) {
		cout << x << '\n';
	}
}

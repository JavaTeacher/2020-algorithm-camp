#include <bits/stdc++.h>

using namespace std;

int n;
vector<pair<int, int>> data;

bool cmp(const pair<int, int> &u, const pair<int, int> &v) {
    if (u.second == v.second) return u.first < v.first;
    else return u.second < v.second;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		data.push_back(make_pair(x, y));
	}
	sort(data.begin(), data.end(), cmp);
	for (auto x: data) {
		cout << x.first << " " << x.second << '\n';
	}
}

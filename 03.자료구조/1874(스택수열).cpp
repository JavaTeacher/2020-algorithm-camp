#include <bits/stdc++.h>

using namespace std;

int n, cnt = 1;
stack<int> s;
vector<char> result;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		// �Է� ���� �����Ϳ� ������ ������ ����
		while (cnt <= x) {
			s.push(cnt);
			cnt += 1;
			result.push_back('+');
		}
		// ������ �ֻ��� ���Ұ� �����Ϳ� ���� �� ���
		if (s.top() == x) {
			s.pop();
			result.push_back('-');
		}
		else {
			cout << "NO";
			return 0;
		}
	}
	// ����� ���ʴ�� ���
	for (auto x: result) {
		cout << x << '\n';
	}
}

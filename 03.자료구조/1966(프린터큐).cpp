#include <bits/stdc++.h>

using namespace std;

int tc, n, m, cnt;

int main() {
	cin >> tc;

	for (int i = 0; i < tc; i++) {
        queue<pair<int, int>> q;
        priority_queue<int> pq; // ���� �߿䵵���� ó��
        cnt = 0;
		cin >> n >> m;

        for (int j = 0; j < n; j++) {
        	int x;
        	cin >> x;
        	q.push({x, j}); // {�߿䵵, �ε���} ����
        	pq.push(x); // �߿䵵 ����
		}

		while (true) {
			int x = q.front().first;
			int index = q.front().second;
			q.pop();

            // ���� �߿䵵�� ���� ��� ���
			if (x == pq.top()) {
				cnt++;
				pq.pop();
				if (index == m) {
					cout << cnt << '\n';
					break;
				}
			}
			else {
				q.push({x, index});
			}
		}
	}
}

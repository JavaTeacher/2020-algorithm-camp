#include <bits/stdc++.h>

using namespace std;

int n;
int data[10001];

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x); // scanf()�� ������ �Է�
		data[x]++;
	}
	for (int i = 0; i < 10001; i++) {
		if (data[i] != 0) {
			for (int j = 0; j < data[i]; j++) {
				cout << i << '\n';
			}
		}
	}
}

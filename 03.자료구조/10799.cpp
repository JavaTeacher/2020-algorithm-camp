#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
    string a;
    cin >> a;
    int n = a.size();
    stack<int> s;
    int ans = 0;
    for (int i=0; i<n; i++) {
        if (a[i] == '(') {
            s.push(i);
        } else {
            if (s.top()+1 == i) {
                s.pop();
                ans += s.size();
            } else {
                s.pop();
                ans += 1;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}

#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;

    stack<int> s;

    while (n--) {
        string cmd;
        cin >> cmd;
        if (cmd == "push") {
            int num;
            cin >> num;
            s.push(num);
        } else if (cmd == "top") {
            cout << (s.empty() ? -1 : s.top()) << '\n';
        } else if (cmd == "size") {
            cout << s.size() << '\n';
        } else if (cmd == "empty") {
            cout << s.empty() << '\n';
        } else if (cmd == "pop") {
            cout << (s.empty() ? -1 : s.top()) << '\n';
            if (!s.empty()) {
                s.pop();
            }
        }
    }
    return 0;
}

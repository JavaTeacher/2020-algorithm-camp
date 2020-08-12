#include <iostream>
#include <string>
using namespace std;
int main() {
    int cnt = 0;
    string s;

    while (cin >> s) {
        cnt += 1;
    }

    cout << cnt << '\n';
    return 0;
}

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;

    for (int i='a'; i<='z'; i++) {
        cout << count(s.begin(), s.end(), i) << ' ';
    }

    cout << '\n';


    return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    int sum = 0;
    while (getline(cin, s, ',')) {
        sum += stoi(s);
    }
    cout << sum << '\n';
    return 0;
}

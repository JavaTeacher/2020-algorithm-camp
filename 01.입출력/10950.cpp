#include <cstdio>
using namespace std;
int main() {
    int t;
    int a,b;
    scanf("%d",&t);
    while (t--) {
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
    return 0;
}

#include <iostream>
using namespace std;
int main2() {
    int t;
    cin >> t;
    int a,b;
    while (t--) {
        cin >> a >> b;
        cout << a+b << '\n';
    }
    return 0;
}

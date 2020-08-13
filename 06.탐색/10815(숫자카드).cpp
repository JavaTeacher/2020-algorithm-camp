#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    //cin >> n;

    set<int> s;
    for (int i=0; i<n; i++) {
        int x;
        scanf("%d",&x);
        //cin >> x;
        s.insert(x);
    }

    int m;
    scanf("%d",&m);
    //cin >> m;

    for (int i=0; i<m; i++) {
        int x;
        scanf("%d",&x);
        //cin >> x;
        printf("%d ",s.count(x));
        //cout << s.count(x) << ' ';
    }

    return 0;
}

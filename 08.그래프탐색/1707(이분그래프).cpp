#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;
vector<int> a[20001];
int color[20001];
void dfs(int node, int c) {
    color[node] = c;
    for (int i=0; i<a[node].size(); i++) {
        int next = a[node][i];
        if (color[next] == 0) {
            dfs(next, 3-c);
        }
    }
}
int main() {
    int t;
    scanf("%d\n",&t);
    while (t--) {
        int n, m;
        scanf("%d %d",&n,&m);
        for (int i=1; i<=n; i++) {
            a[i].clear();
            color[i] = 0;
        }
        for (int i=0; i<m; i++) {
            int u,v;
            scanf("%d %d",&u,&v);
            a[u].push_back(v);
            a[v].push_back(u);
        }
        for (int i=1; i<=n; i++) {
            if (color[i] == 0) {
                dfs(i, 1);
            }
        }
        bool ok = true;
        for (int i=1; i<=n; i++) {
            for (int k=0; k<a[i].size(); k++) {
            int j = a[i][k];
                if (color[i] == color[j]) {
                    ok = false;
                }
            }
        }
        printf("%s\n",ok ? "YES" : "NO");
    }
    return 0;
}

#include <cstdio>
int main() {
    int n;
    scanf("%d",&n);
    int sum=0;
    for (int i=0; i<n; i++) {
        int x;
        scanf("%1d",&x);
        sum += x;
    }
    printf("%d\n",sum);
    return 0;
}

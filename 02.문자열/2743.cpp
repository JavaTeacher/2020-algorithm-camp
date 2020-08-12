#include <cstdio>
char s[111];
int main() {
    scanf("%s",s);
    int len = 0;
    for (int i=0; s[i]; i++) {
        len += 1;
    }
    printf("%d\n",len);
}

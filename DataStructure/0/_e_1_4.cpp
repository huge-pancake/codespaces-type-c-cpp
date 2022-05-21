/**
 * p009
 * 对一个一维数组，求它的累加和。
 * T(n) = 4n + 4
 */

#include <cstdio>

const int n = 16;
int a[n];
int sum;

int main() {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%d\n", sum);

    return 0;
}

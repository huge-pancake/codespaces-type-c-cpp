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

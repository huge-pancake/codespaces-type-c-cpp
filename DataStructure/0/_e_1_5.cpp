/**
 * p009
 * 对一个一维数组，对它从大到小排序。
 * T(n) = 2n^2 + 14n - 3
 */

#include <cstdio>

const int n = 16;
int a[n];

void sort() {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main() {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    sort();
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

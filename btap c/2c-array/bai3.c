#include <stdio.h>

int main() {
    const int n = 2, m = 3, p = 2;

    int a[2][3] = {{1, 3, 5}, {7, 4, 2}};
    int b[3][2] = {{2, 7}, {9, 3}, {5, 1}};
    int c[2][2] = {};

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            int res = 0;
            for(int k = 0; k < m; k++) {
                res += (a[i][k] * b[k][j]);
            }
            c[i][j] = res;
        }
    }

    printf("Tich 2 ma tran la: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

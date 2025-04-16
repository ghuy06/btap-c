#include <stdio.h>

int a[50][50];

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int res = 0, r = 0, c = n;
    for(int i = 0; i < n - 1; i++) {
        for(int j = r; j < c; j++) {
            res++;
            a[r][j] = res;
        }

        for(int k = r + 1; k < c; k++) {
            res++;
            a[k][c - 1] = res;
        }

        for(int q = c - 2; q >= r; q--) {
            res++;
            a[c - 1][q] = res;
        }

        for(int z = c - 2; z >= r + 1; z--) {
            res++;
            a[z][r] = res;
        }

        r++;
        c--;
    }

    printf("Ma tran xoan oc: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

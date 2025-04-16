#include <stdio.h>

void inp(int n, int m, int tmp[100][100]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            scanf("%d", &tmp[i][j]);
    }
}

void out(int n, int p, int m, int a[100][100], int b[100][100], int tmp[100][100], FILE *fptr) {
    fprintf(fptr, "Ma tran A: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            fprintf(fptr, "%d ", a[i][j]);
        }
        fprintf(fptr, "\n");
    }

    fprintf(fptr, "Ma tran B: \n");
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < m; j++) {
            fprintf(fptr, "%d ", b[i][j]);
        }
        fprintf(fptr, "\n");
    }

    fprintf(fptr, "Ma tran C: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            fprintf(fptr, "%d ", tmp[i][j]);
        }
        fprintf(fptr, "\n");
    }
}

void mul(int n, int p, int m, int a[100][100], int b[100][100], int tmp[100][100]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            int res = 0;
            for(int k = 0; k < m; k++) {
                res += (a[i][k] * b[k][j]);
            }
            tmp[i][j] = res;
        }
    }
}

int main() {
    FILE *fptr = fopen("TICH_MT.C", "a");

    int n, p, m;
    int a[100][100], b[100][100], mu[100][100];

    printf("Nhap so hang ma tran A: "); scanf("%d", &n);
    printf("Nhap so cot ma tran A: "); scanf("%d", &p);
    printf("Nhap so cot ma tran B: "); scanf("%d", &m);

    printf("Nhap ma tran a: \n");
    inp(n, p, a);

    printf("Nhap ma tran b: \n");
    inp(p, m, b);

    mul(n, p, m, a, b, mu);

    out(n, p, m, a, b, mu, fptr);
}

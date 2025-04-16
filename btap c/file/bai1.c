#include <stdio.h>

void inp(int n, int m, int tmp[100][100]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            scanf("%d", &tmp[i][j]);
    }
}

void out(int n, int m, int a[100][100], int b[100][100], int tmp[100][100], FILE *fptr) {
    fprintf(fptr, "Ma tran A: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            fprintf(fptr, "%d ", a[i][j]);
        }
        fprintf(fptr, "\n");
    }

    fprintf(fptr, "Ma tran B: \n");
    for(int i = 0; i < n; i++) {
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

void pls(int n, int m, int a[100][100], int b[100][100], int tmp[100][100]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            tmp[i][j] = a[i][j] + b[i][j];
    }
}

int main() {
    FILE *fptr = fopen("CONG_MT.C", "w");

    int n, m;
    int a[100][100], b[100][100], pl[100][100];

    printf("Nhap so hang: "); scanf("%d", &n);
    printf("Nhap so cot: "); scanf("%d", &m);

    printf("Nhap ma tran a: \n");
    inp(n, m, a);

    printf("Nhap ma tran b: \n");
    inp(n, m, b);

    pls(n, m, a, b, pl);

    out(n, m, a, b, pl, fptr);
}

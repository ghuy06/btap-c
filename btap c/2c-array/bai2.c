#include <stdio.h>

int main() {
    int a[3][3] = {{2, 3, 1}, {5, 6, 7}, {9, 8, 1}};
    int b[3][3] = {{5, 2, 7}, {8, 8, 5}, {1, 1, 5}};
    int c[3][3] = {};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];
    }

    printf("Tong 2 ma tran la: \n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

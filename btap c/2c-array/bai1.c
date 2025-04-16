#include <stdio.h>

int main() {
    int arr[3][3] = {{2, 3, 1}, {5, 6, 7}, {9, 8, 1}};

    printf("Gia tri cac phan tu cua mang duoc khai bao la: \n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Nhap ma tran 3x3: \n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            scanf("%d", &arr[i][j]);
    }

    printf("Gia tri cac phan tu cua mang duoc nhap la: \n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

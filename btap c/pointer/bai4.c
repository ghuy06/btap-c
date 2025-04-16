#include <stdio.h>
#include <stdlib.h>

void sort(int *arr, int sz) {
    int tmp = 0;
    for(int i = 0; i < sz; i++) {
        for(int j = i + 1; j < sz; j++) {
            if(arr[i] > arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main() {
    int *arr = NULL;
    int n;
    printf("Nhap n: "); scanf("%d", &n);

    arr = (int *)calloc(n, sizeof(int));
    printf("Nhap mang: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sort(arr, n);

    printf("Mang da duoc sap xep la: \n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
}

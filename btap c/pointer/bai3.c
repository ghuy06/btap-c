#include <stdio.h>
#include <stdlib.h>

void mx_mn(int *arr, int sz, int *mn, int *mx) {
    for(int i = 0; i < sz; i++) {
        if(*mx < arr[i])
            *mx = arr[i];
        if(*mn > arr[i])
            *mn = arr[i];
    }
}

int main() {
    int sz = 10;
    int arr[] = {2, 9, -2, -9, 0, 9, 5, 15, 20, 2};

    int mx = INT_MIN, mn = INT_MAX;
    mx_mn(arr, sz, &mn, &mx);

    printf("Gia tri lon nhat la: %d\nGia tri nho nhat la: %d\n", mx, mn);
}

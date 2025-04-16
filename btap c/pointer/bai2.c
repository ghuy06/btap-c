#include <stdio.h>
#include <stdlib.h>

int main() {
    int sz = 10;
    int *ptr = (int *)calloc(sz, sizeof(int));

    for(int i = 0; i < sz; i++)
        ptr[i] = i + 2;

    printf("Gia tri cua mang la: ");
    for(int i = 0; i < sz; i++)
        printf("%d ", ptr[i]);

    free(ptr);
}

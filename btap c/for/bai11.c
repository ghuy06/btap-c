#include <stdio.h>
void nhiphan(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    int bin[32], i = 0;
    while (n > 0) {
        bin[i++] = n % 2;
        n /= 2;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
}
void batphan(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    int oct[32], i = 0;
    while (n > 0) {
        oct[i++] = n % 8;
        n /= 8;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", oct[j]);
    }
}
void thaplucphan(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    char hex[32];
    int i = 0;
    while (n > 0) {
        int temp = n % 16;
        if (temp < 10)
            hex[i++] = temp + '0';
        else
            hex[i++] = temp - 10 + 'A';
        n /= 16;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("he nhi phan: ");
    nhiphan(n);
    printf("\n");
    printf("he bat phan: ");
    batphan(n);
    printf("\n");
    printf("he thap luc phan: ");
    thaplucphan(n);
    printf("\n");
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
    long long price, quan, sum;
} prod;

void out(prod *db, int n) {
    printf("\t\t SO LIEU BAN HANG\n");
    printf("%-3s %-15s %-10s %-10s %-15s\n", "STT", "Ten Hang", "Don gia", "So luong", "Thanh tien");

    long long sum_a = 0;
    for (int i = 0; i < n; i++) {
        printf("%-3d %-15s %-10lld %-10lld %-15lld\n",
               i + 1, db[i].name, db[i].price, db[i].quan, db[i].sum);
        sum_a += db[i].sum;
    }

    printf("%-3s %-15s %-10s %-10s %-15lld\n", "", "", "", "Tong tien", sum_a);
}

void write(prod *db, int n) {
    FILE *file = fopen("SO_LIEU.C", "wb");
    fwrite(&n, sizeof(int), 1, file);
    fwrite(db, sizeof(prod), n, file);

    fclose(file);
}

int read(prod **db) {
    FILE *file = fopen("SO_LIEU.C", "rb");

    int n;
    fread(&n, sizeof(int), 1, file);

    *db = (prod*)malloc(n * sizeof(prod));

    fread(*db, sizeof(prod), n, file);
    fclose(file);
    return n;
}

int main() {
    prod *db = NULL;
    int n;
    int opt;

    printf("1. Xuat du lieu ra file\n");
    printf("2. Doc du lieu tu file\n");
    printf("Nhap lua chon: ");
    scanf("%d", &opt);

    if (opt == 1) {
        printf("Nhap so luong mat hang: ");
        scanf("%d", &n);

        db = (prod *)calloc(n, sizeof(prod));
        for(int i = 0; i < n; i++) {
            printf("Mat hang thu %d\n", i + 1);

            printf("Ten hang: ");
            while (getchar() != '\n');
            fgets(db[i].name, 100, stdin);
            db[i].name[strlen(db[i].name) - 1] = '\0';

            printf("Don gia: "); scanf("%lld", &db[i].price);
            printf("So luong: "); scanf("%lld", &db[i].quan);
            printf("\n");
            db[i].sum = db[i].price * db[i].quan;
        }

        write(db, n);
    } else if (opt == 2) {
        n = read(&db);
    }

    out(db, n);

    free(db);
    return 0;
}

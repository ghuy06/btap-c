#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char ho_ten[100];
    int tuoi;
    float diem_tb;
} Svien;

void read(Svien **sv, int *n) {
    FILE *file = fopen("DSACH.C", "rb");
    if(!file) {
        return;
    }

    fread(n, sizeof(int), 1, file);

    *sv = (Svien *)malloc(sizeof(Svien) * (*n));
    fread(*sv, sizeof(Svien), *n, file);
    fclose(file);
}

void write(Svien *sv, int n) {
    FILE *file = fopen("DSACH.C", "wb");
    fwrite(&n, sizeof(int), 1, file);
    fwrite(sv, sizeof(Svien), n, file);
    fclose(file);
}

void add(char ho_ten[100], int tuoi, float diem_tb, Svien **sv, int *n) {
    *sv = realloc(*sv, (*n + 1) * sizeof(Svien));
    (*sv)[*n].tuoi = tuoi;
    (*sv)[*n].diem_tb = diem_tb;
    strcpy((*sv)[*n].ho_ten, ho_ten);
    (*n)++;
    write(*sv, *n);
}

void edit(char ho_ten[100], int tuoi, float diem_tb, Svien *sv, int n) {
    for(int i = 0; i < n; i++) {
        if(!strcmp(sv[i].ho_ten, ho_ten)) {
            sv[i].tuoi = tuoi;
            sv[i].diem_tb = diem_tb;
            write(sv, n);
            return;
        }
    }
}

void display(Svien *sv, int n) {
    if(n > 0) {
        printf("\t\t DANH SACH SINH VIEN\n");
        printf("%-3s %-20s %-5s %-10s\n", "STT", "Ho ten", "Tuoi", "Diem TB");

        for (int i = 0; i < n; i++) {
            printf("%-3d %-20s %-5d %-10f\n",
               i + 1, sv[i].ho_ten, sv[i].tuoi, sv[i].diem_tb);
        }
        printf("\n\n");
    }
}

void menu() {
    printf("1. Them sinh vien\n");
    printf("2. Sua tuoi, diemTB sinh vien\n");
    printf("3. Thoat\n");
}

int main() {
    Svien *sv = NULL;
    int n = 0;
    read(&sv, &n);

    display(sv, n);
    while (1)
    {
       menu();
       int opt;
       printf("Nhap lua chon: "); scanf("%d", &opt);

       switch (opt)
       {
        case 1: {
            char ho_ten[100];
            int tuoi;
            float diem_tb;

            getchar();
            printf("Nhap ho ten: "); fgets(ho_ten, 100, stdin);
            ho_ten[strcspn(ho_ten, "\n")] = '\0';
            printf("Nhap tuoi: "); scanf("%d", &tuoi);
            printf("Nhap diem TB: ");scanf("%f", &diem_tb);
            add(ho_ten, tuoi, diem_tb, &sv, &n);
            display(sv, n);
            break;
        }
        case 2: {
            char ho_ten[100];
            int tuoi;
            float diem_tb;

            getchar();
            printf("Nhap ho ten can chinh sua: "); fgets(ho_ten, 100, stdin);
            ho_ten[strcspn(ho_ten, "\n")] = '\0';
            printf("Nhap tuoi: "); scanf("%d", &tuoi);
            printf("Nhap diem TB: ");scanf("%f", &diem_tb);
            edit(ho_ten, tuoi, diem_tb, sv, n);
            display(sv, n);
            break;
        }
        case 3: {
            return 0;
        }
       }
    }

}



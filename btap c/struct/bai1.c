#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Svien {
    char ho_ten[100];
    int tuoi;
    float diem_tb;
    struct Svien *next;
} Svien;

Svien *create(const char *ho_ten, int tuoi, float diem_tb) {
    Svien *new_svien = (Svien *)malloc(sizeof(Svien));
    if (!new_svien) return NULL;
    strcpy(new_svien->ho_ten, ho_ten);
    new_svien->tuoi = tuoi;
    new_svien->diem_tb = diem_tb;
    new_svien->next = NULL;
    return new_svien;
}

void add(Svien **head, const char *ho_ten, int tuoi, float diem_tb) {
    Svien *new_svien = create(ho_ten, tuoi, diem_tb);
    new_svien->next = *head;
    *head = new_svien;
}

int insert_name(Svien **head, const char *tar_ho_ten, const char *ho_ten, int tuoi, float diem_tb) {
    Svien *new_svien = create(ho_ten, tuoi, diem_tb);
    Svien *tmp = *head, *prev = NULL;

    while (tmp && strcmp(tmp->ho_ten, tar_ho_ten) != 0) {
        prev = tmp;
        tmp = tmp->next;
    }

    if (!tmp) {
        free(new_svien);
        return -1;
    }

    new_svien->next = tmp;
    if (prev) prev->next = new_svien;
    else *head = new_svien;
    return 0;
}

int delete_sv(Svien **head, const char *tar_ho_ten) {
    Svien *tmp = *head, *prev = NULL;

    while (tmp && strcmp(tmp->ho_ten, tar_ho_ten) != 0) {
        prev = tmp;
        tmp = tmp->next;
    }

    if (!tmp) return -1;

    if (prev) prev->next = tmp->next;
    else *head = tmp->next;

    free(tmp);
    return 0;
}

void print(const Svien *head) {
    int index = 1;
    printf("\n\t\t DANH SACH SINH VIEN\n");
    printf("%-3s %-25s %-5s %-5s\n", "STT", "Ho ten", "Tuoi", "Diem TB");

    while (head) {
        printf("%-3d %-25s %-5d %.2f\n", index++, head->ho_ten, head->tuoi, head->diem_tb);
        head = head->next;
    }
}

void input_sv_info(char *ho_ten, int *tuoi, float *diem_tb) {
    printf("Ho ten: ");
    while (getchar() != '\n');
    fgets(ho_ten, 100, stdin);
    ho_ten[strcspn(ho_ten, "\n")] = '\0';

    printf("Tuoi: ");
    scanf("%d", tuoi);

    printf("Diem TB: ");
    scanf("%f", diem_tb);
}

void clear_list(Svien *head) {
    while (head) {
        Svien *tmp = head;
        head = head->next;
        free(tmp);
    }
}

int main() {
    Svien *head = NULL;
    char ho_ten[100], ho_ten_c[100];
    int tuoi, n;
    float diem_tb;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d\n", i + 1);
        input_sv_info(ho_ten, &tuoi, &diem_tb);
        add(&head, ho_ten, tuoi, diem_tb);
    }

    print(head);

    int choice;
    do {
        printf("\n0. Thoat\n1. Them sinh vien\n2. Xoa sinh vien\n3. Chen sinh vien\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                input_sv_info(ho_ten, &tuoi, &diem_tb);
                add(&head, ho_ten, tuoi, diem_tb);
                print(head);
                break;
            case 2:
                printf("Nhap ho ten SV can xoa: ");
                while (getchar() != '\n');
                fgets(ho_ten, 100, stdin);
                ho_ten[strcspn(ho_ten, "\n")] = '\0';

                if (delete_sv(&head, ho_ten) == -1)
                    printf("Khong tim thay sinh vien ten %s\n", ho_ten);
                else {
                    printf("Xoa thanh cong!\n");
                    print(head);
                }
                break;
            case 3:
                printf("Nhap ho ten can chen truoc: ");
                while (getchar() != '\n');
                fgets(ho_ten_c, 100, stdin);
                ho_ten_c[strcspn(ho_ten_c, "\n")] = '\0';

                input_sv_info(ho_ten, &tuoi, &diem_tb);
                if (insert_name(&head, ho_ten_c, ho_ten, tuoi, diem_tb) == -1)
                    printf("Khong tim thay sinh vien ten %s\n", ho_ten_c);
                else {
                    printf("Chen thanh cong!\n");
                    print(head);
                }
                break;
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);

    clear_list(head);
    return 0;
}

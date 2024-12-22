#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;            
    char name[50];      
    int age;          
    char phoneNumber[15];
};

void themSinhVien(struct SinhVien sv[], int *size, int maxSize) {
    if (*size >= maxSize) {
        printf("\nDanh sach sinh vien da day! Khong the them moi.\n");
        return;
    }

    printf("\nNhap thong tin cho sinh vien moi:\n");

    struct SinhVien newSV;
    newSV.id = *size + 1; 

    printf("Ten: ");
    getchar(); 
    fgets(newSV.name, sizeof(newSV.name), stdin);
    newSV.name[strcspn(newSV.name, "\n")] = '\0';

    printf("Tuoi: ");
    scanf("%d", &newSV.age);

    printf("So dien thoai: ");
    getchar(); 
    fgets(newSV.phoneNumber, sizeof(newSV.phoneNumber), stdin);
    newSV.phoneNumber[strcspn(newSV.phoneNumber, "\n")] = '\0'; 

    sv[*size] = newSV;
    (*size)++;

    printf("\nDa them sinh vien moi thanh cong!\n");
}

void inDanhSachSinhVien(struct SinhVien sv[], int size) {
    int i;

    printf("\nDanh sach sinh vien:\n");
    for (i = 0; i < size; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n", sv[i].phoneNumber);
    }
}

int main() {
    const int MAX_SIZE = 5; 
    struct SinhVien sv[MAX_SIZE]; 
    int size = 0; 

    int chon;

    do {
        printf("\nMENU:\n");
        printf("1. Them sinh vien\n");
        printf("2. In danh sach sinh vien\n");
        printf("3. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                themSinhVien(sv, &size, MAX_SIZE);
                break;
            case 2:
                inDanhSachSinhVien(sv, size);
                break;
            case 3:
                printf("\nThoat chuong trinh!\n");
                break;
            default:
                printf("\nLua chon khong hop le. Vui long chon lai.\n");
        }
    } while (chon != 3);
}


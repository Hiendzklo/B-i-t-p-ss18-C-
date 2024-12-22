#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;             
    char name[50];    
    int age;             
    char phoneNumber[15];
};

void suaThongTinSinhVien(int id, struct SinhVien sv[], int size) {
    int i, found = 0;

    for (i = 0; i < size; i++) {
        if (sv[i].id == id) { 
            found = 1;

            printf("\nThong tin hien tai cua sinh vien ID %d:\n", id);
            printf("Ten: %s\n", sv[i].name);
            printf("Tuoi: %d\n", sv[i].age);
            printf("So dien thoai: %s\n", sv[i].phoneNumber);

            printf("\nNhap thong tin moi cho sinh vien ID %d:\n", id);
            printf("Ten: ");
            getchar(); 
            fgets(sv[i].name, sizeof(sv[i].name), stdin);
            sv[i].name[strcspn(sv[i].name, "\n")] = '\0'; 

            printf("Tuoi: ");
            scanf("%d", &sv[i].age);

            printf("So dien thoai: ");
            getchar(); 
            fgets(sv[i].phoneNumber, sizeof(sv[i].phoneNumber), stdin);
            sv[i].phoneNumber[strcspn(sv[i].phoneNumber, "\n")] = '\0'; 

            printf("\nThong tin sinh vien ID %d da duoc cap nhat thanh cong!\n", id);
            break;
        }
    }

    if (!found) {
        printf("\nKhong tim thay sinh vien co ID %d trong danh sach!\n", id);
    }
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
    struct SinhVien sv[5] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Tran Van B", 21, "0987654321"},
        {3, "Le Thi C", 19, "0345678901"},
        {4, "Pham Van D", 22, "0765432109"},
        {5, "Hoang Thi E", 18, "0234567890"}
    };

    int id;

    printf("Danh sach sinh vien ban dau:\n");
    inDanhSachSinhVien(sv, 5);

    printf("\nNhap ID sinh vien can sua thong tin: ");
    scanf("%d", &id);

    suaThongTinSinhVien(id, sv, 5);

    printf("\nDanh sach sinh vien sau khi chinh sua:\n");
    inDanhSachSinhVien(sv, 5);
}


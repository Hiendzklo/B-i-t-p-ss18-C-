#include <stdio.h>

struct SinhVien {
    int id;            
    char name[50];      
    int age;             
    char phoneNumber[15];
};

int main() {
    struct SinhVien sv[5]; 
    int i;

    printf("Nhap thong tin cho 5 sinh vien:\n");
    for (i = 0; i < 5; i++) {
        sv[i].id = i + 1;

        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        
        printf("Ten: ");
        getchar(); 
        fgets(sv[i].name, sizeof(sv[i].name), stdin);

        printf("Tuoi: ");
        scanf("%d", &sv[i].age);

        printf("So dien thoai: ");
        getchar(); 
        fgets(sv[i].phoneNumber, sizeof(sv[i].phoneNumber), stdin);
    }

    printf("\nThong tin cac sinh vien vua nhap:\n");
    for (i = 0; i < 5; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s", sv[i].phoneNumber);
    }
}


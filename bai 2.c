#include <stdio.h>

struct SinhVien {
    char name[50];     
    int age;            
    char phoneNumber[15]; 
};

int main() {
    struct SinhVien sv; 

    printf("Nhap thong tin sinh vien:\n");
    printf("Ten: ");
    fgets(sv.name, sizeof(sv.name), stdin);

    printf("Tuoi: ");
    scanf("%d", &sv.age);
    getchar();

    printf("So dien thoai: ");
    fgets(sv.phoneNumber, sizeof(sv.phoneNumber), stdin);

    printf("\nThong tin sinh vien vua nhap:\n");
    printf("Ten: %s", sv.name);
    printf("Tuoi: %d\n", sv.age);
    printf("So dien thoai: %s", sv.phoneNumber);
}


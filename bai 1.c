#include <stdio.h> 

struct SinhVien {
    char name[50];     
    int age;            
    char phoneNumber[15]; 
};

int main() {
    struct SinhVien sv = {"Nguyen Duy Hien", 19, "0989890614"};

    printf("Thong tin sinh vien:\n");
    printf("Ten: %s\n", sv.name);
    printf("Tuoi: %d\n", sv.age);
    printf("So dien thoai: %s\n", sv.phoneNumber);
}


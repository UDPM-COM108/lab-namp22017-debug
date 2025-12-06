#include <stdio.h>
#include <string.h>
#include <ctype.h>

void demNguyenAmPhuAm(char chuoi[]) {
    int nguyenAm = 0, phuAm = 0;
    for (int i = 0; chuoi[i] != '\0'; i++) {
        char c = tolower(chuoi[i]);
        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                nguyenAm++;
            else
                phuAm++;
        }
    }
    printf("So nguyen am: %d\n", nguyenAm);
    printf("So phu am: %d\n", phuAm);
}
void dangNhap(char username[], char password[]) {
    char userDung[] = "admin";
    char passDung[] = "123456";

    if (strcmp(username, userDung) == 0 && strcmp(password, passDung) == 0)
        printf("Dang nhap thanh cong!\n");
    else
        printf("Dang nhap khong thanh cong.\n");
}

int main() {
    int luaChon;
    printf("Chon chuc nang:\n");
    printf("1. Dem nguyen am va phu am\n");
    printf("2. Dang nhap\n");
    printf("Nhap lua chon (1 hoac 2): ");
    scanf("%d", &luaChon);
    getchar();

    if (luaChon == 1) {
        char chuoi[100];
        printf("Nhap chuoi: ");
        fgets(chuoi, sizeof(chuoi), stdin);
        demNguyenAmPhuAm(chuoi);
    } else if (luaChon == 2) {
        char username[50], password[50];
        printf("Nhap username: ");
        scanf("%s", username);
        printf("Nhap password: ");
        scanf("%s", password);
        dangNhap(username, password);
    } else {
        printf("Lua chon khong hop le.\n");
    }

    return 0;
}
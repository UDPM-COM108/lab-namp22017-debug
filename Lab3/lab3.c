#include <stdio.h>
#include <math.h>

// Bài 1: Tính học lực
void tinhHocLuc() {
    float dtb;
    printf("Nhap diem trung binh (0-10): ");
    scanf("%f", &dtb);

    if (dtb >= 9)
        printf("Hoc luc: Xuat Sac\n");
    else if (dtb >= 8)
        printf("Hoc luc: Gioi\n");
    else if (dtb >= 6.5)
        printf("Hoc luc: Kha\n");
    else if (dtb >= 5)
        printf("Hoc luc: Trung Binh\n");
    else
        printf("Hoc luc: Yeu\n");
}

// Bài 2: Giải phương trình bậc nhất ax + b = 0
void giaiPTBacNhat() {
    float a, b;
    printf("Nhap he so a, b: ");
    scanf("%f%f", &a, &b);

    if (a == 0) {
        if (b == 0)
            printf("Phuong trinh vo so nghiem\n");
        else
            printf("Phuong trinh vo nghiem\n");
    } else {
        float x = -b / a;
        printf("Nghiem cua phuong trinh: x = %.2f\n", x);
    }
}

// Bài 3: Giải phương trình bậc hai ax^2 + bx + c = 0
void giaiPTBacHai() {
    float a, b, c;
    printf("Nhap he so a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0) {
        // Giải như phương trình bậc nhất
        if (b == 0) {
            if (c == 0)
                printf("Phuong trinh vo so nghiem\n");
            else
                printf("Phuong trinh vo nghiem\n");
        } else {
            float x = -c / b;
            printf("Nghiem cua phuong trinh: x = %.2f\n", x);
        }
    } else {
        float delta = b * b - 4 * a * c;
        if (delta < 0)
            printf("Phuong trinh vo nghiem\n");
        else if (delta == 0) {
            float x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x);
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
}

// Menu chương trình
int main() {
    int chon;
    do {
        printf("\n===== MENU CHUONG TRINH =====\n");
        printf("1. Tinh hoc luc\n");
        printf("2. Giai phuong trinh bac nhat\n");
        printf("3. Giai phuong trinh bac hai\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1: tinhHocLuc(); break;
            case 2: giaiPTBacNhat(); break;
            case 3: giaiPTBacHai(); break;
            case 0: printf("Tam biet!\n"); break;
            default: printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (chon != 0);

    return 0;
}
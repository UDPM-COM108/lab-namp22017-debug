#include <stdio.h>
#include <math.h>
#include <stdlib.h>
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

// Bài 4: Tính tiền điện theo bậc
void tinhTienDien() {
    float soDien, tien = 0;
    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%f", &soDien);

    if (soDien <= 50)
        tien = soDien * 1.678;
    else if (soDien <= 100)
        tien = 50 * 1.678 + (soDien - 50) * 1.734;
    else if (soDien <= 200)
        tien = 50 * 1.678 + 50 * 1.734 + (soDien - 100) * 2.014;
    else if (soDien <= 300)
        tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (soDien - 200) * 2.536;
    else if (soDien <= 400)
        tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (soDien - 300) * 2.834;
    else
        tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (soDien - 400) * 2.927;

    printf("Tien dien phai tra: %.2f VND\n", tien);
}

// Menu chương trình
int main() {
    int luachon;
    do {
        printf("\n Chọn chương trình tính toán\n");
        printf("1. Tính học lực\n");
        printf("2. Giải phương trình bậc nhất\n");
        printf("3. Giải phương trình bậc hai\n");
        printf("4. Tính tiền điện\n");
        printf("0. Thoat\n");
        printf("Mời bạn nhập lựa chọn: ");
        scanf("%d", &luachon);

        switch (luachon) {
            case 1: tinhHocLuc(); break;
            case 2: giaiPTBacNhat(); break;
            case 3: giaiPTBacHai(); break;
            case 4: tinhTienDien(); break;
            case 0: printf("Chương trình kết thúc!\n"); break;
            default: printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (luachon != 0);

    return 0;
}
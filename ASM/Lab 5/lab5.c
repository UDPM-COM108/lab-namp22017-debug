#include <stdio.h>
#include <stdbool.h>

// Bài 1: Tìm giá trị lớn nhất, nhỏ nhất trong 3 số
void bai1() {
    int a, b, c;
    printf("Nhap 3 so bat ky: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    printf("So lon nhat: %d\n", max);
    printf("So nho nhat: %d\n", min);
}

// Bài 2: Kiểm tra năm nhuận
void bai2() {
    int year;
    printf("Nhap vao nam: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d la nam nhuan.\n", year);
    } else {
        printf("%d khong phai la nam nhuan.\n", year);
    }
}

// Bài 3: Kiểm tra số chia hết cho 5 và 9
void bai3() {
    int number;
    printf("Nhap mot so trong khoang [1, 1000]: ");
    scanf("%d", &number);

    if (number < 1 || number > 1000) {
        printf("So khong nam trong khoang hop le.\n");
    } else {
        if (number % 5 == 0 && number % 9 == 0) {
            printf("%d chia het cho ca 5 va 9.\n", number);
        } else {
            printf("%d KHONG chia het cho ca 5 va 9.\n", number);
        }
    }
}

int main() {
    int choice;

    do {
        printf("\nMENU CHUONG TRINH\n");
        printf("1. Tim so lon nhat, nho nhat trong 3 so\n");
        printf("2. Kiem tra nam nhuan\n");
        printf("3. Kiem tra so chia het cho 5 va 9\n");
        printf("0. Thoat chuong trinh\n");
        printf("Chon mot chuc nang (0-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bai1();
                break;
            case 2:
                bai2();
                break;
            case 3:
                bai3();
                break;
            case 0:
                printf("Ket thuc chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 0);

    return 0;
}
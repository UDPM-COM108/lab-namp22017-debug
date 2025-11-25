#include <stdio.h>
#include <math.h>

// Bài 1: Trung bình các số chia hết cho 2
void bai1() {
    int a[20], i, count = 0;
    float tong = 0, trungBinh = 0;

    printf("\nNhap 20 so nguyen:\n");
    for (i = 0; i < 20; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0) {
            tong += a[i];
            count++;
        }
    }

    if (count > 0) {
        trungBinh = tong / count;
        printf("Trung binh cac so chia het cho 2 la: %.2f\n", trungBinh);
    } else {
        printf("Khong co so nao chia het cho 2.\n");
    }
}

// Bài 2: Kiểm tra số nguyên tố
void bai2() {
    int x, i, count = 0;
    printf("\nNhap mot so nguyen: ");
    scanf("%d", &x);

    for (i = 1; i <= x; i++) {
        if (x % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("%d la so nguyen to.\n", x);
    } else {
        printf("%d khong phai la so nguyen to.\n", x);
    }
}

// Bài 3: Kiểm tra số chính phương
void bai3() {
    int x;
    printf("\nNhap mot so nguyen: ");
    scanf("%d", &x);

    int i, isPerfectSquare = 0;
    for (i = 1; i * i <= x; i++) {
        if (i * i == x) {
            isPerfectSquare = 1;
            break;
        }
    }

    if (isPerfectSquare) {
        printf("%d la so chinh phuong.\n", x);
    } else {
        printf("%d khong phai la so chinh phuong.\n", x);
    }
}

// Bài 4: Menu chương trình
int main() {
    int choice;

    do {
        printf("\n===== MENU CHUONG TRINH =====\n");
        printf("1. Bai 1: Trung binh cac so chia het cho 2\n");
        printf("2. Bai 2: Kiem tra so nguyen to\n");
        printf("3. Bai 3: Kiem tra so chinh phuong\n");
        printf("4. Thoat\n");
        printf("Nhap lua chon cua ban (1-4): ");
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
            case 4:
                printf("Cam on ban da su dung chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 4);

    return 0;
}
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void chucNang1() {
    int x;
    printf("Nhap so nguyen x: ");
    scanf("%d", &x);
    printf("So %d la so nguyen.\n", x);
    int isPrime = 1;
    if (x < 2) isPrime = 0;
    else {
        for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    printf("So %d %s la so nguyen to.\n", x, isPrime ? " " : "khong");
    int k = sqrt(x);
    printf("So %d %s la so chinh phuong.\n", x, (k * k == x) ? " " : "khong");
}

int UCLN(int a, int b) {
    while (b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int BCNN(int a, int b) {
    return (a * b) / UCLN(a, b);
}

void chucNang2() {
    int a, b;
    printf("Nhap 2 so nguyen: ");
    scanf("%d%d", &a, &b);

    printf("Uoc chung lon nhat: %d\n", UCLN(a, b));
    printf("Boi so chung nho nhat: %d\n", BCNN(a, b));
}

void chucNang3() {
    int start, end;
    printf("Nhap gio bat dau: ");
    scanf("%d", &start);
    printf("Nhap gio ket thuc: ");
    scanf("%d", &end);

    if (start < 12 || end > 23 || start >= end) {
        printf("Gio khong hop le!\n");
        return;
    }

    int hours = end - start;
    int first3 = (hours >= 3) ? 3 : hours;
    int remain = (hours > 3) ? hours - 3 : 0;

    double money = first3 * 150000 + remain * 150000 * 0.7;

    if (start >= 14 && start <= 17) {
        money *= 0.9;
    }

    printf("Tong tien thanh toan: %.0f VND\n", money);
}

void chucNang4() {
    int kwh;
    printf("Nhap so kWh su dung: ");
    scanf("%d", &kwh);

    double total = 0;

    if (kwh <= 50) total = kwh * 1.678;
    else if (kwh <= 100) total = 50*1.678 + (kwh-50)*1.734;
    else if (kwh <= 200) total = 50*1.678 + 50*1.734 + (kwh-100)*2.014;
    else if (kwh <= 300) total = 50*1.678 + 50*1.734 + 100*2.014 + (kwh-200)*2.536;
    else if (kwh <= 400) total = 50*1.678 + 50*1.734 + 100*2.014 + 100*2.536 + (kwh-300)*2.834;
    else total = 50*1.678 + 50*1.734 + 100*2.014 + 100*2.536 + 100*2.834 + (kwh-400)*2.927;

    printf("So tien dien phai tra: %.0f VND\n", total);
}

int main() {
    int choice;

    do {
        printf("\nMenu\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim UCLN - BCNN\n");
        printf("3. Tinh tien Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("0. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: chucNang1(); break;
            case 2: chucNang2(); break;
            case 3: chucNang3(); break;
            case 4: chucNang4(); break;
            case 0: break;
            default: printf("Lua chon sai!\n");
        }

    } while (choice != 0);

    return 0;
}

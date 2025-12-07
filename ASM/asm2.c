#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
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
void chucNang5() {
    int menhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int money;

    printf("Nhap so tien can doi: ");
    scanf("%d", &money);

    for (int i = 0; i < 9; i++) {
        int count = money / menhGia[i];
        if (count > 0) {
            printf("%d to %d\n", count, menhGia[i]);
            money %= menhGia[i];
        }
    }
}

void chucNang6() {
    long long tienVay;
    printf("Nhap so tien vay: ");
    scanf("%lld", &tienVay);

    long long gocThang = tienVay / 12;
    long long conLai = tienVay;

    printf("\nKy | Lai | Goc | Tong | Con lai\n");

    for (int i = 1; i <= 12; i++) {
        long long lai = conLai * 5 / 100;
        long long tong = lai + gocThang;
        conLai -= gocThang;

        printf("%2d | %lld | %lld | %lld | %lld\n", i, lai, gocThang, tong, conLai);
    }
}

struct SinhVien {
    char ten[50];
    double diem;
    char hocLuc[20];
};

void xepHocLuc(struct SinhVien *sv) {
    if (sv->diem >= 9) strcpy(sv->hocLuc, "Xuat sac");
    else if (sv->diem >= 8) strcpy(sv->hocLuc, "Gioi");
    else if (sv->diem >= 6.5) strcpy(sv->hocLuc, "Kha");
    else if (sv->diem >= 5) strcpy(sv->hocLuc, "Trung binh");
    else strcpy(sv->hocLuc, "Yeu");
}

void chucNang7() { //là chức năng 8 của bài asm
    int n;
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);

    struct SinhVien sv[n];
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Nhap ten: ");
        fgets(sv[i].ten, 50, stdin);
        sv[i].ten[strcspn(sv[i].ten, "\n")] = '\0';

        printf("Nhap diem: ");
        scanf("%lf", &sv[i].diem);
        getchar();

        xepHocLuc(&sv[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sv[i].diem < sv[j].diem) {
                struct SinhVien tmp = sv[i];
                sv[i] = sv[j];
                sv[j] = tmp;
            }
        }
    }

    printf("Danh sach sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %.2lf - %s\n", sv[i].ten, sv[i].diem, sv[i].hocLuc);
    }
}

void chucNang8() { //là chức năng 10 của bài asm
    float a, b, c, d;

    printf("Nhap phan so 1 (a b): ");
    scanf("%f %f", &a, &b);

    printf("Nhap phan so 2 (c d): ");
    scanf("%f %f", &c, &d);

    printf("Tong = %.2f\n", a/b + c/d);
    printf("Hieu = %.2f\n", a/b - c/d);
    printf("Tich = %.2f\n", (a/b) * (c/d));
    printf("Thuong = %.2f\n", (a/b) / (c/d));
}

int main() {
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim UCLN & BCNN\n");
        printf("3. Tinh tien Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Tinh tien vay 12 thang\n");
        printf("7. Sap xep thong tin sinh vien\n");
        printf("8. Tinh toan phan so\n");
        printf("0. Thoat\n");

        printf("Lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: chucNang1(); break;
            case 2: chucNang2(); break;
            case 3: chucNang3(); break;
            case 4: chucNang4(); break;
            case 5: chucNang5(); break;
            case 6: chucNang6(); break;
            case 7: chucNang7(); break;
            case 8: chucNang8(); break;
            case 0: break;
            default: printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

    return 0;
}
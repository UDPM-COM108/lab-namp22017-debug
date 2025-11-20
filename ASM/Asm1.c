#include <stdio.h>

void chucNang1() {
    int x;
    printf("\n[1] Nhap so nguyen x: ");
    scanf("%d", &x);
}

void chucNang2() {
    int x, y;
    printf("\n[2] Nhap hai so nguyen x va y:\n");
    printf("Nhap x: "); scanf("%d", &x);
    printf("Nhap y: "); scanf("%d", &y);
}

void chucNang3() {
    int gioBD, gioKT;
    printf("\n[3] Nhap gio bat dau (12–23): ");
    scanf("%d", &gioBD);
    printf("Nhap gio ket thuc (12–23): ");
    scanf("%d", &gioKT);
}

void chucNang4() {
    int kwh;
    printf("\n[4] Nhap so kWh dien su dung: ");
    scanf("%d", &kwh);
}

void chucNang5() {
    int tien;
    printf("\n[5] Nhap so tien can doi: ");
    scanf("%d", &tien);
}

void chucNang6() {
    int tienVay;
    printf("\n[6] Nhap so tien muon vay: ");
    scanf("%d", &tienVay);
}

void chucNang7() {
    int phanTramVay;
    printf("\n[7] Nhap phan tram vay toi da (vi du: 80): ");
    scanf("%d", &phanTramVay);
}

void chucNang8() {
    char ten[50];
    float diem;
    printf("\n[8] Nhap ho ten sinh vien: ");
    scanf(" %[^\n]", ten);
    printf("Nhap diem: ");
    scanf("%f", &diem);
}

void chucNang9() {
    int so1, so2;
    printf("\n[9] Nhap 2 so tu 01–15:\n");
    printf("So thu nhat: "); scanf("%d", &so1);
    printf("So thu hai: "); scanf("%d", &so2);
}

void chucNang10() {
    int tu1, mau1, tu2, mau2;
    printf("\n[10] Nhap phan so thu nhat (tu/mau):\n");
    printf("Tu: "); scanf("%d", &tu1);
    printf("Mau: "); scanf("%d", &mau1);
    printf("Nhap phan so thu hai (tu/mau):\n");
    printf("Tu: "); scanf("%d", &tu2);
    printf("Mau: "); scanf("%d", &mau2);
}

void menu() {
    printf("\nMENU CHUONG TRINH\n");
    printf("1. Kiem tra so nguyen\n");
    printf("2. Uoc chung & Boi chung\n");
    printf("3. Tinh tien Karaoke\n");
    printf("4. Tinh tien dien\n");
    printf("5. Doi menh gia tien\n");
    printf("6. Tinh lai vay ngan hang\n");
    printf("7. Vay mua xe\n");
    printf("8. Sap xep sinh vien\n");
    printf("9. Game FPOLY-LOTT\n");
    printf("10. Tinh toan phan so\n");
    printf("0. Thoat\n");
}

int main() {
    int chon;
    do {
        menu();
        printf("Nhap lua chon: ");
        scanf("%d", &chon);
        switch (chon) {
            case 1: chucNang1(); break;
            case 2: chucNang2(); break;
            case 3: chucNang3(); break;
            case 4: chucNang4(); break;
            case 5: chucNang5(); break;
            case 6: chucNang6(); break;
            case 7: chucNang7(); break;
            case 8: chucNang8(); break;
            case 9: chucNang9(); break;
            case 10: chucNang10(); break;
            case 0: printf("Ket thuc chuong trinh!\n"); break;
            default: printf("Lua chon khong hop le.\n");
        }
    } while (chon != 0);
    return 0;
}

#include <stdio.h>
#define PI 3.14 
#include <math.h>1
//bài 1: Tính tổng hiệu hai số nguyên
int main() {
    int x, y;
    printf("Nhap so nguyen x: ");
    scanf("%d", &x);
    printf("Nhap so nguyen y: ");
    scanf("%d", &y);

    int tong = x + y;
    int hieu = x - y;

    printf("Tong hai so la: %d\n", tong);
    printf("Hieu hai so la: %d\n", hieu);

//Bài 2:Tính chu vi và diện tích hình chữ nhật
   float cdai, crong;
    printf("Nhap chieu dai: ");
    scanf("%f", &cdai);
    printf("Nhap chieu rong: ");
    scanf("%f", &crong);

    float chuvi = 2 * (cdai + crong);
    float dientich = cdai * crong;

    printf("Chu vi hinh chu nhat la: %.2f\n", chuvi);
    printf("Dien tich hinh chu nhat la: %.2f\n", dientich);

//Bài 3:XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
    float r;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);

    float chuviHT = 2 * PI * r;
    float dientichHT = PI * r * r;

    printf("Chu vi hinh tron la: %.2f\n", chuviHT);
    printf("Dien tich hinh tron la: %.2f\n", dientichHT);
//Bài 4:xây dựng chương trình tính điểm trung bình
    float toan, ly, hoa;
    float diem_trung_binh;

    // Nhập điểm từ bàn phím
    printf("Nhap diem mon Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem mon Ly: ");
    scanf("%f", &ly);

    printf("Nhap diem mon Hoa: ");
    scanf("%f", &hoa);

    // Tính điểm trung bình có trọng số
    diem_trung_binh = (toan * 3 + ly * 2 + hoa * 1) / (3 + 2 + 1);

    // Hiển thị kết quả
    printf("Diem trung binh cua ban la: %.2f\n", diem_trung_binh);
//bÀI 5: TÍNH CHU VI DIỆN TÍCH TAM GIÁC VUÔNG ABC
    float AB, AC, BC;
    float chu_vi, dien_tich;
    // Nhập độ dài hai cạnh góc vuông
    printf("Nhap do dai canh AB: ");
    scanf("%f", &AB);
    printf("Nhap do dai canh AC: ");
    scanf("%f", &AC);
    // Tính cạnh huyền BC theo định lý Pythagoras
    BC = sqrt(AB * AB + AC * AC);
    // Tính chu vi
    chu_vi = AB + AC + BC;
    // Tính diện tích
    dien_tich = 0.5 * AB * AC;
    // Hiển thị kết quả
    printf("Chu vi tam giac vuong ABC la: %.2f\n", chu_vi);
    printf("Dien tich tam giac vuong ABC la: %.2f\n", dien_tich);

    return 0;
}

#include <stdio.h>

int main(){
    float a, b, nhan, chia;
    printf("Nhap vao so thuc: " );
    scanf("%f %f" , &a, &b);
    printf("Xuat ra hai so thuc: %f %f",a,b);
    nhan = a * b;
    chia = a/b;
    printf("\nnhan hai  so thuc: %.2f", nhan);
    printf("\nchia hai so thuc: %.2f", chia);
    return 0;
}

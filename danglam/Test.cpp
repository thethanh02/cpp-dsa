#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct SinhVien {
    char Masv[50], Hoten[50];
    int tongdiem;
};
int maxi;
void nhap(struct SinhVien &a) {
    fgets(a.Masv, 50, stdin);
    fgets(a.Hoten, 50, stdin);
    scanf("%d", &a.tongdiem);
    if (a.tongdiem > maxi) maxi = a.tongdiem;
}
void in(struct SinhVien a) {
    printf("Ma sv: %s\nHo ten: %s\nTong diem: %d\n", a.Masv, a.Hoten, a.tongdiem);
}
int main() {
    int n;
    scanf("%d" , &n);
    struct SinhVien a[n];
    maxi = 0;
    for (int i = 0; i < n; i++) {
    	scanf("\n");
    	nhap(a[i]);
    }
    printf("Sv co tong diem cao nhat:\n");
    for (int i = 0; i < n; i++) {
        if (a[i].tongdiem == maxi) in(a[i]);
    }
    printf("Danh sach sv do:\n");
    for (int i = 0; i < n; i++) {
        if (a[i].tongdiem >= 17) in(a[i]);
    }
    return 0;
}
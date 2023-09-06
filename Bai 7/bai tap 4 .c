#include <stdio.h>
int main() {
    int Diem_So;
    printf("nhap diem so : ");
    scanf("%d", &Diem_So);
    {
        if (Diem_So >= 75)
            printf("Ban thuoc loai A");
        else if (60 <= Diem_So && Diem_So < 75)
            printf("Ban thuoc loai B");
        else if (45 <= Diem_So && Diem_So< 60)
            printf("Ban thuoc loai C");
        else if (35 <= Diem_So && Diem_So < 45)
            printf("Ban thuoc loai D");

     else
        printf("Ban bi loai");}
}
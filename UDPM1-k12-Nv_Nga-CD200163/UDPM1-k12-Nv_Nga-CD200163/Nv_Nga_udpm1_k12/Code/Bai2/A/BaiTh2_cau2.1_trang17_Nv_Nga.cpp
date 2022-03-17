/*Nhap vao mot so co 3 chu so trong khoang 111-999. kiem tra xem do co thoa man tong lap phuong cua chinh no ko*/
#include<stdio.h>
#include<math.h>

int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163");
    int x;
    printf("nhap 1 so tu 100 den 999 : ");
    scanf("%d", &x);
    int a=x/100, b=(x%100)/10, c=x%10;
    if(pow(a,3)+ pow(b,3)+ pow(c,3)==x)
    printf("\n %d la so tong lap phuong", x);
    else
    printf("\n %d ko phai la so tong lap phuong", x);
    return 0;

}

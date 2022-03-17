/*nhap 3 so x,y,z xem do co phai day cap so cong hay ko*/
#include<stdio.h>
#include<conio.h>
int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
	int x, y, z;
    printf("nhap 3 so x y z =");
    scanf("%d \t %d \t %d", &x, &y, &z);
    if((x+z)/2==y)
    printf("ba so da cho tao thanh cap so cong");
    else
    printf("ba so da cho khong thoa man tinh chat");
	getch();
}


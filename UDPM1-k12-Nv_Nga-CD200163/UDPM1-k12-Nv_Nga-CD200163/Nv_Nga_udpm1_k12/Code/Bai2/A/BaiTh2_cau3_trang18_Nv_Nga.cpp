/*nhap diem trung binh va xep loai hs */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
	 float diemtb;
    printf("nhap so diem TB =");
    scanf("%f", &diemtb);
    if(diemtb>=8.0)
    printf("\nloai gioi");
    else if(diemtb>=6.5&&diemtb<=7.9)
    printf("\nloai kha");
    else if(diemtb>=5.0&&diemtb<=6.4)
    printf("\nloai trung binh");
    else
    printf("\nloai yeu");
	getch();
}


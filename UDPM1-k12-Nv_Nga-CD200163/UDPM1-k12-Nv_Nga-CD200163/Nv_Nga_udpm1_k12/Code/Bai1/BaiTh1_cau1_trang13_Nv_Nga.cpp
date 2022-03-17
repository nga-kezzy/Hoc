/* nhap vao gia tri x bat ky. roi tinh gia tri theo bieu thuc sau y=X^3+sin2.5-1.8 */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    puts("Nguyen_Van_Nga_udpm1-k12_CD200163");
	float x;
		printf("\nNhap x = ");
        scanf("%f",&x);
        printf("Y = x^3 + sin2.5x -1..68= %6.2f",(x*x*x)+sin(2.5)*x -1.68);
	getch();
}


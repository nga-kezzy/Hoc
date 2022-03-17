/*viet chuong trinh nhap so nguyen co 3 chu so,
hien chu so hang tram, hang chuc, hang don vi */
#include<stdio.h>
#include<conio.h>
int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163");
	int x;
	printf("\n Nhap so nguyen gom 3 chu so =");
	scanf("%d",&x);
	
	printf("\n Chu so hang tram la: %d", x/100);
	printf("\n Chu so hang chuc la: %d", x%100/10);
	printf("\n Chu so hang don vi la: %d", x%10);
	getch();
}


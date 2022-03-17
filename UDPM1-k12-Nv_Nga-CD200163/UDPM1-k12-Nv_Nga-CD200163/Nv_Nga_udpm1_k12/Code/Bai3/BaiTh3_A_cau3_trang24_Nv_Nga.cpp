// viet ham tinh trung binh cong cua 2 so
#include<stdio.h>
#include<conio.h>
#include<math.h>

// ham tinh trung binh cua hai so
float TB(int a, int b){
	float TB;
	TB = (float)(a+b) / 2;
	return TB;
}
int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
	
	int a, b;
	
	printf("Nhap a =");
	scanf("%d",&a);
	
	printf("Nhap b =");
	scanf("%d",&b);
	
	printf("trung binh cua hai so = %.1f",TB(a,b));

	getch();
}


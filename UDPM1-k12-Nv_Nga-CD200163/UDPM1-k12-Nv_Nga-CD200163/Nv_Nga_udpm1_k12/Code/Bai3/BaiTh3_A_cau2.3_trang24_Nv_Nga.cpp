// viet ham tinh chu vi cua tam giac
#include<stdio.h>
#include<conio.h>
#include<math.h>

// ham tinh chu vi cua tam giac
float p(float a, float b, float c){
	float p;
	p = a + b + c;
	return p;
}

int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
	
		float a, b, c;
	
	printf("Nhap a =");
	scanf("%f",&a);
	
	printf("Nhap b =");
	scanf("%f",&b);
	
	printf("Nhap c =");
	scanf("%f",&c);
	
	if(a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && c + a > b)
	printf("chu vi cua tam giac la: %.2f cm",p(a,b,c));
	
	else
	printf("Do khong phai la do dai 3 canh cau tam giac !");
	
	getch();
}


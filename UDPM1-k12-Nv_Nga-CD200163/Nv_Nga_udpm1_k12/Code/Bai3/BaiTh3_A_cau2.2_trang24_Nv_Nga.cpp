//viet ham tinh dien tich cua 1 tam giac, khi biet do dai cua 1 tam giac do
#include<stdio.h>
#include<conio.h>
#include<math.h>

// ham tinh chu vi cua tam giac
float p(float a, float b, float c){
	float p;
	p = a + b + c;
	return p;
}

//ham tinh dien tich cua tam giac
float s(float a, float b, float c){
	float s, x;
	x=p(a,b,c);

	s =sqrt(x*(x-a)*(x-b)*(x-c));
	return s;
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
	{
		p(a, b, c);
		printf("Dien tich cua tam giac = %6.2f cm2", s(a, b, c));
	}
	else
	printf("Do khong phai la do dai 3 canh cau tam giac !");
	getch();
}


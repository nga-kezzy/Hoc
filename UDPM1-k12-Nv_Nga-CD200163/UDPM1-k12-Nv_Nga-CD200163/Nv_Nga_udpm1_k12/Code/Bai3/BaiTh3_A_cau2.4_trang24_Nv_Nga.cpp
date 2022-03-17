// viet ham tinh so lon nhat cua 3 so
#include<stdio.h>
#include<conio.h>
#include<math.h>

// ham tim so lon nhat
float max(float a, float b, float c){
	float max;
	max = a;
	if(b > max)
		max = b;
	if(c > max)
		max = c;
	
	return max;
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

	printf("so lon nhat la: %.2f", max(a,b,c));
	getch();
}


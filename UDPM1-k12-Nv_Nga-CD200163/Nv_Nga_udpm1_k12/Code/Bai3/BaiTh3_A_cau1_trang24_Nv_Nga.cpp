#include<stdio.h>
#include<conio.h>
#include<math.h>

//khai bao ham tinh tong so nguyen
int tong(int x, int y){
	int z;
	z= x + y;
	return z;
}

int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
	int x, y;
	
	printf("nhap x =");
	scanf("%d",&x);
	
	printf("nhap y =");
	scanf("%d",&y);
	
	printf("\n%d + %d = %d",x,y,tong(x,y));

	getch();
}


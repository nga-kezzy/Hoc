/*
- nhap mot xau ky tu co do dai koo qua 40 yeu cau kiem  tra do dai xau
- chuyen xau vua nhap ve chu hoa va hien lai
- hien l?i xau theo thu tu nguoc lai
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
	
	char xau[40];
	printf("nhap chuoi cac ky tu:");
	do{
		gets(xau);
		if(strlen(xau)>40)
		printf("xau dai qua nhap lai! =");
		else if(strlen(xau)<=0)
		printf("xau ngan qua nhap lai ! =");
	}while( strlen(xau)>40 || strlen(xau) <= 0 );
	
	printf("xau vua nhap la: %s",xau);
	printf("\nchuyen xau ve chu hoa : %s",strupr(xau));
	printf("\ndao nguoc xau : %s",strrev(xau));
	
	getch();
}


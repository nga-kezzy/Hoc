
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
	int n;
	printf("Nhap n= ");
	do{
		scanf("%d",&n);
		if(n < 3 || n > 30)
		printf("Sai roi! Nhap lai n =");
	}while(n < 3 || n > 30);
	
	struct sinh_vien{
		char ma_sv[10];
		char ho_ten[25];
		float diem;
	};
	struct sinh_vien sv[n];
	for(int i = 0; i < n; i++ ){
		float diem_thi;
		char str[25];
		printf("Nhap thong tin sv thu %d\n",i+1);
		
		printf("\nMa sv:"); fflush(stdin);
		gets(str); strcpy(sv[i].ma_sv,str);
		
		printf("Ho va ten:"); fflush(stdin);
		gets(str); strcpy(sv[i].ho_ten,str);
		
		printf("Diem thi:");
		scanf("%f",&diem_thi);
		sv[i].diem=diem_thi;
	}
	
	puts("THONG TIN VE CAC SV");
	printf("\n%-5s%-10s%-25s %-10s","STT", "MSSV", "Ho Ten", "Diem");
	for(int i = 0; i < n; i++ ){
		printf("\n%-5d%-10s%-25s %-3.1f",i+1,sv[i].ma_sv, sv[i].ho_ten, sv[i].diem);
	}
	
	getch();
}


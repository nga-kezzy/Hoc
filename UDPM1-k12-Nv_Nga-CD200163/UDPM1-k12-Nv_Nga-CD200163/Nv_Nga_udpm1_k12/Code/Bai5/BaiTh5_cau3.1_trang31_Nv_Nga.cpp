/*
- Nhap 1 so nguyen duong n thoa man dk 5<= n <=20
- nhap thong tin cua n sinh vien moi sv gom cac tt sau 
	+ ho va ten(ko qua 30 ky tu)
	+ diem thi mon thhu nhat
	+ diem thi mon thu 2
*/
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
		if(n < 5 || n > 20)
		printf("Sai roi! Nhap lai n =");
	}while(n < 5 || n > 20);
	
	struct sinh_vien{
	
		char ho_ten[25];
		float diem1,diem2;
	};
	struct sinh_vien sv[n];
	for(int i = 0; i < n; i++ ){
		float diem_thi1, diem_thi2;
		char str[25];
		printf("Nhap thong tin sv thu %d\n",i+1);
		
		printf("Ho va ten:"); fflush(stdin);
		gets(str); strcpy(sv[i].ho_ten,str);
		
		printf("Diem thi:");
		scanf("%f",&diem_thi1);
		sv[i].diem1=diem_thi1;
		
		printf("Diem thi:");
		scanf("%f",&diem_thi2);
		sv[i].diem2 =diem_thi2;
	}
	
	puts("THONG TIN VE CAC SV");
	printf("\n%-5s%-25s %-10s %-10s","STT", "Ho Ten", "Diem 1", "Diem 2");
	for(int i = 0; i < n; i++ ){
		printf("\n%-5d%-25s %-10.1f %-3.1f",i+1, sv[i].ho_ten, sv[i].diem1, sv[i].diem2);
	}
	getch();
}


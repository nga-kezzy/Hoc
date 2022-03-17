/*
- nhap 1 so nguyen N sao cho 4 <= N <=30
- nhap N so thhuc luu vao mang T
- Hien mang T 6 phan tu tren 1 dong moi  phan tu chiem 5 vitri voi 2 so le
- Tinh tong cacs pt cua mang T co gtri -3 < T[i] <= 6
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void nhapmang(int n, float T[]){
	for(int i = 0; i < n; i++){
		printf("\nnhap pt so %d =", i+1);
		scanf("%f",&T[i]);
	}
}

void xuatmang(int n, float T[]){
	printf("\n Mang vua nhap la:\n");
	for(int i = 0; i < n; i++){
		printf("%5.2f\t",T[i]);
		if((i + 1) % 6 == 0)
		printf("\n");
	}
}

float tong(int n, float T[]){
	float tong = 0;
	for(int i = 0; i < n; i++){
		if(T[i] > -3 && T[i] < 7)
		tong+= T[i];
	}
	return tong;
}
int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
	
	int n;
	printf("Nhap n trong khoang (4 --> 30)=");
	do{
		scanf("%d",&n);
		if(n < 4 || n > 30)
		printf("sai roi ! nhap lai :");
	}while(n < 4 || n > 30);
	float T[n];
	
	nhapmang(n,T);
	xuatmang(n,T);
	printf("\nTong cac pt cua mang T[%d] co gtri tu -3 < T[i] <= 6 la : %.2f", n, tong(n,T));
	
	getch();
}


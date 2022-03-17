// Nhap so nguyen tu ban phim thoa man dk 3<= n <= 30
// nhap so nguyen n luu vao mang A
//hien lai mang vua nhap 6 phan tu tren 1 hang, moi phan  tu chiem 4 vi tri
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
	
	int n, A[30], dem =0;
	printf(" nhap n =");
	do{
		scanf("%d",&n);
		if(n <3 || n > 30)
		printf("Nhap lai! chu y dieu kien cua n =");
	}
	while(n <3 || n > 30);
	
	//nhap mang
	for(int i = 0;i<=n;i++)
		{
			printf("\n A[%d] =",i);
			scanf(" %d", &A[i]);
		}
		
	// hien mang
	printf("\n mang du lieu vua nhap la:\n");
	for(int i=0;i<=n;i++){
		if(i % 6 ==0)
		printf("\n%4d",A[i]);
		else
		printf(" %4d",A[i]);
		
	}
	// tinh gia tri trung binh
	float TB, sum = 0;
	for(int i=0;i<=n;i++){
		sum = +A[i];
	}
	TB = sum/2;
	printf("\nGIA TRI TRUNG BINH CAU MANG A LA: %.2f",TB);
	
	// dem so pt trong A lon hon gtri TB
	printf("\n");
	printf("\ncac pt cua A lon hon TB la:");
	for(int i=0;i<=n;i++){
		if(A[i]>TB)
		printf("%d\t",A[i]);
	}

	getch();
}


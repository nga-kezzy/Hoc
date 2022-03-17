#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
	
	int n, A[38];
	printf("Nhap n=");
	do{
		scanf("%d",&n);
		if(n<4 || n>38)
		printf("Nhap lai n =");
	}
	while(n<4 || n>38);
	
	// nhap mang
	for(int i=0;i<n;i++){
		printf("A[%d] =",i);
		scanf("\n%d",&A[i]);
	}
	//so pt chia het  cho 5
	printf("\nso pt chia het cho 5 la:\t");
	for(int i=0;i<n;i++){
		if(A[i]%5==0){
			printf("%d\t",A[i]);
		}
	}
	getch();
}


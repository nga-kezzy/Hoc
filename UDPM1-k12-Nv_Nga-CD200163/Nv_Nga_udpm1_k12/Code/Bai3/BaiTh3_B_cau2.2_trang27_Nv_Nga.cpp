/* nhap 1 so nguyen n thoa man dk 4<= n <= 26
nhsp n do thuc luu vso msng x
tinh gtri tb cua mang x luu vao bien TB
dem so pt  trong  x co gtri > TB
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
	
	int n;
	float X[26],TB;
	
	printf("Nhap n =");
	do{
		scanf("%d",&n);
		if(n<4 || n>26)
		printf("Nhap lai n =");
	}
	while(n<4 || n>26);
	
	// Nhap mang
	for(int i=0;i<n;i++){
		printf("\nX[%d] =",i);
		scanf("%f", &X[i]);
	}
	float sum=0;
	//tinh gtri trung binh cua mang
	for(int i=0;i<n;i++){
		sum+=X[i];
	}
	TB= sum/n;
	printf("GIA TRI TRUNG BINH CUA MANG LA: %.2f",TB);
	
	printf("\ncac pt cua mang X lon hon TB la:");
	for(int i = 0; i < n; i++){
		if(X[i]>TB){
			printf("%.2f\t", X[i]);
		}
	}
	
	getch();
}


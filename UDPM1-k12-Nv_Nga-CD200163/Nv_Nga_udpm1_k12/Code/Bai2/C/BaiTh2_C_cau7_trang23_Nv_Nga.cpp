// nhap 1 so nguyen roi tinh giai thua so do
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
	 int n, s=1;
    printf("nhap n =");
    scanf("%d", &n);
    for(int i=2;i<=n;i++)
    s*=i;
    printf("%d! = %d",n,s);
	getch();
}


//tinh tong cac so chan tu 1 den 100
#include<stdio.h>
#include<conio.h>

int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
    int s=0;
    for(int i=2; i<=100; i+=2){
    	s+=i;
    	printf("%4d",i);
    	if(i%20 ==0)
    	printf("\n");
	}
    printf("Tong cac so chan tu 1 - 100 = %d", s);
    getch ();
}


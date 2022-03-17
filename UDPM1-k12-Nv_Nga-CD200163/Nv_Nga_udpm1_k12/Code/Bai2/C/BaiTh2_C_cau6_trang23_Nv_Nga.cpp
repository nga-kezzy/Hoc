//tinh tong so co 3 chu so tu 100 den 999 chia het cho 5
#include<stdio.h>
#include<conio.h>
int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
    int s=0,i=100;
    do{
        s+=i;
        i+=5;
    }
    while(i<=999);
    printf("Tong cac so co 3 chu so chia het cho 5 la: %d",s);
    getch();
}

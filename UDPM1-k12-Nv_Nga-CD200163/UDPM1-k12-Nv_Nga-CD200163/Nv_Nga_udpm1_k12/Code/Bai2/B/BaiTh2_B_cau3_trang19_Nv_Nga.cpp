#include<stdio.h>
#include<conio.h>
int main() {
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
    int x;
    printf("nhap 1 so la thang trong nam 1-12 : \t");
    scanf("%d", &x);
    switch(x)
    {
        case 1:
        case 2:
        case 3: printf(" mua xuan"); break;
        case 4:
        case 5:
        case 6: printf(" mua ha"); break;
        case 7:
        case 8:
        case 9: printf(" mua thu"); break;
        case 10:
        case 11:
        case 12: printf(" mua dong"); break;
    }
    getch();   
}

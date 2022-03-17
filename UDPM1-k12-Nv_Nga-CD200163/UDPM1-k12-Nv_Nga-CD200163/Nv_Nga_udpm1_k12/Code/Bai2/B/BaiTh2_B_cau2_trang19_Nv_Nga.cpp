/*Go mot so tu mot den 9 roi doc chu so do*/
#include<stdio.h>
#include<conio.h>
int main() {
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
    int x;
    printf("nhap 1 so tu 0-9 :");
    scanf("%d", &x);
    switch(x)
    {
    	case 0: printf("\n Khong"); break;
        case 1: printf("\n Mot"); break;
        case 2: printf("\n Hai "); break;
        case 3: printf("\n Ba "); break;
        case 4: printf("\n Bon"); break;
        case 5: printf("\n Nam"); break;
        case 6: printf("\n Sau"); break;
        case 7: printf("\n Bay"); break;
        case 8: printf("\n Tam"); break;
        case 9: printf("\n Chin"); break;
        default: printf("\n Nhap khong dung");
    }
    getch();
}

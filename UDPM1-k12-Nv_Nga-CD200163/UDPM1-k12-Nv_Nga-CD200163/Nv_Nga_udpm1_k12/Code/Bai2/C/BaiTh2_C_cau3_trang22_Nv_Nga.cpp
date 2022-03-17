#include<stdio.h>
#include<conio.h>
int main (){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
    int a;
    printf("nhap diem thi : ");
    scanf("%d", &a);
    while (a<0 || a>10)
    {
        printf("\n Sai ! nhap lai :");
        scanf("%d", &a);
    }
    printf("\n so diem thi la : %d", a);
    getch ();
}

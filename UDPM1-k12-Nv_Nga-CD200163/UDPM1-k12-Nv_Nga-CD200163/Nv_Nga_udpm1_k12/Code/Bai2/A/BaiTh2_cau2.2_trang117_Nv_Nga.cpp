/*nhap vao mot ky tu k va kiem tra do co phai la chu hoa hay khong*/
#include<stdio.h>
#include<conio.h>
int main() {
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163");
    char k;
    printf("nhap vao mot ky tu :"); fflush(stdin);
    scanf("%c", &k);
    if(k<=90&&k>=66)
    printf("%c la chu cai hoa ", k);
    else
    printf("%c ko phai chu cai hoa",k);
    getch ();
}

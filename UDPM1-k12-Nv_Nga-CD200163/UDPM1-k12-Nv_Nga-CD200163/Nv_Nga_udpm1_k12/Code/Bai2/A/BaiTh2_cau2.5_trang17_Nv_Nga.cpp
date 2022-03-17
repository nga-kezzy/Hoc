/*viet ct giai va bien luan cua pt bac nhat*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
	float a, b, x;
    printf("nhap so a =");
    scanf("%f", &a);
    printf("nhap so b =");
    scanf("%f", &b);
    if(a==0){
        if(b==0)
        printf("\n pt co vo so nghiem");
        else
        printf("\n  pt vo nghiem");    
    }
    else
    printf("\n pt co nghiem duy nhat x = %.2f", -b/a);
	getch();
}



#include<stdio.h>
#include<conio.h>
#include<math.h>
float s(float a, float b, float c)
{
    float p=(a+b+c)/2;
    float s=sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}
int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
    float a, b, c, p;
    printf(" nhap do dai 3 canh cua tam giac = ");
    scanf("\n%f %f %f", &a, &b, &c);
    if(a>0&&b>0&&c>0&&a+b>c&&b+c>a&&c+a>b){	
    printf("\ndien tich tam giac = %.2f", s(a, b, c));
    }
    else
    printf("\nabc khoong phai do dai 3 canh cua tam giac");
    getch();

}


/*nhap ban kinh cua duong tron r. roi tinh chu vi va dien tich. */
#include<stdio.h>
#include<conio.h>
#include<math.h>

float chuvi(const float pi, float r){
    float chuvi = r * 2 * pi;
    return chuvi;
}

float dientich (const float pi, float r){
    float dientich = pi * pow(r, 2);
    return dientich;
}

int main (){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163");
    float r;
    const float pi = 3.1415;
  
    printf("\n nhap r = ");
    scanf("%f", &r);
    printf("\n chu vi hinh tron = %2.2f cm", chuvi(pi, r));
    printf("\n dien tich duong tron = %3.3f cm2", dientich(pi, r));
    getch();
}

/*cho 3 diem chuyen can, giua ky, cuoi ky
tinh diem mon hoc theo 3 diem tren */
#include<stdio.h>
#include<conio.h>

float TB(float Chuyencan, float Giuaky, float Cuoiky){
    float TB = Chuyencan*0.1 + Giuaky*0.3 + Cuoiky*0.6;
    return TB;
}

int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163");
    float Chuyencan,Giuaky,Cuoiky;
    
    printf("\nChuyen can = ");
    scanf("%f", &Chuyencan);
    printf("\nGiua ky = ");
    scanf("%f", &Giuaky);
    printf("\nCuoi Ky = ");
    scanf("%f",  &Cuoiky);
    printf("\nDiem TB mon hoc la : %.1f", TB(Chuyencan, Giuaky, Cuoiky));
    return 0;

}

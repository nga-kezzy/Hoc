/* - nhap so nguyen n sao cho 6 <= n <= 30
- nhap  n so thuc  luu vao mang G
- hien lai mang G 8 phan tu tren 1 dong  moi phan tuw chiem 6 vi tri voi 2 so le
- tinh gtri TB cua cua mang G
- dem so pt co trong G co gtri lon hown TB va hien ra ma hinh
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhapmang(int N, float G[]){
	for(int i = 0 ; i < N ; i++ ){
		printf("\nnhap pt so %d =",i+1);
		scanf("%f",&G[i]);
	}	
}

void hienmang(int N, float G[]){
	for(int i = 0 ; i < N ; i++ ){
		printf("%6.2f",G[i]);
		if((i+1) % 8 ==0){
			printf("\n");
		}
	}
}

float trungbinh(int N, float G[]){
	float TB = 0;
	for(int i = 0 ; i < N ; i++ ){
		TB += G[i];
 	}
 	return TB/N;
}

int soptlon(int N, int dem, float G[]){
	for(int i = 0 ; i < N ; i++ ){
		if(G[i] > trungbinh(N,G))
		dem++;
	}
	return dem;
}

int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
	
	int N, i, dem=0;
	
	printf("Nhap so N (6-->30) =");
	do{
		scanf("%d",&N);
		if(N < 6 || N >30)
		printf("nhap sai roi! nhap lai N=");
	}while(N < 6 || N >30);
	
float G[N];
	nhapmang(N,G);
	puts("\nmang vua nhap la :");
	hienmang(N,G);
	printf("\nSo pt lon hon gtri TB = %.2f la: %d",trungbinh(N,G),soptlon(N,dem,G));
	getch();
}
	

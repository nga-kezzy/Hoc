/* nhap các so nguye tu ban phim
ket thuc nhap khi du 30 phan tu hoac gtri nhap bang 0
xem co bn so chan vua nhap
hien ra man hinh ket qua
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");
	int X[30], i ;
	
	puts("nhap cac phan tu vao mang X la so nguyen\n");
// nhap mang x
	for(i = 0 ;i<30 ;i++){
		printf("pt so %d =",i+1);
		scanf("%d",&X[i]);
		if(X[i] == 0) break;
	}
// xem mang co bn phan tu la so chan va hien ra
puts("\ncac pt la so chan:");
	for(i = 0; i < 30; i++){
		if(X[i] % 2 == 0){
			if(X[i] == 0) break;
			printf("%d\t", X[i]);
		}
	}
	
	getch();
}


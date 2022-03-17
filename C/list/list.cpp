#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

struct list{
	int n; //  kich thuoc list
	int mgpt[MAX];
};

void init(list &l){
	l.n=0;
}

int empty(list l){
	return(l.n==0);
}

int full(list l){
	return(l.n>=MAX-1);
}

void duyet(list l){
	int i; printf("\n");
	for(i=0; i<l.n; i++){
		printf("%-5d", l.mgpt[i]);
	}
}

int them(list &l, int x, int k){
	int i;
	if(l.n>=MAX-1){
		printf("\n ds day");
		return 0;
	}
	else if(k<0 || k>l.n){
		printf("\n chi so ra ngoai khoang");
		return 0;
	}
	else{
		for(i= l.n-1; i>=k; i--){
			l.mgpt[i+1]=l.mgpt[i];
			l.mgpt[k]=x;
			l.n++;
			return 1;
		}
	}
	
}

int main(){
	puts("Nguyen_Van_Nga_udpm1-k12_CD200163\n");

	int so;
	list l; init(l);
	do{
		printf("\n cho mot so(so = 0 thi ket thuc): ");
		scanf("%d",&so);
		if(so) l.mgpt[(l.n)++]=so; // them so vao cuoi ds
	}while(so);
	
	duyet(l);
	int m;
	
	printf("\n cho so phan tu m =");
	scanf("%d", &m);
	
		printf("\n cho mot so = ");
		scanf("%d", &so);
		them(l,so,i);
	
	duyet(l);
	getch();
}


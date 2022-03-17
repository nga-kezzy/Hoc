#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define max 100

struct list{
	int data[max];
	int length;
};

void init(list &l){
	l.length=0;
}

int empty(list l){
	return (l.length==0);
}

int full(list l){
	return (l.length>= max-1);
}

void duyet(list l){
	for(int i=0;i<l.length;i++)
	printf(" %-5d",l.data[i]);
}

int search_list(list l, int x){
	int i=0, d=0;
	while(!d && (i<l.length))
	if(x==l.data[i]) d=1;
	else
	i++;
	if(d) return i+1;
	else return -1;
}

void delete_list(list l, int p){
	if(empty(l)){
		printf("\n empty list");
	}
	else if((p>0)&&(p<l.length)){
		for(int i=p+1; i<l.length; i++){
			l.data[i-1]=l.data[i];
			l.length--;
		}
		
	}
}
int main(){
	puts("explain :   tao DSTT va cac phep toan co ban tren DS  \n");
	list l; init(l);
	int so;
	
	do{
		printf("\n nhap mot so(so = 0 thi ket thuc): ");
		scanf("%d",&so);
		if(so!=0){
			l.data[(l.length)++]=so;
		}
	}while(so!=0);
	
	if(empty(l)){
		printf("\n danh sach rong");
	}
	else
	printf("\n ds khong rong");
	
	if(full(l)){
		printf("\n ds day\n");
	}
	else
	printf("\n this list is not full\n");
	duyet(l);
	
	int x;
	printf("\n nhap x=");
	scanf("%d",&x);
	printf("\n phan tu can tim nam o vi tri %d",search_list(l,x));
	
	int p;
	printf("\n nhap ptu can delete = ");
	scanf("%d",&p);
	delete_list(l,p);
	duyet(l);
	
	getch();
}


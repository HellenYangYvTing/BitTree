#include <stdio.h>
#include <stdlib.h>
void XuanZe();
void ChaRu();
void MaoPao();
int main(){
	int sel=1;
	printf("===========����===========\n");
	printf("1.ѡ������\n");
	printf("2.��������\n");
	printf("3.ð������\n");
	printf("0.�˳�\n");
	while(sel){
		printf("�������ţ�");
		scanf("%d",&sel);
		switch(sel){
		case 1:{
			   XuanZe();break;
			   }
		case 2:{
			   ChaRu();break;
			   }
		case 3:{
			   MaoPao();break;
			   }
		case 0:{
			   printf("�˳�\n");break;
			   }  
		}
	
	}
    return 0;
}
void XuanZe(){
	int* a;
	int n,i,j,min,t;
	printf("=======ѡ������=======\n");
	printf("���������������");
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int));
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		t=a[min];
		a[min]=a[i];
		a[i]=t;
	}
	for(i=0;i<n;i++){
	   printf("%d  ",a[i]);
	}
	printf("\n");
}
void ChaRu(){
	int* a;
	int n,i,j,min,t;
	printf("=======ѡ������=======\n");
	printf("���������������");
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int));
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++){
		t=a[i];
		for(j=i-1;j>=0;j--){
			if(a[j]>t){
				a[j+1]=a[j];
			}
			else{
			break;
			}
		}
		
		a[j+1]=t;
	}
	for(i=0;i<n;i++){
	   printf("%d  ",a[i]);
	}
	printf("\n");
}
void MaoPao(){}
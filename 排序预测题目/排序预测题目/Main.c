#include <stdio.h>
#include <stdlib.h>
void XuanZe();
void ChaRu();
void MaoPao();
int main(){
	int sel=1;
	printf("===========排序===========\n");
	printf("1.选择排序\n");
	printf("2.插入排序\n");
	printf("3.冒泡排序\n");
	printf("0.退出\n");
	while(sel){
		printf("请输入编号：");
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
			   printf("退出\n");break;
			   }  
		}
	
	}
    return 0;
}
void XuanZe(){
	int* a;
	int n,i,j,min,t;
	printf("=======选择排序=======\n");
	printf("请输入数组个数：");
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
	printf("=======选择排序=======\n");
	printf("请输入数组个数：");
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
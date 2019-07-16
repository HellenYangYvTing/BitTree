#include <stdio.h>
#include <malloc.h>
#include "targetver.h"
//初始化栈堆
void StackInitiate(SeqStack *S){  
	S->top=0;
}
//非空否
int StackNotEmpty(SeqStack S){
	if(S.stack<=0) return 0;
	else return 1;
}
//入栈
int StackPush(SeqStack *S,char a){
	if(S->top>=MaxStackSize){
	   printf("堆栈已满无法插入！\n");
	   return 0;
	}
	else{
		S->stack[S->top]=a;
		S->top++;
		return 1;
	}
} 
int StackPop(SeqStack *S,char* a){
	if(S->top<=0){
	   printf("堆栈已空无数据出栈！\n");
	   return 0;
	}
	else{
		S->top--;
		*a=S->stack[S->top];
		return 1;
	}
}
int StackTop(SeqStack *S,char* a){
	if(S->top<=0){
	   printf("堆栈已空！\n");
	   return 0;
	}
	else{
		*a=S->stack[S->top-1];	
		return 1;
	}
}
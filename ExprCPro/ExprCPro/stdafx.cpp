#include <stdio.h>
#include <malloc.h>
#include "targetver.h"
//��ʼ��ջ��
void StackInitiate(SeqStack *S){  
	S->top=0;
}
//�ǿշ�
int StackNotEmpty(SeqStack S){
	if(S.stack<=0) return 0;
	else return 1;
}
//��ջ
int StackPush(SeqStack *S,char a){
	if(S->top>=MaxStackSize){
	   printf("��ջ�����޷����룡\n");
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
	   printf("��ջ�ѿ������ݳ�ջ��\n");
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
	   printf("��ջ�ѿգ�\n");
	   return 0;
	}
	else{
		*a=S->stack[S->top-1];	
		return 1;
	}
}
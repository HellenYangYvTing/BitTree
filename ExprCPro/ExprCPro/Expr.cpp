#include "Expr.h"
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
//���Ҫʹ�õ��ĺ���

int Init(OPND &opnd){  
	while(opnd!=NULL){
	OPND t=opnd;
	opnd=opnd->next;
	free(t);
	}
	opnd=NULL;
	 
}
int Init(OPTR &optr){  
	while(optr!=NULL){
	OPTR t=optr;
	optr=optr->next;
	free(t);
	}
	optr=NULL;
	 
}
//�ǿշ�
int StackNotEmpty(OPND &opnd){
	if(S.stack<=0) return 0;
	else return 1;
}
//��ջ
int Push(OPND &opnd,const double  value){
	 OPND temp=
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
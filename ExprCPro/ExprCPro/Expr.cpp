#include "Expr.h"
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
//存放要使用到的函数

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
//非空否
int StackNotEmpty(OPND &opnd){
	if(S.stack<=0) return 0;
	else return 1;
}
//入栈
int Push(OPND &opnd,const double  value){
	 OPND temp=
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
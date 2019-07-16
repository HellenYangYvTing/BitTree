/*********************************
[文件名]：Polyn
[功能]：链表的操作
[作者]：XXXXXX
**********************************/

#include"StructDefine.h"
#include"malloc.h"
#include<iostream>
//#include "Polyn.h"
using namespace std;

void CreatePolyn(PLinkList &sPolyn)//创建空链表
{
	sPolyn = (PLinkList)malloc(sizeof(PLNODE));//申请头结点
	sPolyn->next = NULL;//置结束标志NULL结束
}
void ListInsert(PLinkList sPolyn,PLNODE sNewNode)//插入结点
{
	
	PLinkList psNewNode = (PLinkList)malloc(sizeof(PLNODE));
	//判断psNewNode是否为空，是就退出
	*psNewNode = sNewNode;//指针所指的对象的值修改为sNewNode
	while (sPolyn->next != NULL)
	{
		sPolyn =sPolyn->next;
	}
	sPolyn->next=psNewNode;
	psNewNode->next=NULL;
}

void PrintPoly(PLNODE sPTemp)//打印多项式中的一项
{
	if (sPTemp.nExpn == 0)//当指数为0时，直接输出系数
	{
		cout << sPTemp.dbCoef;
	}
	else if (sPTemp.dbCoef == 1)//当系数为1时
	{
		if (sPTemp.nExpn == 1)
		{
			cout << "x";
		}
		else
	    {
			cout << "x^"<< sPTemp.nExpn ;
	     }
	}
	else if (sPTemp.dbCoef == -1)//当系数为负数时
	{
		if (sPTemp.nExpn == 1)
		{
			cout << "-x";
		}
		else
		{
			cout << "-x^" << sPTemp.nExpn;
		}
	}
	else
	{
		if (sPTemp.nExpn == 1)
		{
			cout << sPTemp.dbCoef << "x";
		}
		else
		{
			cout << sPTemp.dbCoef << "x^" << sPTemp.nExpn;
		}
	}
}
void PrintPolyn(PLinkList sPolyn)//打印多项式
{
	int nIndex = 0;
	PLinkList sPTemp = sPolyn->next;//sPTemp指向第一个项数
	while (sPTemp != NULL)
	{
		nIndex++;
		if (nIndex == 1)//直接输出第一项
		{
			PrintPoly(*sPTemp);
		}
		else if (sPTemp->dbCoef > 0)//如果系数大于0，先输出+号
		{
			cout << "+";
			PrintPoly(*sPTemp);
		}
		else
		{
			PrintPoly(*sPTemp);
		}
		sPTemp = sPTemp->next;
	}
}


void FreePolyn(PLinkList sPolyn)//释放链表
{
	PLinkList sTemp = NULL;
	while (sPolyn != NULL)
	{
		sTemp = sPolyn->next;
		free(sPolyn);
		sPolyn = sTemp;
	}
}
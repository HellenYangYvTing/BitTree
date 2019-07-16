/*********************************
[�ļ���]��Polyn
[����]������Ĳ���
[����]��XXXXXX
**********************************/

#include"StructDefine.h"
#include"malloc.h"
#include<iostream>
//#include "Polyn.h"
using namespace std;

void CreatePolyn(PLinkList &sPolyn)//����������
{
	sPolyn = (PLinkList)malloc(sizeof(PLNODE));//����ͷ���
	sPolyn->next = NULL;//�ý�����־NULL����
}
void ListInsert(PLinkList sPolyn,PLNODE sNewNode)//������
{
	
	PLinkList psNewNode = (PLinkList)malloc(sizeof(PLNODE));
	//�ж�psNewNode�Ƿ�Ϊ�գ��Ǿ��˳�
	*psNewNode = sNewNode;//ָ����ָ�Ķ����ֵ�޸�ΪsNewNode
	while (sPolyn->next != NULL)
	{
		sPolyn =sPolyn->next;
	}
	sPolyn->next=psNewNode;
	psNewNode->next=NULL;
}

void PrintPoly(PLNODE sPTemp)//��ӡ����ʽ�е�һ��
{
	if (sPTemp.nExpn == 0)//��ָ��Ϊ0ʱ��ֱ�����ϵ��
	{
		cout << sPTemp.dbCoef;
	}
	else if (sPTemp.dbCoef == 1)//��ϵ��Ϊ1ʱ
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
	else if (sPTemp.dbCoef == -1)//��ϵ��Ϊ����ʱ
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
void PrintPolyn(PLinkList sPolyn)//��ӡ����ʽ
{
	int nIndex = 0;
	PLinkList sPTemp = sPolyn->next;//sPTempָ���һ������
	while (sPTemp != NULL)
	{
		nIndex++;
		if (nIndex == 1)//ֱ�������һ��
		{
			PrintPoly(*sPTemp);
		}
		else if (sPTemp->dbCoef > 0)//���ϵ������0�������+��
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


void FreePolyn(PLinkList sPolyn)//�ͷ�����
{
	PLinkList sTemp = NULL;
	while (sPolyn != NULL)
	{
		sTemp = sPolyn->next;
		free(sPolyn);
		sPolyn = sTemp;
	}
}
/*********************************
[�ļ���]��PolyAdd
[����]������ʽ���
[����]��XXXXXX
**********************************/
#include<malloc.h>
#include<math.h>
#include<iostream>
using namespace std;
#include"StructDefine.h"
#include"Polyn.h"


/*********************************
[��������]GetInt
[��������]���벢�ж������ֵ�Ƿ�Ϊ����
[��������]value
[�� �� ֵ]void
**********************************/
bool GetInt(int &value)
{
	char str[256] = { 0 };
	fflush(stdin);//���������
	gets_s(str, 256);//�ȴ��������ݣ��������ݴ浽str��
	int index = 1;
	int nTemp = 0;
	if (str[0] == '-')//�ж�������Ƿ�Ϊ����
	{
		nTemp = 1;
	}
	for (index=nTemp;index<strlen(str);index++)//strlen���ڼ���ַ�������
	{	//�ж�str��ÿ���ַ��Ƿ�Ϊ0-9���Ǿͼ��������Ǿͷ���false
	    if(str[nTemp]>='0'&&str[nTemp]<='9')
			continue;
		else 
		   return 0;
	}
	value = atoi(str);//�ж������ַ����Ƿ�Ϊ�����֣�����ַ���ת��Ϊ�����͡�
	return 1;
}

/*****************************************************
[��������]InputData(int nOrder, PLinkList &sPolyn);
[��������]�������ݴ�������ʽ����ӡ����
[��������]nOrder��sPolynd��ָ����ϵ��ֵ
[�� �� ֵ]void
******************************************************/
void InputData(int nOrder,PLinkList &sPolyn)
{
	int i;
	int Term;//����
	double dbCoef;//ϵ��
	int nExpn;//ָ��
	int nExBak[20];//ָ������
	PLNODE sNewNode ;//�����µĽ��

	CreatePolyn (sPolyn);//����������
	
	cout<< "�������"<<nOrder<<"������ʽ������:";

	if(!GetInt(Term))
	{
		cout<<"��������ӦΪ����\n";
	}

	for(i = 1;i <= Term;i++)
	{
		int j=1;
		cout<<"�������"<<i<<"���ϵ����";
		cin>>dbCoef;
		if(cin.fail()||(dbCoef==0))
		{
			cout<<"����ϵ�����Ͳ�ƥ��\n";
			return;
		}
		cout<<"�������"<<i<<"���ָ����";
		if(!GetInt(nExpn))
		{
			cout<<"����ָ�����Ͳ�ƥ��\n";
			return;
		}
		while(j<i)
		{
			if(nExpn == nExBak[j])
			{
				cout<<"���󣬴�����ָͬ��\n";
				return;
			}
			j++;
		}
		nExBak[i]=nExpn;
		sNewNode.dbCoef=dbCoef;
		sNewNode.nExpn=nExpn;
		ListInsert(sPolyn,sNewNode);
	}
	cout << "�����"<< nOrder<<"����ʽֵ:";
	PrintPolyn(sPolyn);
	cout << "\n";
}

/*********************************
[��������]main
[��������]��������������Ӧ�ó�����ں���
[��������]��
[�� �� ֵ]int:˵�������˳�״̬
**********************************/
int main()
{
	cout<<"/*ע��:ϵ��Ϊ�������ͣ�ָ��Ϊ����(��Ϊ��)���͡�\n";
    cout<<"�밴ָ����С�����˳���������ʽ��*/\n\n";
	PLinkList sPolynA = NULL;  //��ʼ������һԪ����ʽ��ͷָ��
	PLinkList sPolynB = NULL;

	InputData(1,sPolynA);    //���벢��ӡ����ʽA
	InputData(2,sPolynB);    //���벢��ӡ����ʽB

	FreePolyn(sPolynA);           //�ͷ�����
	FreePolyn(sPolynB);
	

	return 0;
}
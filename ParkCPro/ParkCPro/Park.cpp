#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct Car{
	char lisence_plate[10]; //���ƺ�
	int time;           //�볡ʱ��
};
typedef struct SqQueue{
  Car *base;  //����
  int front; //ͷָ��
  int rear;   //βָ��
  int size;//���г���
}Queue;
//��ʼ��
int InitQueue(Queue &q,int nSize)
{   q.base=(Car *)malloc(sizeof(Car)*nSize);
    q.front=q.rear=0;
	q.size=nSize;
	return 1;
}
//����
int DestoryQueue(Queue &q){
	if(q.base){
		free(q.base);       
		/*  1.freeֻ���ͷ���malloc��������ڴ棬��û�иı�ָ���ֵ

			2.����ָ����ָ����ڴ�ռ��Ѿ����ͷţ��������������л����д���е����ݣ��൱�ڸ�ָ��Ӵ�ָ�����Լ��޷����Ƶ�����Ҳ��ΪҰָ�루Ұָ��ָָ��һ����ɾ���Ķ����δ������������ڴ������ָ�롣���ָ�벻ͬ��Ұָ���޷�ͨ���򵥵��ж��Ƿ�ΪNULL���⣩��

			3.Ϊ�˱���������������free֮��ʹָ��ָ��NULL��*/
		q.base=NULL;
	}
    q.front=q.rear=0;
	q.size=0;
	return 1;
}
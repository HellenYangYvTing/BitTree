//Ԥ���� ��ֹͷ�ļ��ظ�
#pragma once

//����һ�����������ڴ��һԪ����ʽ
void CreatePolyn(PLinkList &sPolyn);

//�����sNewNode���뵽����sPolyn��β��
void ListInsert(PLinkList sPolyn,PLNODE sNewNode);

//��sPolynָ���һԪ����ʽ�еĽڵ㰴��ָ����С����ķ�ʽ����
PLinkList ListSort(PLinkList sPolyn);

//��ָ����ʽ���һԪ����ʽ������һ��sPTemp
void PrintPoly(PLNODE sPTemp);

//��ָ����ʽ���һԪ����ʽsPolyn
void PrintPolyn(PLinkList sPolyn);

//�������ʽ��ӵõ��µĶ���ʽ
PLinkList AddPolyn(PLinkList sPolyn1,PLinkList sPolyn2);

//������Ŀռ��ͷŵ�
void FreePolyn(PLinkList sPolyn);

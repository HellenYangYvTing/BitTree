//预编译 防止头文件重复
#pragma once

//建立一个空链表，用于存放一元多项式
void CreatePolyn(PLinkList &sPolyn);

//将结点sNewNode插入到链表sPolyn的尾部
void ListInsert(PLinkList sPolyn,PLNODE sNewNode);

//将sPolyn指向的一元多项式中的节点按照指数从小到大的方式排序
PLinkList ListSort(PLinkList sPolyn);

//按指定格式输出一元多项式的任意一项sPTemp
void PrintPoly(PLNODE sPTemp);

//按指定格式输出一元多项式sPolyn
void PrintPolyn(PLinkList sPolyn);

//两项多项式相加得到新的多项式
PLinkList AddPolyn(PLinkList sPolyn1,PLinkList sPolyn2);

//将链表的空间释放掉
void FreePolyn(PLinkList sPolyn);

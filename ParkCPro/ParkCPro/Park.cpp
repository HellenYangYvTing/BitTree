#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct Car{
	char lisence_plate[10]; //车牌号
	int time;           //入场时间
};
typedef struct SqQueue{
  Car *base;  //数组
  int front; //头指针
  int rear;   //尾指针
  int size;//队列长度
}Queue;
//初始化
int InitQueue(Queue &q,int nSize)
{   q.base=(Car *)malloc(sizeof(Car)*nSize);
    q.front=q.rear=0;
	q.size=nSize;
	return 1;
}
//销毁
int DestoryQueue(Queue &q){
	if(q.base){
		free(q.base);       
		/*  1.free只是释放了malloc所申请的内存，并没有改变指针的值

			2.由于指针所指向的内存空间已经被释放，所以其他代码有机会改写其中的内容，相当于该指针从此指向了自己无法控制的区域，也成为野指针（野指针指指向一个已删除的对象或未申请访问受限内存区域的指针。与空指针不同，野指针无法通过简单地判断是否为NULL避免）。

			3.为了避免错误，所以最好在free之后，使指针指向NULL。*/
		q.base=NULL;
	}
    q.front=q.rear=0;
	q.size=0;
	return 1;
}
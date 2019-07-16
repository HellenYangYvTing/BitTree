/*********************************
[文件名]：PolyAdd
[功能]：多项式求和
[作者]：XXXXXX
**********************************/
#include<malloc.h>
#include<math.h>
#include<iostream>
using namespace std;
#include"StructDefine.h"
#include"Polyn.h"


/*********************************
[函数名称]GetInt
[函数功能]输入并判断输入的值是否为整数
[函数参数]value
[返 回 值]void
**********************************/
bool GetInt(int &value)
{
	char str[256] = { 0 };
	fflush(stdin);//清除缓存区
	gets_s(str, 256);//等待输入数据，并将数据存到str中
	int index = 1;
	int nTemp = 0;
	if (str[0] == '-')//判断输入的是否为负数
	{
		nTemp = 1;
	}
	for (index=nTemp;index<strlen(str);index++)//strlen用于检测字符串长度
	{	//判断str中每个字符是否为0-9，是就继续，不是就返回false
	    if(str[nTemp]>='0'&&str[nTemp]<='9')
			continue;
		else 
		   return 0;
	}
	value = atoi(str);//判断输入字符串是否为纯数字，则把字符串转化为整数型。
	return 1;
}

/*****************************************************
[函数名称]InputData(int nOrder, PLinkList &sPolyn);
[函数功能]输入数据创建多项式并打印数据
[函数参数]nOrder，sPolynd的指数与系数值
[返 回 值]void
******************************************************/
void InputData(int nOrder,PLinkList &sPolyn)
{
	int i;
	int Term;//项数
	double dbCoef;//系数
	int nExpn;//指数
	int nExBak[20];//指数数组
	PLNODE sNewNode ;//定义新的结点

	CreatePolyn (sPolyn);//创建空链表
	
	cout<< "请输入第"<<nOrder<<"个多项式的项数:";

	if(!GetInt(Term))
	{
		cout<<"错误，项数应为整数\n";
	}

	for(i = 1;i <= Term;i++)
	{
		int j=1;
		cout<<"请输入第"<<i<<"项的系数：";
		cin>>dbCoef;
		if(cin.fail()||(dbCoef==0))
		{
			cout<<"错误，系数类型不匹配\n";
			return;
		}
		cout<<"请输入第"<<i<<"项的指数：";
		if(!GetInt(nExpn))
		{
			cout<<"错误，指数类型不匹配\n";
			return;
		}
		while(j<i)
		{
			if(nExpn == nExBak[j])
			{
				cout<<"错误，存在相同指数\n";
				return;
			}
			j++;
		}
		nExBak[i]=nExpn;
		sNewNode.dbCoef=dbCoef;
		sNewNode.nExpn=nExpn;
		ListInsert(sPolyn,sNewNode);
	}
	cout << "输出第"<< nOrder<<"多项式值:";
	PrintPolyn(sPolyn);
	cout << "\n";
}

/*********************************
[函数名称]main
[函数功能]程序主函数，即应用程序入口函数
[函数参数]无
[返 回 值]int:说明程序退出状态
**********************************/
int main()
{
	cout<<"/*注意:系数为浮点类型，指数为整数(可为负)类型。\n";
    cout<<"请按指数从小到大的顺序输入多项式。*/\n\n";
	PLinkList sPolynA = NULL;  //初始化三个一元多项式的头指针
	PLinkList sPolynB = NULL;

	InputData(1,sPolynA);    //输入并打印多项式A
	InputData(2,sPolynB);    //输入并打印多项式B

	FreePolyn(sPolynA);           //释放链表
	FreePolyn(sPolynB);
	

	return 0;
}
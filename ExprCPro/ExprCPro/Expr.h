typedef struct StackNodeOPND{
	double value;
	StackNodeOPND* next;
}*OPND;
typedef struct StackNodeOPTR{
	char op;
	StackNodeOPTR* next;
}*OPTR;
void StackInitiate(OPND &S);
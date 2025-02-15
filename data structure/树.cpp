//#include<iostream>
//#include<stdio.h>
//#define OK 1
//#define ERROR 0
//using namespace std;
//typedef struct Node {
//	char data;
//	Node*  Lc;
//	Node* Rc;
//}Node,*BiTree;
//typedef struct {
//	BiTree* base;
//	BiTree* top;
//	int stacksize;
//}Stack;
//typedef struct QNode
//{
//	BiTree data;
//	struct QNode* next;
//}QNode, * QP;
//typedef struct
//{
//	QP head;
//	QP tail;
//}LinkQ;
//BiTree T = 0;
//Stack S = { 0 };
//LinkQ Q = { 0 };
//int InitStack(Stack& S)
//{
//	S.base = (BiTree*)malloc(20 * sizeof(BiTree));
//	if (!S.base)exit(OVERFLOW);
//	S.top = S.base;
//	S.stacksize = 20;
//	return OK;
//}
//int StackEmpty(Stack S)
//{
//	return(S.base == S.top);
//}
//int GetTop(Stack S, BiTree& e)
//{
//	e = *(S.top - 1);
//	return OK;
//}
//int Push(Stack& S, BiTree e)
//{
//	*S.top++ = e;
//	return OK;
//}
//int Pop(Stack& S, BiTree& e)
//{
//	e = *--S.top;
//	return OK;
//}
//int InitQueue(LinkQ& Q)
//{
//	Q.head = (QP)malloc(sizeof(QNode));
//	if (!Q.head) exit(OVERFLOW);
//	Q.tail = Q.head;
//	Q.head->next = NULL;
//	return OK;
//}
//int Insert(LinkQ& Q, BiTree e)
//{
//	QP A = (QP)malloc(sizeof(QNode));
//	A->data = e;
//	A->next = NULL;
//	Q.tail->next = A;
//	Q.tail = A;
//	return OK;
//}
//int Delete(LinkQ& Q, BiTree& e)
//{
//	e = Q.head->next->data;
//	QP i;
//	i = Q.head->next;
//	Q.head->next = i->next;
//	if (Q.head->next == NULL) Q.tail = Q.head;
//	free(i);
//	return OK;
//}
//int QueueEmpty(LinkQ Q)
//{
//	return (Q.head == Q.tail);
//}
//int GetHead(LinkQ Q, BiTree& e)
//{
//	e = Q.head->next->data;
//	return OK;
//}
//int Creat(BiTree& T)
//{
//	char a;
//	getchar();
//	a = getchar();
//	if (a == ' ')
//	{
//		T = NULL;
//	}
//	else
//	{
//		T = (BiTree)malloc(sizeof(Node));
//		T->data = a;
//		Creat(T->Lc);
//		Creat(T->Rc);
//	}
//	return OK;
//}
//int output(char a)
//{
//	cout << a << " ";
//	return OK;
//}
//int Pre(BiTree T, int(*Visit)(char a))
//{
//	if (T)
//	{
//		if (Visit(T->data))
//		{
//			if (Pre(T->Lc, Visit))
//			{
//				if (Pre(T->Rc, Visit))
//					return OK;
//			}
//		}
//		return ERROR;
//	}
//	return OK;
//}
//int Post(BiTree T, int(*Visit)(char a))
//{
//	if (T)
//	{
//		if (Post(T->Lc, Visit))
//		{
//			if (Post(T->Rc, Visit))
//			{
//				if (Visit(T->data))
//					return OK;
//				return ERROR;
//			}
//		}
//	}
//	return OK;
//}
//int In(BiTree T, int(*Visit)(char a))
//{
//	BiTree p;
//	InitStack(S);
//	Push(S, T);                                                                      //根指针进栈
//	while (!StackEmpty(S))
//	{
//		while (GetTop(S, p) && p) Push(S, p->Lc);            //向左走到尽头
//		Pop(S, p);                                                                 //空指针退栈
//		if (!StackEmpty(S))
//		{
//			Pop(S, p);
//			if (!Visit(p->data))
//				return ERROR;
//			Push(S, p->Rc);
//		}
//	}
//	cout << endl;
//	return OK;
//}
//int In2(BiTree T, int(*Visit)(char a))
//{
//	InitStack(S);
//	BiTree p = T;
//	while (p ||!StackEmpty(S))
//	{
//		if (p) {
//			Push(S, p);
//			p = p->Lc;                                   //根指针进栈，遍历左子树
//		}
//		else                                                    //根指针退栈，访问根结点，遍历右子树
//		{
//			Pop(S, p);
//			if (!Visit(p->data))
//				return ERROR;
//			p = p->Rc;
//		}
//	}
//	cout << endl;
//	return OK;
//}
//int Level(BiTree T, int(*Visit)(char a))
//{
//	InitQueue(Q);
//	BiTree p=T;
//	Insert(Q, T);
//	while (p&&!QueueEmpty(Q))
//	{
//		Delete(Q, p);
//		if (p)
//		{
//			if (!Visit(p->data))
//				return ERROR;
//			else
//			{
//				if(p->Lc)
//					Insert(Q, p->Lc);
//				if(p->Rc)
//					Insert(Q, p->Rc);
//			}
//		}
//	}
//	cout << endl;
//	return OK;
//}
//int Depth(BiTree T)
//{
//	int l, r;
//	if (T == NULL)
//		return 0;
//	else
//	{
//		l = Depth(T->Lc);
//		r = Depth(T->Rc);
//		return l > r ? (l + 1) : (r + 1);
//	}
//}
//int main()
//{
//	int choice;
//	int flag = 0;
//	cout << "1----创建二叉树" << endl;
//	cout << "2----先序遍历二叉树" << endl;
//	cout << "3----后序遍历二叉树" << endl;
//	cout << "4----中序遍历二叉树" << endl;
//	cout << "5----中序遍历二叉树2" << endl;
//	cout << "6----层序遍历二叉树" << endl;
//	cout << "7----求二叉树深度" << endl;
//	cout << "8----退出" << endl;
//	do {
//		cout << "请输入操作：";
//		cin >> choice;
//		switch (choice)
//		{
//			case 1:
//			{
//				cout << "请先序输入二叉树" << endl;
//				Creat(T);
//				flag = 1;
//				cout << "创建成功" << endl;
//				break;
//			}
//			case 2:
//			{
//				if (!flag)
//				{
//					cout << "请先构造二叉树" << endl;
//					break;
//				}
//				cout << "先序遍历结果：";
//				Pre(T, output);
//				cout << endl;
//				break;
//			}
//			case 3:
//			{
//				if (!flag)
//				{
//					cout << "请先构造二叉树" << endl;
//					break;
//				}
//				cout << "后序遍历结果：";
//				Post(T, output);
//				cout << endl;
//				break;
//			}
//			case 4:
//			{
//				if (!flag)
//				{
//					cout << "请先构造二叉树" << endl;
//					break;
//				}
//				cout << "中序遍历结果：";
//				In(T, output);
//				break;
//			}
//			case 5:
//			{
//				if (!flag)
//				{
//					cout << "请先构造二叉树" << endl;
//					break;
//				}
//				cout << "中序遍历结果：";
//				In2(T, output);
//				break;
//			}
//			case 6:
//			{
//				if (!flag)
//				{
//					cout << "请先构造二叉树" << endl;
//					break;
//				}
//				cout << "层序遍历结果：";
//				Level(T, output);
//				break;
//			}
//			case 7:
//			{
//				if (!flag)
//				{
//					cout << "请先构造二叉树" << endl;
//					break;
//				}
//				cout<<"二叉树的深度为：" << Depth(T) << endl;
//				break;
//			}
//			case 8:
//			{
//				cout << "已退出" << endl;
//				break;
//			}
//			default:
//			{
//				cout << "ERROR!" << endl;
//				break;
//			}
//		}
//	} while (choice != 8);
//}
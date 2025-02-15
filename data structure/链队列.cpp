//#include<iostream>
//using namespace std;
//#define OK 1
//#define ERROR 0
//int flag=0;
//typedef struct QNode
//{
//	int data;
//	struct QNode* next;
//}QNode, * QP;
//typedef struct
//{
//	QP head;
//	QP tail;
//}LinkQ;
//int InitQueue(LinkQ& Q);
//int DestroyQueue(LinkQ& Q);
//int ClearQueue(LinkQ& Q);
//int QueueEmpty(LinkQ Q);
//int QueueLength(LinkQ Q);
//int GetHead(LinkQ Q, int& e);
//int Insert(LinkQ& Q, int e);
//int Delete(LinkQ& Q, int& e);
//void Traval(LinkQ Q);
//int main()
//{
//	LinkQ Q = { 0 };
//	int choice,R;
//	cout << "1.初始化队列" << endl;
//	cout << "2.销毁队列" << endl;
//	cout << "3.清空队列" << endl;
//	cout << "4.队列判空" << endl;
//	cout << "5.求队列长度" << endl;
//	cout << "6.获取队头元素" << endl;
//	cout << "7.插入一个元素" << endl;
//	cout << "8.删除一个元素" << endl;
//	cout << "9输出所有元素" << endl;
//	cout << "请输入操作代码：";
//	cin >> choice;
//	while (choice >= 0)
//	{
//		switch (choice)
//		{
//		case 1:
//			{
//			R = InitQueue(Q);
//			if (R) cout << "初始化成功" << endl;
//			else cout << "初始化失败" << endl;
//				break;
//			}
//		case 2:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl;
//				break;
//			}
//			R = DestroyQueue(Q);
//			if (R) cout << "销毁成功" << endl;
//			else cout << "销毁失败" << endl;
//			break;
//		}
//		case 3:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl;
//				break;
//			}
//			if (flag == 2)
//			{
//				cout << "队列已销毁" << endl;
//				break;
//			}
//			R = ClearQueue(Q);
//			if (R) cout << "清空成功" << endl;
//			else cout << "清空失败" << endl;
//			break;
//		}
//		case 4:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl;
//				break;
//			}
//			if (flag == 2)
//			{
//				cout << "队列已销毁" << endl;
//				break;
//			}
//			R = QueueEmpty(Q);
//			if (R) cout << "队列为空" << endl;
//			else cout << "队列不为空" << endl;
//			break;
//		}
//		case 5:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl;
//				break;
//			}
//			if (flag == 2)
//			{
//				cout << "队列已销毁" << endl;
//				break;
//			}
//			R = QueueLength(Q);
//			cout << "队列的长度为：" << R << endl;
//			break;
//		}
//		case 6:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl;
//				break;
//			}
//			if (flag == 2)
//			{
//				cout << "队列已销毁" << endl;
//				break;
//			}
//			if (QueueEmpty(Q))
//			{
//				cout << "队列为空" << endl;
//				break;
//			}
//			int e;
//			R = GetHead(Q, e);
//			cout << "头元素为：" << e << endl;
//			break;
//		}
//		case 7:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl;
//				break;
//			}
//			if (flag == 2)
//			{
//				cout << "队列已销毁" << endl;
//				break;
//			}
//			int e;
//			cout << "请输入要插入的元素：" ;
//			cin >> e;
//			cout << endl;
//			R = Insert(Q, e);
//			if (R) cout << "插入成功" << endl;
//			else cout << "插入失败" << endl;
//			break;
//		}
//		case 8:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl;
//				break;
//			}
//			if (flag == 2)
//			{
//				cout << "队列已销毁" << endl;
//				break;
//			}
//			if (QueueEmpty(Q))
//			{
//				cout << "队列为空" << endl;
//				break;
//			}
//			int e;
//			R = Delete(Q, e);
//			if (R) cout << "删除成功，删除的元素为：" << e << endl;
//			else cout << "删除失败" << endl;
//			break;
//		}
//		case 9:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl;
//				break;
//			}
//			if (flag == 2)
//			{
//				cout << "队列已销毁" << endl;
//				break;
//			}
//			Traval(Q);
//			break;
//		}
//		default:
//		{
//			cout << "ERROR!" << endl;
//			break;
//		}
//		}
//		cout << "请输入操作代码：";
//		cin >> choice;
//	}
//	if (choice < 0)
//		cout << "已退出" << endl;
//}
//int InitQueue(LinkQ& Q)
//{
//	Q.head = (QP)malloc(sizeof(QNode));
//	if (!Q.head) exit(OVERFLOW);
//	Q.tail = Q.head;
//	Q.head->next = NULL;
//	flag = 1;
//	return OK;
//}
//int DestroyQueue(LinkQ& Q)
//{
//	while (Q.head)
//	{
//		Q.tail = Q.head->next;
//		free(Q.head);
//		Q.head = Q.tail;
//	}
//	flag = 2;
//	return OK;
//}
//int ClearQueue(LinkQ& Q)
//{
//	QP i;
//	i = Q.head;
//	while (i)
//	{
//		Q.tail = i->next;
//	     i = Q.tail;
//		 free(i);
//	}
//	Q.head->next = NULL;
//	Q.tail = Q.head;
//	return OK;
//}
//int QueueEmpty(LinkQ Q)
//{
//	return (Q.head == Q.tail);
//}
//int QueueLength(LinkQ Q)
//{
//	QP i;
//	int sum = 0;
//	i = Q.head;
//	for (i = Q.head; i->next; i = i->next, sum++);
//	return sum;
//}
//int GetHead(LinkQ Q, int& e)
//{
//	e = Q.head->next->data;
//	return OK;
//}
//int Insert(LinkQ& Q, int e)
//{
//	QP A = (QP)malloc(sizeof(QNode));
//	A->data = e;
//	A->next = NULL;
//	Q.tail->next = A;
//	Q.tail = A;
//	return OK;
//}
//int Delete(LinkQ& Q, int& e)
//{
//	e = Q.head->next->data;
//	QP i;
//	i = Q.head->next;
//	Q.head->next = i->next;
//	if (Q.head->next == NULL) Q.tail = Q.head;
//	free(i);
//	return OK;
//}
//void Traval(LinkQ Q)
//{
//	QP i;
//	for (i = Q.head->next; i; i = i->next)
//	{
//		cout << i->data << " ";
//	}
//	cout << endl;
//}
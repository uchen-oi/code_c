//#include<iostream>
//using namespace std;
//#define OK 1;
//#define ERROR 0;
//typedef struct LNode {
//	int data;
//	struct LNode* next;
//}LNode, * LinkList;
//int InitList(LinkList* L);
//int DestroyList(LinkList L);
//int ClearList(LinkList L);
//int ListLength(LinkList L, int& sum);
//int GetElem(LinkList L, int i, int& e);
//int LocateElem(LinkList L, int& i, int e);
//int PriorElem(LinkList L, int e, LinkList& pre);
//int NextElem(LinkList L, int e, LinkList& next);
//int ListInsert(LinkList L, int i, int e);
//int ListDelete(LinkList L, int i, int& e);
//int VisitList(LinkList L);
//int Creat(LinkList& L, int n);
//int Updown(LinkList& L);
//int flag = 0; int R = 0;
//int main()
//{
//	int choice;
//	LinkList L = NULL;
//	cout << "1.初始化或重置链表" << endl;
//	cout << "2.销毁链表" << endl;
//	cout << "3.清空链表" << endl;
//	cout << "4.链表长度" << endl;
//	cout << "5.指定位置的元素值" << endl;
//	cout << "6.链表已存在元素的位序" << endl;
//	cout << "7.求输入元素的直接前驱" << endl;
//	cout << "8.求输入元素的直接后继" << endl;
//	cout << "9.在第i个位置插入一个元素" << endl;
//	cout << "10.删除第i个元素" << endl;
//	cout << "11.输出所有的链表元素" << endl;
//	cout << "12.初始化并用头插法（或尾插法）输入元素" << endl;
//	cout << "13.实现单链表的逆序存放" << endl;
//	cout << "退出，输入一个负数！" << endl << endl;
//	cout << "请输入操作代码：";
//	cin >> choice;
//	while (choice >= 0)
//	{
//		switch (choice)
//		{
//		case 1:
//		{
//			R = InitList(&L);
//			if (R) cout << "初始化成功" << endl;
//			else cout << "出错" << endl;
//			break;
//		}
//		case 2:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl;
//				break;
//			}
//			R = DestroyList(L);
//			if (R) cout << "销毁成功" << endl;
//			else cout << "链表不存在" << endl;
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
//				cout << "链表已销毁" << endl;
//				break;
//			}
//			R = ClearList(L);
//			if (R) cout << "清空成功" << endl;
//			else cout << "出错" << endl;
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
//				cout << "链表已销毁" << endl;
//				break;
//			}
//			int sum = 0;
//			R = ListLength(L, sum);
//			if (R) cout << "链表长度为：" << sum << endl;
//			else cout << "出错" << endl;
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
//				cout << "链表已销毁" << endl;
//				break;
//			}
//			if (flag == 3)
//			{
//				cout << "链表已清空" << endl;
//				break;
//			}
//			int i, e;
//			cout << "请输入指定的位置：";
//			cin >> i;
//			cout << endl;
//			R = GetElem(L, i, e);
//			if (R) cout << "该位置的元素为：" << e << endl;
//			else cout << "表为空或位置不合法" << endl;
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
//				cout << "链表已销毁" << endl;
//				break;
//			}
//			if (flag == 3)
//			{
//				cout << "链表已清空" << endl;
//				break;
//			}
//			int i, e;
//			cout << "请输入元素：";
//			cin >> e;
//			cout << endl;
//			R = LocateElem(L, i, e);
//			if (R) cout << "该元素的位置为：" << i << endl;
//			else cout << "该元素不存在" << endl;
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
//				cout << "链表已销毁" << endl;
//				break;
//			}
//			if (flag == 3)
//			{
//				cout << "链表已清空" << endl;
//				break;
//			}
//			int e;
//			cout << "请输入元素：";
//			cin >> e;
//			cout << endl;
//			LinkList pre;
//			R = PriorElem(L, e, pre);
//			if (R) cout << "该元素的直接前驱为：" << pre->data << endl;
//			else cout << "该元素不存在或是第一个元素" << endl;
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
//				cout << "链表已销毁" << endl;
//				break;
//			}
//			if (flag == 3)
//			{
//				cout << "链表已清空" << endl;
//				break;
//			}
//			int e;
//			cout << "请输入元素：";
//			cin >> e;
//			cout << endl;
//			LinkList next;
//			R = NextElem(L, e, next);
//			if (R) cout << "该元素的直接后继为：" << next->data << endl;
//			else cout << "该元素不存在或是最后一个元素" << endl;
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
//				cout << "链表已销毁" << endl;
//				break;
//			}
//			if (flag == 3)
//			{
//				cout << "链表已清空" << endl;
//				break;
//			}
//			int i, e;
//			cout << "请输入插入的位置：";
//			cin >> i;
//			cout << endl << "请输入插入的元素：";
//			cin >> e;
//			cout << endl;
//			R = ListInsert(L, i, e);
//			if (R) cout << "插入成功" << endl;
//			else cout << "位置不合法" << endl;
//			break;
//		}
//		case 10:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl;
//				break;
//			}
//			if (flag == 2)
//			{
//				cout << "链表已销毁" << endl;
//				break;
//			}
//			if (flag == 3)
//			{
//				cout << "链表已清空" << endl;
//				break;
//			}
//			int i, e;
//			cout << "请输入删除的位置：";
//			cin >> i;
//			cout << endl;
//			R = ListDelete(L, i, e);
//			if (R) cout << "删除成功，删除的元素为：" << e << endl;
//			else cout << "位置不合法" << endl;
//			break;
//		}
//		case 11:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl;
//				break;
//			}
//			if (flag == 2)
//			{
//				cout << "链表已销毁" << endl;
//				break;
//			}
//			if (flag == 3)
//			{
//				cout << "链表已清空" << endl;
//				break;
//			}
//			R = VisitList(L);
//			cout << endl;
//			if (!R) cout << "出错" << endl;
//			break;
//		}
//		case 12:
//		{
//			int n;
//			cout << "请输入插入元素的个数：";
//			cin >> n;
//			cout << endl;
//			cout << "请输入" << n << "个元素" << endl;
//			Creat(L, n);
//			if (flag) cout << "插入成功" << endl;
//			else cout << "插入失败" << endl;
//			break;
//		}
//		case 13:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl;
//				break;
//			}
//			if (flag == 2)
//			{
//				cout << "链表已销毁" << endl;
//				break;
//			}
//			if (flag == 3)
//			{
//				cout << "链表已清空" << endl;
//				break;
//			}
//			LinkList p;
//			R = Updown(L);
//			p = L->next;
//			if (R)
//			{
//				cout << "逆置成功，结果为：";
//				while (p != NULL)
//				{
//					cout << p->data << " ";
//					p = p->next;
//				}
//				cout << endl;
//			}
//			else cout << "逆置失败" << endl;
//			break;
//		}
//		default:cout << "ERROR" << endl; break;
//		}
//		cout << "1.初始化或重置链表" << endl;
//		cout << "2.销毁链表" << endl;
//		cout << "3.清空链表" << endl;
//		cout << "4.链表长度" << endl;
//		cout << "5.指定位置的元素值" << endl;
//		cout << "6.链表已存在元素的位序" << endl;
//		cout << "7.求输入元素的直接前驱" << endl;
//		cout << "8.求输入元素的直接后继" << endl;
//		cout << "9.在第i个位置插入一个元素" << endl;
//		cout << "10.删除第i个元素" << endl;
//		cout << "11.输出所有的链表元素" << endl;
//		cout << "12.初始化并用头插法（或尾插法）输入元素" << endl;
//		cout << "13.实现单链表的逆序存放" << endl;
//		cout << "退出，输入一个负数！" << endl << endl;
//		cout << "请输入操作代码：";
//		cin >> choice;
//	}
//	if (choice < 0) cout << "已退出" << endl;
//}
//int InitList(LinkList* L)
//{
//	LinkList p;
//	p = new LNode;
//	if (p == NULL)
//		return ERROR;
//	p->next = NULL;
//	*L = p;
//	flag = 1;
//	return OK;
//}
//int DestroyList(LinkList L)
//{
//	LNode* p;
//	if (L)
//	{
//		while (L)
//		{
//			p = L;
//			L = L->next;
//			delete(p);
//		}
//		flag = 2;
//		return OK;
//	}
//	return ERROR;
//}
//int ClearList(LinkList L)
//{
//	LinkList p, s;
//	s = L->next;
//	while (s)
//	{
//		p = s;
//		s = s->next;
//		delete(p);
//	}
//	L->next = NULL;
//	flag = 3;
//	return OK;
//}
//int ListLength(LinkList L, int& sum)
//{
//	LinkList p;
//	p = L;
//	while (p->next != NULL)
//	{
//		sum++;
//		p = p->next;
//	}
//	return OK;
//}
//int GetElem(LinkList L, int i, int& e)
//{
//	LinkList p;
//	int j = 1;
//	p = L->next;
//	while (p && j < i)
//	{
//		p = p->next;
//		j++;
//	}
//	if (!p || j > i) return ERROR;
//	e = p->data;
//	return OK;
//}
//int LocateElem(LinkList L, int& i, int e)
//{
//	LinkList p;
//	i = 1;
//	p = L->next;
//	while (p != NULL)
//	{
//		if (p->data == e)
//			return OK;
//		p = p->next;
//		i++;
//	}
//	return ERROR;
//}
//int PriorElem(LinkList L, int e, LinkList& pre)
//{
//	LinkList p;
//	p = L->next;
//	while (p != NULL)
//	{
//		pre = p;
//		p = p->next;
//		if (p != NULL)
//		{
//			if (p->data == e && pre->data != NULL)
//				return OK;
//		}
//	}
//	return ERROR;
//}
//int NextElem(LinkList L, int e, LinkList& next)
//{
//	LinkList p;
//	p = L->next;
//	while (p->next != NULL)
//	{
//		if (p->data == e)
//		{
//			next = p->next;
//			return OK;
//		}
//		p = p->next;
//	}
//	return ERROR;
//}
//int ListInsert(LinkList L, int i, int e)
//{
//	int sum = 0;
//	LinkList p, q;
//	p = L;
//	while (sum < i - 1 && p != NULL)
//	{
//		p = p->next;
//		sum++;
//	}
//	if (sum == i - 1)
//	{
//		q = new LNode;
//		q->data = e;
//		q->next = p->next;
//		p->next = q;
//		return OK;
//	}
//	return ERROR;
//}
//int ListDelete(LinkList L, int i, int& e)
//{
//	int sum = 0;
//	LinkList p, q;
//	p = L->next;
//	while (p != NULL)
//	{
//		sum++;
//		if (sum + 1 == i)
//		{
//			q = p->next;
//			p->next = q->next;
//			e = q->data;
//			free(q);
//			return OK;
//		}
//		p = p->next;
//	}
//	return ERROR;
//}
//int VisitList(LinkList L)
//{
//	LinkList p;
//	p = L->next;
//	while (p != NULL)
//	{
//		cout << p->data << " ";
//		p = p->next;
//	}
//	return OK;
//}
//int Creat(LinkList& L, int n)
//{
//	L = new LNode;
//	L->next = NULL;
//	LinkList p;
//	int i;
//	for (i = n; i > 0; i--)
//	{
//		p = new LNode;
//		cin >> p->data;
//		p->next = L->next;
//		L->next = p;
//	}
//	flag = 1;
//	return OK;
//}
//int Updown(LinkList& L)
//{
//	LinkList p, L1, q;
//	p = L->next;
//	L1 = new LNode;
//	L1->next = NULL;
//	while (p != NULL)
//	{
//		q = new LNode;
//		q->data = p->data;
//		q->next = L1->next;
//		L1->next = q;
//		p = p->next;
//	}
//	L->next = L1->next;
//	return OK;
//}

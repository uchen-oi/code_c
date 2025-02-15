//#include<iostream>
//using namespace std;
//#define LIST_SIZE 50
//#define OK 1
//#define ERROR 0
//typedef struct {
//	int* elem;
//	int listsize;
//	int length;
//}List;
//int InitList(List& L);
//int DestroyList(List& L);
//int ClearList(List& L);
//int ListEmpty(List& L);
//int ListLength(List& L);
//int GetElem(List& L, int i, int& e);
//int LocateElem(List& L, int& i, int e);
//int PriorElem(List& L, int e, int& pre);
//int NextElem(List& L, int e, int& next);
//int ListInsert(List& L, int i, int e);
//int ListDelete(List& L, int i, int& e);
//void VisitList(List& L);
//void Union();
//int flag = 0;
//int main()
//{
//	int choice;
//	List L = { 0 };
//	cout << "1----初始化一个线性表" << endl;
//	cout << "2----销毁线性表" << endl;
//	cout << "3----清空线性表" << endl;
//	cout << "4----判断线性表是否为空" << endl;
//	cout << "5----求线性表长度" << endl;
//	cout << "6----获取线性表中指定位置的元素" << endl;
//	cout << "7----获取线性表元素的位置" << endl;
//	cout << "8----求前驱" << endl;
//	cout << "9----求后继" << endl;
//	cout << "10----在线性表指定位置插入元素" << endl;
//	cout << "11----删除线性表指定位置的元素" << endl;
//	cout << "12----显示线性表" << endl;
//	cout << "13----合并两个非递减有序的线性表" << endl;
//	cout << "退出，输入一个负数！" << endl << endl;
//	cout << "请输入操作代码：";
//	cin >> choice;
//	while (choice >= 0)
//	{
//		switch (choice)
//		{
//		case 1:
//		{
//			int A = InitList(L);
//			if (!A) cout << "初始化失败！" << endl;
//			else cout << "初始化成功！" << endl;
//			break;
//		}
//		case 2:
//		{
//			if (flag == 2)
//			{
//				cout << "表已销毁" << endl; break;
//			}
//			int B = DestroyList(L);
//			if (!B) cout << "操作失败！" << endl;
//			else cout << "销毁成功！" << endl;
//			break;
//		}
//		case 3:
//		{
//			if (flag == 2)
//			{
//				cout << "表已销毁" << endl; break;
//			}
//			int C = ClearList(L);
//			if (!C) cout << "操作失败！" << endl;
//			else cout << "清空成功！" << endl;
//			break;
//		}
//		case 4:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl; break;
//			}
//			if (flag == 2)
//			{
//				cout << "表已销毁" << endl; break;
//			}
//			int D = ListEmpty(L);
//			if (D) cout << "表不为空" << endl;
//			else cout << "表为空" << endl;
//			break;
//		}
//		case 5:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl; break;
//			}
//			if (flag == 2)
//			{
//				cout << "表已销毁" << endl; break;
//			}
//			int E = ListLength(L);
//			cout << "表长为：" << E << endl;
//			break;
//		}
//		case 6:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl; break;
//			}
//			if (flag == 2)
//			{
//				cout << "表已销毁" << endl; break;
//			}
//			if (flag == 3)
//			{
//				cout << "表已清空" << endl; break;
//			}
//			int i, e;
//			cout << "请输入指定的位置：";
//			cin >> i;
//			cout << endl;
//			int F = GetElem(L, i, e);
//			if (!F) cout << "位置不合法" << endl;
//			else cout << "该元素为：" << e << endl;
//			break;
//		}
//		case 7:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl; break;
//			}
//			if (flag == 2)
//			{
//				cout << "表已销毁" << endl; break;
//			}
//			if (flag == 3)
//			{
//				cout << "表已清空" << endl; break;
//			}
//			int i, e;
//			cout << "请输入元素：";
//			cin >> e;
//			cout << endl;
//			int G = LocateElem(L, i, e);
//			if (!G) cout << "元素不存在" << endl;
//			else cout << "该元素的位置是：" << i << endl;
//			break;
//		}
//		case 8:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl; break;
//			}
//			if (flag == 2)
//			{
//				cout << "表已销毁" << endl; break;
//			}
//			if (flag == 3)
//			{
//				cout << "表已清空" << endl; break;
//			}
//			int e, pre;
//			cout << "请输入元素：";
//			cin >> e;
//			cout << endl;
//			int H = PriorElem(L, e, pre);
//			if (!H) cout << "该元素为第一个元素或元素不存在" << endl;
//			else cout << "该元素的前驱是：" << pre << endl;
//			break;
//		}
//		case 9:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl; break;
//			}
//			if (flag == 2)
//			{
//				cout << "表已销毁" << endl; break;
//			}
//			if (flag == 3)
//			{
//				cout << "表已清空" << endl; break;
//			}
//			int e, next;
//			cout << "请输入元素：";
//			cin >> e;
//			cout << endl;
//			int I = NextElem(L, e, next);
//			if (!I) cout << "该元素为最后一个元素或元素不存在" << endl;
//			else cout << "该元素的后继是：" << next << endl;
//			break;
//		}
//		case 10:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl; break;
//			}
//			if (flag == 2)
//			{
//				cout << "表已销毁" << endl; break;
//			}
//			if (flag == 3)
//			{
//				cout << "表已清空" << endl; break;
//			}
//			int i, e;
//			cout << "请输入想插入的元素：";
//			cin >> e;
//			cout << endl << "请输入想插入的位置：";
//			cin >> i;
//			cout << endl;
//			int J = ListInsert(L, i, e);
//			if (!J) cout << "位置不合法或空间已满" << endl;
//			else cout << "插入成功" << endl;
//			break;
//		}
//		case 11:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl; break;
//			}
//			if (flag == 2)
//			{
//				cout << "表已销毁" << endl; break;
//			}
//			if (flag == 3)
//			{
//				cout << "表已清空" << endl; break;
//			}
//			int i, e;
//			cout << "请输入想删除元素的位置：";
//			cin >> i;
//			cout << endl;
//			int K = ListDelete(L, i, e);
//			if (!K) cout << "位置不合法" << endl;
//			else
//			{
//				cout << "删除成功" << endl;
//				cout << "删除的元素为：" << e << endl;
//			}
//			break;
//		}
//		case 12:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl; break;
//			}
//			if (flag == 2)
//			{
//				cout << "表已销毁" << endl; break;
//			}
//			if (flag == 3)
//			{
//				cout << "表已清空" << endl; break;
//			}
//			VisitList(L); break;
//		}
//		case 13:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl; break;
//			}
//			Union(); break;
//		}
//		default:cout << "error" << endl; break;
//		}
//		cout << "1----初始化一个线性表" << endl;
//		cout << "2----销毁线性表" << endl;
//		cout << "3----清空线性表" << endl;
//		cout << "4----判断线性表是否为空" << endl;
//		cout << "5----求线性表长度" << endl;
//		cout << "6----获取线性表中指定位置的元素" << endl;
//		cout << "7----获取线性表元素的位置" << endl;
//		cout << "8----求前驱" << endl;
//		cout << "9----求后继" << endl;
//		cout << "10----在线性表指定位置插入元素" << endl;
//		cout << "11----删除线性表指定位置的元素" << endl;
//		cout << "12----显示线性表" << endl;
//		cout << "13----合并两个非递减有序的线性表" << endl;
//		cout << "退出，输入一个负数！" << endl << endl;
//		cout << "请输入操作代码：";
//		cin >> choice;
//		cout << endl;
//	}
//	if (choice < 0) cout << "已退出" << endl;
//}
//int InitList(List& L)
//{
//	L.elem = (int*)malloc(LIST_SIZE * sizeof(int));
//	if (!L.elem) return ERROR;
//	L.length = 0;
//	L.listsize = LIST_SIZE;
//	flag = 1;
//	return OK;
//}
//int DestroyList(List& L)
//{
//	if (!flag) return ERROR;
//	free(L.elem);
//	L.elem = NULL;
//	L.length = 0;
//	L.listsize = 0;
//	flag = 2;
//	return OK;
//}
//int ClearList(List& L)
//{
//	if (!flag) return ERROR;
//	L.length = 0;
//	flag = 3;
//	return OK;
//}
//int ListEmpty(List& L)
//{
//	if (L.length) return OK;
//	return ERROR;
//}
//int ListLength(List& L)
//{
//	return L.length;
//}
//int GetElem(List& L, int i, int& e)
//{
//	if (i<1 || i>L.length) return ERROR;
//	e = L.elem[i - 1];
//	return OK;
//}
//int LocateElem(List& L, int& i, int e)
//{
//	int FLAG = 0;
//	for (i = 0; i < L.length; i++)
//	{
//		if (L.elem[i] == e)
//		{
//			FLAG = 1;
//			return OK;
//		}
//	}
//	if (!FLAG) return ERROR;
//}
//int PriorElem(List& L, int e, int& pre)
//{
//	int i;
//	for (i = 0; i < L.length; i++)
//	{
//		if (L.elem[i] == e && i != 0)
//		{
//			pre = L.elem[i - 1]; return OK;
//		}
//	}
//	return ERROR;
//}
//int NextElem(List& L, int e, int& next)
//{
//	int i;
//	for (i = 0; i < L.length; i++)
//	{
//		if (L.elem[i] == e && i != L.length - 1)
//		{
//			next = L.elem[i + 1]; return OK;
//		}
//	}
//	return ERROR;
//}
//int ListInsert(List& L, int i, int e)
//{
//	if (i<1 || i>L.length + 1) return ERROR;
//	if (L.length >=L.listsize) return ERROR;
//	int j;
//	for (j = L.length; j >= i - 1; j--)
//	{
//		L.elem[j + 1] = L.elem[j];
//	}
//	L.elem[i - 1] = e;
//	L.length++;
//	return OK;
//}
//int ListDelete(List& L, int i, int& e)
//{
//	if (i<1 || i>L.length) return ERROR;
//	e = L.elem[i - 1];
//	int j;
//	for (j = i - 1; j < L.length - 1; j++)
//	{
//		L.elem[j] = L.elem[j + 1];
//	}
//	L.length--;
//	return	OK;
//}
//void VisitList(List& L)
//{
//	int i;
//	for (i = 0; i < L.length; i++)
//	{
//		cout << L.elem[i] << " ";
//	}
//	cout << endl;
//}
//void Union()
//{
//	List La, Lb, Lc;
//	int ai, bj;
//	int A[5] = { 2,3,3,4,5 };
//	int B[6] = { 1,4,5,6,6,7 };
//	La.elem = A;
//	Lb.elem = B;
//	InitList(Lc);
//	int n, i = 1, j = 1, k = 0;
//	La.length = 5;
//	Lb.length = 6;
//	Lc.length = 0;
//	while (i <= La.length && j <= Lb.length)
//	{
//		GetElem(La, i, ai); GetElem(Lb, j, bj);
//		int flagA = 1, flagB = 1;
//		for (n = 0; n < Lc.length; n++)
//		{
//			if (ai == Lc.elem[n])
//			{
//				flagA = 0; i++; break;
//			}
//		}
//		if (ai <= bj && flagA)
//		{
//			ListInsert(Lc, ++k, ai); i++;
//		}
//		for (n = 0; n < Lc.length; n++)
//		{
//			if (bj == Lc.elem[n])
//			{
//				flagB = 0; j++; break;
//			}
//		}
//		if (bj < ai && flagB)
//		{
//			ListInsert(Lc, ++k, bj); j++;
//		}
//	}
//	while (i <= La.length)
//	{
//		GetElem(La, i, ai);
//		int flagA = 1;
//		for (n = 0; n < Lc.length; n++)
//		{
//			if (ai == Lc.elem[n])
//			{
//				flagA = 0; i++; break;
//			}
//		}
//		if (flagA) ListInsert(Lc, ++k, ai);
//	}
//	while (j <= Lb.length)
//	{
//		GetElem(Lb, j, bj);
//		int flagB = 1;
//		for (n = 0; n < Lc.length; n++)
//		{
//			if (bj == Lc.elem[n])
//			{
//				flagB = 0; j++; break;
//			}
//		}
//		if (flagB) ListInsert(Lc, ++k, bj);
//	}
//	for (i = 0; i < Lc.length; i++)
//		cout << Lc.elem[i] << " ";
//	cout << endl;
//}

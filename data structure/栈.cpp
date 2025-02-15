//#include<iostream>
//#include<stdlib.h>
//#include<math.h>
//using namespace std;
//#define OK 1
//#define ERROR 0
//#define STACK_SIZE 100
//#define STACKINCREMENT 10
//typedef struct {
//	int* base;
//	int* top;
//	int stacksize;
//}Stack;
//int flag = 0;
//Stack S = { 0 };
//int InitStack(Stack& S); 
//int DestroyStack(Stack& S); 
//int ClearStack(Stack& S);
//int StackEmpty(Stack S);
//int StackLength(Stack S);
//int GetTop(Stack S, int& e);
//int Push(Stack& S, int e);
//int Pop(Stack& S, int& e);
//void StackTrave(Stack S); 
//void Transform(int i);
//int main()
//{
//	int R,a;
//	cout << "1.初始化栈" << endl;
//	cout << "2.销毁栈" << endl;
//	cout << "3.清空栈" << endl;
//	cout << "4.判栈空" << endl;
//	cout << "5.求栈长度" << endl;
//	cout << "6.获取栈顶元素" << endl;
//	cout << "7.插入一个元素" << endl;
//	cout << "8.删除一个元素" << endl;
//	cout << "9.输出所有元素" << endl;
//	cout << "10.进制转换" << endl;
//	cout << "请输入要执行的操作：" << endl;
//	cin >> a;
//	while (a >= 0)
//	 {
//		switch (a)
//		{
//			case 1:
//		   {
//			R = InitStack(S);
//			if (R)cout << "初始化成功" << endl;
//			else cout << "初始化失败" << endl;
//			break;
//		   }
//            case 2:
//			{
//				if (!flag)
//				{
//					cout << "未初始化" << endl;
//						break; 
//				}
//					R = DestroyStack(S);
//				if (R)cout << "销毁成功" << endl;
//				else cout << "销毁失败" << endl;
//				break;
//			}
//			case 3:
//			{
//				if (!flag)
//				{
//					cout << "未初始化" << endl;
//					   break;
//				}
//				if (flag == 2)
//				{
//					cout << "栈已销毁" << endl;
//					break;
//				}
//				R = ClearStack(S);
//				if (R) cout << "清空成功" << endl;
//				else cout << "清空失败" << endl;
//				break;
//			}
//			case 4:
//			{
//				if (!flag)
//				{
//					cout << "未初始化" << endl;
//					break;
//				}
//				if (flag == 2)
//				{
//					cout << "栈已销毁" << endl;
//					break;
//				}
//				R = StackEmpty(S);
//				if (R) cout << "栈为空" << endl;
//				else cout << "栈不为空" << endl;
//				break;
//			}
//			case 5:
//			{
//				if (!flag)
//				{
//					cout << "未初始化" << endl;
//					break;
//				}
//				if (flag == 2)
//				{
//					cout << "栈已销毁" << endl;
//					break;
//				}
//				R = StackLength(S);
//				cout << "栈的长度为：" << R << endl;
//				break;
//			}
//			case 6:
//			{
//				if (!flag)
//				{
//					cout << "未初始化" << endl;
//					break;
//				}
//				if (flag == 2)
//				{
//					cout << "栈已销毁" << endl;
//					break;
//				}
//				int e;
//				R = GetTop(S, e);
//				if (R) cout << "栈顶元素为：" << e << endl;
//				else cout << "操作失败" << endl;
//				break;
//			}
//			case 7:
//			{
//				if (!flag)
//				{
//					cout << "未初始化" << endl;
//					break;
//				}
//				if (flag == 2)
//				{
//					cout << "栈已销毁" << endl;
//					break;
//				}
//				int e;
//				cout << "请输入要插入的元素：";
//				cin >> e;
//				cout << endl;
//				R = Push(S, e);
//				if (R) cout << "插入成功" << endl;
//				else cout << "插入失败" << endl;
//				break;
//			}
//			case 8:
//			{
//				if (!flag)
//				{
//					cout << "未初始化" << endl;
//					break;
//				}
//				if (flag == 2)
//				{
//					cout << "栈已销毁" << endl;
//					break;
//				}
//				if (S.base == S.top)
//				{
//					cout << "栈为空" << endl;
//					break;
//				}
//				int e;
//				R = Pop(S, e);
//				if (R) cout << "删除成功，删除的元素为：" << e << endl;
//				else cout << "删除失败" << endl;
//				break;
//			}
//			case 9:
//			{
//				if (!flag)
//				{
//					cout << "未初始化" << endl;
//					break;
//				}
//				if (flag == 2)
//				{
//					cout << "栈已销毁" << endl;
//					break;
//				}
//				if (S.base == S.top)
//				{
//					cout << "栈为空" << endl;
//					break;
//				}
//				StackTrave(S);
//				cout << endl;
//				break;
//			}
//			case 10:
//			{
//				if (!flag)
//				{
//					cout << "未初始化" << endl;
//					break;
//				}
//				if (flag == 2)
//				{
//					cout << "栈已销毁" << endl;
//					break;
//				}
//				int i;
//				cout << "请输入要转换成的进制：" ;
//				cin >> i;
//				cout << endl;
//				cout << "请输入要转换的数：";
//				Transform(i);
//				cout << endl;
//				break;
//			}
//			default:cout << "ERROR" << endl;				
//	    }
//		cout << "1.初始化栈" << endl;
//		cout << "2.销毁栈" << endl;
//		cout << "3.清空栈" << endl;
//		cout << "4.判栈空" << endl;
//		cout << "5.求栈长度" << endl;
//		cout << "6.获取栈顶元素" << endl;
//		cout << "7.插入一个元素" << endl;
//		cout << "8.删除一个元素" << endl;
//		cout << "9.输出所有元素" << endl;
//		cout << "10.进制转换" << endl;
//		cout << "请输入要执行的操作：" << endl;
//		cin >> a;
//	 }
//	if (a < 0)
//		cout << "已退出" << endl;
//}
//int InitStack(Stack& S)
//{
//	S.base = (int*)malloc(STACK_SIZE * sizeof(int)); 
//	if (!S.base)exit(OVERFLOW);
//	S.top = S.base;
//	S.stacksize = STACK_SIZE;
//	flag = 1;
//	return OK;
//}
//int DestroyStack(Stack& S)
//{
//	free(S.base);
//	S.base = NULL;
//	flag = 2;
//	return OK;
//}
//int ClearStack(Stack& S)
//{
//	S.top =S.base;
//	return OK;
//}
//int StackEmpty(Stack S)
//{
//	return (S.base == S.top);
//}
//int StackLength(Stack S)
//{
//	return(S.top - S.base);
//}
//int GetTop(Stack S, int& e)
//{
//	e = *(S.top - 1);
//	return OK;
//}
//int Push(Stack& S, int e)
//{
//	*S.top++ = e;
//	return OK;
//}
//int Pop(Stack& S, int& e)
//{
//	e = *--S.top;
//	return OK;
//}
//void StackTrave(Stack S)
//{
//	int* p;
//	p = S.base;
//	for (p; p < S.top; p++)
//		cout << *p << " ";
//}
//void Transform(int i)
//{
//	int n,e;
//	cin >> n;
//	while (n)
//	{
//		Push(S, n % i);
//			n = n / i;
//	}
//	while (!StackEmpty(S))
//	{
//		Pop(S, e);
//		cout << e;
//	}
//}

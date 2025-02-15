//#include<iostream>
//using namespace std;
//#define OK 1
//#define ERROR 0
//#define MAXSIZE 1000
//typedef struct
//{
//	int i,j,value;
//}Triple;
//typedef struct
//{
//	Triple data[MAXSIZE + 1];
//	int mu, nu, tu;
//}TSM;
//int flag = 0;
//int Creat(TSM& M);
//int Destroy(TSM& M);
//void Print(TSM M);
//void Trans(TSM M,TSM& T);
//void QTrans(TSM M,TSM& T);
//int main()
//{
//	TSM M = { 0 };
//	TSM T = { 0 };
//	int choice, R;
//	cout << "1.创建矩阵" << endl;
//	cout << "2.销毁矩阵" << endl;
//	cout << "3.输出矩阵" << endl;
//	cout << "4.转置矩阵" << endl;
//	cout << "5.快速转置矩阵" << endl;
//	cout << "请输入操作代码：";
//	cin >> choice;
//	while (choice >= 0)
//	{
//		switch (choice)
//		{
//		case 1:
//		{
//			R=Creat(M);
//			if (R) cout << "创建成功" << endl;
//			break;
//		}
//		case 2:
//		{
//			if (!flag)
//			{
//				cout << "未初始化" << endl;
//				break;
//			}
//			R=Destroy(M);
//			if (R) cout << "销毁成功" << endl;
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
//				cout << "矩阵已销毁" << endl;
//				break;
//			}
//			Print(M);
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
//				cout << "矩阵已销毁" << endl;
//				break;
//			}
//			Trans(M, T);
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
//				cout << "矩阵已销毁" << endl;
//				break;
//			}
//			QTrans(M, T);
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
//}
//int Creat(TSM& M)
//{
//	cout << "请输入行数列数和非零元个数：" << endl;
//	cin >> M.mu>> M.nu>>M.tu;
//	if (M.tu > M.mu * M.nu)
//	{
//		cout << "输入错误，非零元素个数要小于等于行数乘列数，请重新输入。" << endl;
//		return ERROR;
//	}
//	else
//	{
//		cout << "请输入各非零元" << endl;
//		for (int a = 1; a <= M.tu; a++)
//		{
//			cin >> M.data[a].i>> M.data[a].j>> M.data[a].value;
//			for (int b = 1; b < a; b++)
//			{
//				if (M.data[a].i == M.data[b].i && M.data[a].j == M.data[b].j)
//				{
//					cout << "输入错误，输入的下标重复，请重新输入！" << endl;
//					a--;
//					break;
//				}
//				if (M.data[a].i < M.data[b].i || M.data[a].i == M.data[b].i && M.data[a].j < M.data[b].j)
//				{
//					cout << "输入错误，下标输入时要递增输入，请重新输入！" << endl;
//					a--;
//					break;
//				}
//			}
//		}
//	}
//	flag = 1;
//	return OK;
//}
//int Destroy(TSM& M)
//{
//	M = { 0 };
//	flag = 2;
//	return OK;
//}
//void Print(TSM M)
//{
//	int k = 1;
//		for (int a = 1; a <= M.mu; a++)
//		{
//			for (int b = 1; b <= M.nu; b++)
//			{
//				if (a == M.data[k].i && b == M.data[k].j)
//				{
//					cout << M.data[k].value << "  ";
//					k++;
//				}	
//				else cout << "0" << "  ";
//			}
//			cout << endl;
//		}
//}
//void Trans(TSM M,TSM& T)
//{
//	T.mu = M.nu; T.nu = M.mu; T.tu = M.tu;
//	if (T.tu)
//	{
//		int k = 1;
//		for (int a = 1; a <= M.nu; a++)
//		{
//			for (int b = 1; b <= M.tu; b++)
//			{
//				if (M.data[b].j == a)
//				{
//					T.data[k].i = M.data[b].j; T.data[k].j = M.data[b].i;
//					T.data[k].value = M.data[b].value; k++;
//				}
//			}
//		}
//		Print(T);
//	}
//}
//void QTrans(TSM M,TSM& T)
//{
//	int col;
//	int cpot[20] = { 0 };
//	int num[20] = { 0 };
//	for (int a = 1; a <= M.tu; a++)
//	{
//		num[M.data[a].j]++;
//	}                                //每一列非零元个数
//	cpot[1] = 1;
//	//求第col列中第一个非零元在T.data中的位置
//	for (col = 2; col <= M.tu; col++)
//	{
//		cpot[col] = cpot[col - 1] + num[col - 1];
//	}
//	for (int b = 1; b <= M.tu; b++)
//	{
//		col = M.data[b].j;
//		int k = cpot[col];
//		T.data[k].i = M.data[b].j;
//		T.data[k].j = M.data[b].i;
//		T.data[k].value = M.data[b].value;
//		cpot[col]++;
//	}
//	Print(T);
//}
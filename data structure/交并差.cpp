//#include<iostream>
//using namespace std;
//void input();
//void jiao(int A[], int B[]);
//void bing(int A[], int B[]);
//void cha(int A[], int B[]);
//int n = 0, m = 0;          //n,m分别表示向集合A,B中输入的元素的个数
//int A[50] = { 0 };
//int B[50] = { 0 };
//
//主函数  输出主界面
//
//int main()
//{
//	int a;
//	cout << "请输入想要进行的操作" << endl;
//	cout << "1---输入集合A和B" << endl;
//	cout << "2---求集合A交B" << endl;
//	cout << "3---求集合A并B" << endl;
//	cout << "4---求集合A-B" << endl;
//	cout << "退出，输入一个负数！" << endl;
//	cin >> a;
//	while (a >= 0)
//	{
//		switch (a)
//		{
//		case 1:input(); break;
//		case 2:jiao(A, B); break;
//		case 3:bing(A, B); break;
//		case 4:cha(A, B); break;
//		default:cout << "error" << endl; break;
//		}
//		cout << "请输入想要进行的操作" << endl;
//		cout << "1---输入集合A和B" << endl;
//		cout << "2---求集合A交B" << endl;
//		cout << "3---求集合A并B" << endl;
//		cout << "4---求集合A-B" << endl;
//		cout << "退出，输入一个负数！" << endl;
//		cin >> a;
//	}
//	if (n < 0) cout << "已退出" << endl;
//}
//
//输入函数 输入A,B
//
//void input()
//{
//	int i, j;
//	cout << "请输入集合A中的元素个数" << endl;
//	cin >> n;
//	cout << "请输入集合A中的所有元素" << endl;
//	for (i = 0; i < n; i++)
//	{
//		cin >> A[i];
//		for (j = 0; j < i; j++)
//		{
//			if (A[j] == A[i])
//			{
//				cout << "该元素重复，请重新输入" << endl;
//				i--; break;
//			}
//		}
//	}
//	cout << "请输入集合B中的元素个数" << endl;
//	cin >> m;
//	cout << "请输入集合B中的所有元素" << endl;
//	for (i = 0; i < m; i++)
//	{
//		cin >> B[i];
//		for (j = 0; j < i; j++)
//		{
//			if (B[j] == B[i])
//			{
//				cout << "该元素重复，请重新输入" << endl;
//				i--; break;
//			}
//		}
//	}
//	cout << "您输入的集合为：" << endl;
//	cout << "集合A：{";
//	for (i = 0; i < n; i++)
//	{
//		cout << A[i] << " ";
//	}
//	cout << "}" << endl;
//	cout << "集合B：{";
//	for (i = 0; i < m; i++)
//	{
//		cout << B[i] << " ";
//	}
//	cout << "}" << endl << endl << endl;
//}
//
//实现交运算的函数
//
//void jiao(int A[], int B[])
//{
//	int i, j, s = 0;
//	int C[100] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (A[i] == B[j])
//			{
//				s++;
//				C[s - 1] = A[i];
//			}
//		}
//	}
//	cout << "A交B的结果为：{";
//	for (i = 0; i < s; i++)
//	{
//		cout << C[i] << " ";
//	}
//	cout << "}" << endl << endl << endl;
//}
//
//实现并运算的函数
//
//void bing(int A[], int B[])
//{
//	int i, j, flag, s = 0;
//	int C[100] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		C[i] = A[i];
//	}
//	for (i = 0; i < m; i++)
//	{
//		flag = 1;
//		for (j = 0; j < n; j++)
//		{
//			if (B[i] == A[j])
//			{
//				flag = 0; break;
//			}
//		}
//		if (flag)
//		{
//			s++; C[n + s - 1] = B[i];
//		}
//	}
//	cout << "A并B的结果为：{";
//	for (i = 0; i < n + s; i++)
//	{
//		cout << C[i] << " ";
//	}
//	cout << "}" << endl << endl << endl;
//}
//
//实现差运算的函数
//
//void cha(int A[], int B[])
//{
//	int i, j, flag, s = 0;
//	int C[100] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		flag = 1;
//		for (j = 0; j < m; j++)
//		{
//			if (A[i] == B[j])
//			{
//				flag = 0; break;
//			}
//		}
//		if (flag)
//		{
//			s++; C[s - 1] = A[i];
//		}
//	}
//	cout << "A-B的结果为：{";
//	for (i = 0; i < s; i++)
//		cout << C[i] << " ";
//	cout << "}" << endl << endl << endl;
//}

//#include<iostream>
//using namespace std;
//void cr(int o, int p);
//void output(int u);
//int a[100] = { 0 };
//int main()
//{
//	int i,n,x;
//    cout << "input n" << endl;
//	cin >> n;
//	cout << "����һ����������" << endl;
//	for (i = 0; i < n; i++)
//		cin >> a[i];
//	cout << "����Ҫ�����x" << endl;
//	cin >> x;
//	cr(x,n);
//	output(n);
//}
//void cr(int o, int p)
//{
//	int i;
//	for (i = p - 1; i >= 0; i--)
//	{
//		if (a[i] < o) break;
//		else a[i + 1] = a[i];
//	}
//	a[i + 1] = o;
//}
//void output(int u)
//{
//	int i;
//	for (i = 0; i <=u; i++)
//		cout << a[i] << " ";
//}
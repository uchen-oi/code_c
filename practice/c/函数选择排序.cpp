//#include<iostream>
//using namespace std;
//void input(int m);
//void px(int m);
//void output(int m);
//int a[100] = { 0 };
//int n;
//int main()
//{
//	int m=0;
//	input(m);
//	px(m);
//	output(m);
//
//	return 0;
//}
//void input(int m)
//{
//	int i;
//	cout << "input n" << endl;
//	cin >> n;
//	cout << "input " << n << " numbers" << endl;
//	for (i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//}
//void px(int m)
//{
//	int i, j, t, min;
//	for (i = 0; i < n - 1; i++)
//	{
//		min=i;
//		for (j = i+1; j < n ; j++)
//		{
//			if (a[j] < a[min]) min = j;
//		}
//		t = a[min]; a[min] = a[ i ]; a[ i ] = t;
//	}
//}
//void output(int m)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		cout << a[i] << " ";
//}
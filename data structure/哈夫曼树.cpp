//#include<iostream>
//using namespace std;
//typedef char* huffcode[100];
//typedef struct
//{
//	int weight;
//	char data;
//	char* co;
//	int par, lc, rc;
//}huffTree;
//void Huffman_Tree(huffTree ht[], int* w, int n);
//void Select(huffTree ht[], int j, int& i1, int& i2);
//void Huffcode(huffTree ht[], char* huffcode[], int n);
//void Yi(huffTree ht[], int n, char* str);
//void Bian(huffTree ht[], int n, char* s);
//int main()
//{
//	huffTree ht[100] = { 0 };
//	huffcode hc = { 0 };
//	char str[100];
//	char s[100];
//	int w[50] = { 0 };
//	int n ;
//	int choice;
//	int flag = 0;
//	cout << "1----输入Huffman Tree的参数" << endl;
//	cout << "2----创建Huffman Tree" << endl;
//	cout << "3----创建编码表" << endl;
//	cout << "4----输入编码，翻译为字符" << endl;
//	cout << "5----输入字符，实现转码" << endl;
//	cout << "6----退出" << endl;
//	do {
//		cout << "请输入操作：";
//		cin >> choice;
//		switch (choice)
//		{
//			case 1:
//			{
//				cout << "请输入结点个数：";
//				cin >> n;
//				char ch;
//				cout << endl << "请输入" << n << "个字符：";
//				for (int i = 0; i < n; i++)
//				{
//					getchar();
//					ch = getchar();
//					ht[i].data = ch;
//				}
//				cout << endl;
//				cout << endl << "请输入" << n << "个权值：";
//				for (int i = 0; i < n; i++)
//				{
//					cin >> w[i];
//				}
//				cout << endl;
//				flag = 1;
//				cout << "输入成功" << endl;
//				break;
//			}
//			case 2:
//			{
//				if (!flag)
//				{
//					cout << "请先输入参数" << endl;
//					break;
//				}
//				Huffman_Tree(ht, w, n);
//				cout << "创建的哈夫曼树：" << endl;
//				for(int i=0;i<2*n-1;i++)
//				{ 
//					cout << ht[i].weight << "\t" << ht[i].par << "\t" << ht[i].lc << "\t" << ht[i].rc << endl;
//				}
//				cout << endl;
//				break;
//			}
//			case 3:
//			{
//				if (!flag)
//				{
//					cout << "请先创建哈夫曼树" << endl;
//					break;
//				}
//				Huffcode(ht, hc, n);
//				cout << endl;
//				break;
//			}
//			case 4:
//			{
//				if (!flag)
//				{
//					cout << "请先创建哈夫曼树" << endl;
//					break;
//				}
//				cout << "请输入编码：";
//				string A;
//				cin >> A;
//				strcpy_s(str, A.c_str());
//				cout << endl;
//				Yi(ht,n,str);
//				cout << endl;
//				break;
//			}
//			case 5:
//			{
//				if (!flag)
//				{
//					cout << "请先创建哈夫曼树" << endl;
//					break;
//				}
//				cout << "请输入字符：";
//				getchar();
//				cin.getline(s,100);
//				Bian(ht, n, s);
//				cout << endl;
//				break;
//			}
//			case 6:
//			{
//				cout << "已退出" << endl;
//				break;
//			}
//			default:
//			{
//				cout << "error!" << endl;
//				break;
//			}
//		}
//	} while (choice != 7);
//}
//void Huffman_Tree(huffTree ht[], int* w, int n)
//{
//	if (n <= 1) return;
//	int m = 2 * n - 1;
//	for (int i = 0; i < m; i++)
//	{
//		ht[i].lc = -1;
//		ht[i].par = -1;
//		ht[i].rc = -1;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		ht[i].weight = w[i];
//	}
//	for (int i1, i2, j = n; j < m; j++)
//	{
//		Select(ht, j, i1, i2);
//		ht[j].weight = ht[i1].weight + ht[i2].weight;
//		ht[i1].par = j;
//		ht[i2].par = j;
//		ht[j].lc = i1;
//		ht[j].rc = i2;
//	}
//}
//void Select(huffTree ht[], int j, int& i1, int& i2)
//{
//	int min =9999;
//	for (int i = 0; i < j; i++)
//	{
//		if (ht[i].par == -1 && ht[i].weight < min)
//		{
//			min = ht[i].weight;
//			i1 = i;
//		}
//	}
//	min = 9999;
//	for (int i = 0; i < j; i++)
//	{
//		if (i != i1)
//		{
//			if (ht[i].par == -1 && ht[i].weight < min)
//			{
//				min = ht[i].weight;
//				i2 = i;
//			}
//		}
//	}
//}
//void Huffcode(huffTree ht[], char* huffcode[], int n)
//{
//	char* temp = new char[n];
//	int pos, parent, start, i;
//	temp[n - 1] = '\0';
//	for (i = 0; i < n; i++)
//	{
//		start = n - 1;
//		pos = i;
//		parent = ht[i].par;
//		while (parent != -1)
//		{
//			if (ht[parent].lc == pos)
//			{
//				temp[--start] = '0';
//			}
//			else
//				temp[--start] = '1';
//			pos = parent;
//			parent = ht[parent].par;
//		}
//		huffcode[i] = new char[n - start];
//		strcpy_s(huffcode[i], strlen(&temp[start])+1, & temp[start]);
//	}
//	delete[]temp;
//	cout << "创建的哈夫曼编码为：" << endl;
//	for (int i=0;i<n;i++)
//	{
//		cout <<ht[i].data<<":" << huffcode[i] << endl;
//		ht[i].co = huffcode[i];
//	}
//}
//void Yi(huffTree ht[], int n, char* str)
//{
//	int len = strlen(str);
//	int i = 0;
//	int m = 2 * n - 2;
//	while(i<len)
//	{
//		if (str[i] == '0')
//		{
//			m = ht[m].lc;
//			i++;
//			if (ht[m].lc == -1 && ht[m].rc == -1)
//			{
//				cout << ht[m].data;
//				m = 2 * n - 2;
//			}
//		}	
//		if (str[i] == '1')
//		{
//			m = ht[m].rc;
//			i++;
//			if (ht[m].lc == -1 && ht[m].rc == -1)
//			{
//				cout << ht[m].data;
//				m = 2 * n - 2;
//			}
//		}	
//	}
//}
//void Bian(huffTree ht[], int n, char* s)
//{
//	int len;
//	len = strlen(s);
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (ht[j].data == s[i])
//				cout << ht[j].co;
//		}
//	}
//}
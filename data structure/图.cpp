//#include<iostream>
//#define OK 1
//#define ERROR 0
//#define MAX_SIZE 20
//using namespace std;
//typedef struct ArcCell {
//	int adj;
//}ArcCell, Adj[MAX_SIZE][MAX_SIZE];
//typedef struct {
//	int ver[MAX_SIZE];
//	Adj arcs;
//	int vernum, arcnum;
//}MGraph;
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
//int Delete(LinkQ& Q, int& e);
//int Insert(LinkQ& Q, int e);
//int QueueEmpty(LinkQ Q);
//LinkQ Q = { 0 };
//void (*VisitFunc)(int v);
//int visited[MAX_SIZE];
//int Creat(MGraph& G);
//int Locate(MGraph G, int vertex);
//int First(MGraph G, int v);
//int Next(MGraph G, int v, int w);
//void DFST(MGraph G, void(*Visit)(int v));
//void DFS(MGraph G, int v);
//void BFST(MGraph G, void(*Visit)(int v));
//void output(int v);
//int main()
//{
//	MGraph G = { 0 };
//	int choice;
//	int flag = 0;
//	cout << "1----构造无向图" << endl;
//	cout << "2----深度优先遍历" << endl;
//	cout << "3----广度优先遍历" << endl;
//	cout << "4----退出" << endl;
//	do {
//		cout << "请输入操作：";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//		{
//			Creat(G);
//			flag = 1;
//			break;
//		}
//		case 2:
//		{
//			if (!flag)
//			{
//				cout << "请先构造图" << endl;
//				break;
//			}
//			cout << "深度优先遍历结果：";
//			DFST(G, output);
//			cout << endl;
//			break;
//		}
//		case 3:
//		{
//			if (!flag)
//			{
//				cout << "请先构造图" << endl;
//				break;
//			}
//			cout << "广度优先遍历结果：";
//			BFST(G, output);
//			cout << endl;
//			break;
//		}
//		case 4:
//		{
//			cout << "已退出" << endl;
//			break;
//		}
//		default:
//		{
//			cout << "ERROR!" << endl;
//			break;
//		}
//		}
//	} while (choice != 4);
//	
//}
//int Creat(MGraph& G)
//{
//	cout << "请输入顶点数和边数：" << endl;
//	cin >> G.vernum >> G.arcnum;
//	cout << "请输入各顶点：" << endl;
//	for (int i = 1; i <= G.vernum; i++)
//	{
//		cin >> G.ver[i];
//	}
//	for (int i = 1; i <= G.vernum; i++)
//	{
//		for (int j = 1; j <= G.vernum; j++)
//		{
//			G.arcs[i][j] = { 0 };
//		}
//	}
//	cout << "请输入一条边依附的两个顶点：" << endl;
//	for (int k = 1; k <= G.arcnum; k++)
//	{
//		int i, j, v1, v2;
//		cin>>v1>>v2;
//		i = Locate(G, v1);
//		j = Locate(G, v2);
//		G.arcs[i][j].adj = 1;
//		G.arcs[j][i] = G.arcs[i][j];
//	}
//	cout << "邻接矩阵为：" << endl;
//	for (int i = 1; i <= G.vernum; i++)
//	{
//		for (int j = 1; j <= G.vernum; j++)
//		{
//			cout<<G.arcs[i][j].adj<<"  ";
//		}
//		cout << '\t' << endl;
//	}
//	return OK;
//}
//int Locate(MGraph G, int v)
//{
//	int i;
//	for (i = 1; i <= MAX_SIZE; i++)
//	{
//		if (G.ver[i] == v)
//		{
//			return i;
//		}
//	}
//	return ERROR;
//}
//int First(MGraph G, int v)
//{
//	int i = Locate(G, v);
//	if (i)
//	{
//		for (int j = 1; j <= G.vernum; j++)
//		{
//			if (G.arcs[i][j].adj == 1)
//				return G.ver[j];
//		}
//	}
//	return ERROR;
//}
//int Next(MGraph G, int v, int w)
//{
//	int i, j,k;
//	i = Locate(G, v);
//	j = Locate(G, w);
//	if (i && j)
//	{
//		for (k = j + 1; k <= G.vernum; k++)
//		{
//			if (G.arcs[i][k].adj == 1)
//				return G.ver[k];
//		}
//	}
//	return ERROR;
//}
//void output(int v)
//{
//	cout << v << " ";
//}
//void DFST(MGraph G, void(*Visit)(int v))
//{
//	int i;
//	VisitFunc = Visit;
//	for (i = 1; i <= G.vernum; i++)
//		visited[i] = 0;
//	for (i = 1; i <=G.vernum; i++)
//	{
//		if (!visited[i]) DFS(G, i);
//	}
//}
//void DFS(MGraph G, int v)
//{
//	visited[v] = 1;
//	VisitFunc(v);
//	for (int w = First(G, v); w >= 1; w = Next(G, v, w))
//	{
//		if (!visited[w]) DFS(G, w);
//	}
//}
//void BFST(MGraph G, void(*Visit)(int v))
//{
//	int v,u,w;
//	for (v = 1; v <= G.vernum; v++)
//		visited[v] = 0;
//	InitQueue(Q);
//	for (v = 1; v <= G.vernum; v++)
//	{
//		if (!visited[v])                                            //v尚未访问
//		{
//			visited[v] = 1;
//			Visit(v);
//			Insert(Q, v);                                            //v入队列
//			while (!QueueEmpty(Q))
//			{
//				Delete(Q, u);                                       //队头元素出队并置为u
//				for (w = First(G, u); w >= 1; w = Next(G, u, w))
//				{
//					if (!visited[w])                                   //w为u的尚未访问的邻接顶点
//					{
//						visited[w] = 1;
//						Visit(w);
//						Insert(Q, w);
//					}
//				}
//			}
//		}
//	}
//
//}
//int InitQueue(LinkQ& Q)
//{
//	Q.head = (QP)malloc(sizeof(QNode));
//	if (!Q.head) exit(OVERFLOW);
//	Q.tail = Q.head;
//	Q.head->next = NULL;
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
//int QueueEmpty(LinkQ Q)
//{
//	return (Q.head == Q.tail);
//}
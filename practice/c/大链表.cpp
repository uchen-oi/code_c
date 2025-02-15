//#include<iostream>
//using namespace std;
//static int flag = 0;
//
////定义结构体
//typedef struct node
//{
//	int data;
//	struct node* next;
//}node,*linklist;
//
////初始化链表
//void chushi(linklist*L)                      //linklist为struct node类型的指针，L为linklist类型的二级指针
//{
//	linklist p;
//	p = new node;                     //p=(linklist)malloc(sizeof(node));
//	if (p == NULL)
//		cout << "申请内存空间失败" << endl;
//	p->next = NULL;
//	*L = p;                           //L相当于表头
//	flag++;
//}
//
////销毁链表
//int destroy(linklist L)
//{
//	node* p;
//	p = NULL;
//	if (L && flag != 0)
//	{
//		while (L)
//		{
//			p = L;
//			L = L->next;
//			delete(p);                //new申请的空间用delete        malloc申请的空间用free
//		}
//		cout << "链表已销毁" << endl;
//	}
//	else
//		cout << "链表不存在" << endl;
//	return 1;
//	flag++;
//}
//
////输出链表长度
//void length(linklist L)
//{
//	int i = 0;
//	linklist p;
//	p = L;
//	while (p->next != NULL)          //遍历链表
//	{
//		i++;
//		p = p->next;
//	}                                
//	cout << "链表中共有" << i << "个元素" << endl;
//}
//
////创建链表
//void creat(linklist L, int n)
//{
//	int i;
//	node* p, * pr;
//	pr = L;
//	for (i = 1; i <= n; i++)           //循环输入链表元素
//	{
//		p = new node;
//		if (p == NULL)                  
//			cout << "申请内存空间失败" << endl;
//		cout << "请输入链表中第"<<i<<"个元素：" << endl;
//		cin >> p->data;
//		p->next = pr->next;
//		pr->next = p;
//		pr = p;
//	}
//}
//
////返回链表中的元素值
//int rut(linklist L, int i)
//{
//	node* p;
//	int r, j;
//	j = 1;
//	p = L->next;
//	while (p && j < i)      //++j直到j==i
//	{
//		p = p->next;
//		++j;
//	}
//	if (!p || j > i)
//		cout << "该位序不存在" << endl;
//	else
//	{
//		r = p->data;
//		cout << "第" << i << "个元素为：" << r << endl;
//	}
//	return 1;
//}
//
////在链表中查找元素并输出其位序
//void find(linklist L, int* o)                  //主函数输入元素，*o指向该元素
//{
//	node* p;
//	int i = 1;
//	p = L->next;
//	while (p != NULL)
//	{
//		if (p->data == *o)
//		{
//			cout << "元素" << *o << "的位序是：" << i << endl;
//			break;
//		}
//		p = p->next;                                     //只要p不为空，p依次向后直至p->data==*o
//		i++;                                                     //i表示位序，p每移一次，次序加一
//	}
//	if (p == NULL)
//		cout << "该元素不存在" << endl;
//}
//
////求元素的直接前驱
//void qianqu(linklist L, int n)
//{
//	node* p, * pr = nullptr;
//	int i = 0;
//	p = L->next;
//	while (p != NULL)
//	{
//		if (p->data == n && i != 0)
//		{
//			cout << "该元素的直接前驱是：" << pr->data << endl;
//			break;
//		}
//		else if (p->data == n && i == 0)          //n为链表中第一个元素时
//		{
//			cout << "该元素没有直接前驱" << endl;
//			break;
//		}
//		pr = p;
//		p = p->next;
//		i++;
//	}
//	if (p == NULL)
//		cout << "该元素不存在" << endl;
//}     
//
////求元素的直接后继
//void houji(linklist L, int n)
//{
//	node* p;
//	p = L->next;
//	while (p != NULL)
//	{
//		if (p->data == n)
//		{
//			if (p->next != NULL)            //n不为链表中的最后一个元素
//				cout << "该元素的直接后继是：" << p->next->data << endl;
//			else
//				cout << "该元素没有直接后继" << endl;
//			break;
//		}
//		p = p->next;                   //p依次后移直至找到n
//	}
//	if (p == NULL)
//		cout << "该元素不存在" << endl;
//}
//
////在链表中第i个位置插入元素
//int insert(linklist L, int place, int n)
//{
//	int j;
//	node* pr, * p;
//	pr = L; j = 0;
//	while (pr && j < place - 1)          //++j        直至        j=要插入的位置的次序减一
//	{
//		pr = pr->next;
//		++j;
//	}
//	if (!pr || j > place - 1)
//		return 0;
//	p = new node;
//	if (p == NULL)
//		cout << "申请内存空间失败" << endl;
//	p->data = n;                             //进行插入操作
//	p->next = pr->next;
//	pr->next = p;
//	cout << "插入的元素是：" << n << endl;
//	return 1;
//}
//
////删除链表中第i个元素
//int del(linklist L, int i)
//{
//
//	int j;
//	node* p, * o;
//	p = L; j = 0;
//	while (p->next && j < i - 1)                       //++j        直至        j=要插入的位置的次序减一
//	{
//		p = p->next;
//		++j;
//	}
//	if (!(p->next) || j > i - 1)
//	{
//		cout << "该位序不存在" << endl;
//		return 0;
//	}
//	o = p->next;                                            
//	p->next = o->next;                               //p->next=p->next->next.
//	cout << "删除的元素是：" << o->data << endl;
//	delete(o);
//	return 1;
//}
//
////输出链表中的元素
//int output(linklist L)
//{
//	linklist p;
//	p = L->next;
//	if (p == NULL)
//	{
//		cout << "该链表中没有元素。" << endl;
//		return 1;
//	}
//	cout << "链表元素如下：" << endl;
//	while (p)
//	{
//		cout << p->data << "  ";
//		p = p->next;
//	}
//	return 1;
//}
//
////输出操作界面
//void Tips()
//{
//	cout << "可执行操作有：" << endl;
//	cout << "*********************************************************" << endl;
//	cout << "***************  1.初始化或重置链表      ****************" << endl;
//	cout << "***************  2.销毁链表              ****************" << endl;
//	cout << "***************  3.链表中数据元素个数    ****************" << endl;
//	cout << "***************  4.所指位序的元素值      ****************" << endl;
//	cout << "***************  5.链表已存在元素的位序  ****************" << endl;
//	cout << "***************  6.请输入元素,求直接前驱 ****************" << endl;
//	cout << "***************  7.请输入元素,求直接后继 ****************" << endl;
//	cout << "***************  8.在第i个位置插入元素   ****************" << endl;
//	cout << "***************  9.删除第i个元素         ****************" << endl;
//	cout << "***************  10.输出所输入的链表元素 ****************" << endl;
//	cout << "***************  11.初始化并输入链表元素 ****************" << endl;
//	cout << "***************  12.退出                 ****************" << endl;
//	cout << "*********************************************************" << endl;
//}
////主函数中调用
//int main()
//{
//	linklist L = NULL;
//	int i, place, pla, element, n5, eleme, placee, ele, elem;
//	int just = 0;
//	do
//	{
//		system("cls");
//		Tips();
//		cout << "请输入你的操作：";
//		cin >> i;
//		switch (i)
//		{
//		case 1:
//		{
//			chushi(&L);
//			cout << "成功初始化一个空的链表！" << endl;
//			just = 1;
//			break;
//		}
//		case 2:
//		{
//			destroy(L);
//			just = 0;
//			break;
//		}
//		case 3:
//		{
//			if (just)
//				length(L);
//			else
//				cout << "链表不存在" << endl;
//			break;
//		}
//		case 4:
//		{
//			if (just)
//			{
//				cout << "请输入所要元素的位序：";
//				cin >> place;
//				rut(L, place);
//			}
//			else
//				cout << "链表不存在" << endl;
//			break;
//		}
//		case 5:
//		{
//			if (just)
//			{
//				cout << "请输入你所要查找的元素：";
//				cin >> element;
//				find(L, &element);
//			}
//			else
//				cout << "链表不存在。" << endl;
//			break;
//		}
//		case 6:
//		{
//			if (just)
//			{
//				cout << "请输入元素：";
//				cin >> ele;
//				qianqu(L, ele);
//			}
//			else
//				cout << "链表不存在。" << endl;
//			break;
//		}
//		case 7:
//		{
//			if (just)
//			{
//				cout << "请输入元素：";
//				cin >> elem;
//				houji(L, elem);
//			}
//			else
//				cout << "链表不存在。" << endl;
//			break;
//		}
//		case 8:
//		{
//			if (just)
//			{
//				cout << "请输入插入元素：";
//				cin >> eleme;
//				cout << "请输入插入元素的位置：" << endl;
//				cin >> placee;
//				insert(L, placee, eleme);
//			}
//			else
//				cout << "链表不存在。" << endl;
//			break;
//		}
//		case 9:
//		{
//			if (just)
//			{
//				cout << "请输入删除元素的位置：" << endl;
//				cin >> pla;
//				del(L, pla);
//			}
//			else
//				cout << "链表不存在。" << endl;
//			break;
//		}
//		case 10:
//		{
//			if (just)
//				output(L);
//			else
//				cout << "链表不存在。" << endl;
//			break;
//		}
//		case 11:
//		{
//			chushi(&L);
//			cout << "请输入链表长度：";
//			cin >> n5;
//			creat(L, n5);
//			just = 1;
//			break;
//		}
//		case 12:
//		{
//			cout << "操作结束！" << endl;
//			exit(0);
//		}
//		default:
//		{
//			cout << "没有该选项，请重新选择。" << endl;
//			break;
//		}
//		}
//		system("pause");
//	} while (1);
//	
//}

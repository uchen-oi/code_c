//#include<iostream>
//using namespace std;
//static int flag = 0;
//
////����ṹ��
//typedef struct node
//{
//	int data;
//	struct node* next;
//}node,*linklist;
//
////��ʼ������
//void chushi(linklist*L)                      //linklistΪstruct node���͵�ָ�룬LΪlinklist���͵Ķ���ָ��
//{
//	linklist p;
//	p = new node;                     //p=(linklist)malloc(sizeof(node));
//	if (p == NULL)
//		cout << "�����ڴ�ռ�ʧ��" << endl;
//	p->next = NULL;
//	*L = p;                           //L�൱�ڱ�ͷ
//	flag++;
//}
//
////��������
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
//			delete(p);                //new����Ŀռ���delete        malloc����Ŀռ���free
//		}
//		cout << "����������" << endl;
//	}
//	else
//		cout << "��������" << endl;
//	return 1;
//	flag++;
//}
//
////���������
//void length(linklist L)
//{
//	int i = 0;
//	linklist p;
//	p = L;
//	while (p->next != NULL)          //��������
//	{
//		i++;
//		p = p->next;
//	}                                
//	cout << "�����й���" << i << "��Ԫ��" << endl;
//}
//
////��������
//void creat(linklist L, int n)
//{
//	int i;
//	node* p, * pr;
//	pr = L;
//	for (i = 1; i <= n; i++)           //ѭ����������Ԫ��
//	{
//		p = new node;
//		if (p == NULL)                  
//			cout << "�����ڴ�ռ�ʧ��" << endl;
//		cout << "�����������е�"<<i<<"��Ԫ�أ�" << endl;
//		cin >> p->data;
//		p->next = pr->next;
//		pr->next = p;
//		pr = p;
//	}
//}
//
////���������е�Ԫ��ֵ
//int rut(linklist L, int i)
//{
//	node* p;
//	int r, j;
//	j = 1;
//	p = L->next;
//	while (p && j < i)      //++jֱ��j==i
//	{
//		p = p->next;
//		++j;
//	}
//	if (!p || j > i)
//		cout << "��λ�򲻴���" << endl;
//	else
//	{
//		r = p->data;
//		cout << "��" << i << "��Ԫ��Ϊ��" << r << endl;
//	}
//	return 1;
//}
//
////�������в���Ԫ�ز������λ��
//void find(linklist L, int* o)                  //����������Ԫ�أ�*oָ���Ԫ��
//{
//	node* p;
//	int i = 1;
//	p = L->next;
//	while (p != NULL)
//	{
//		if (p->data == *o)
//		{
//			cout << "Ԫ��" << *o << "��λ���ǣ�" << i << endl;
//			break;
//		}
//		p = p->next;                                     //ֻҪp��Ϊ�գ�p�������ֱ��p->data==*o
//		i++;                                                     //i��ʾλ��pÿ��һ�Σ������һ
//	}
//	if (p == NULL)
//		cout << "��Ԫ�ز�����" << endl;
//}
//
////��Ԫ�ص�ֱ��ǰ��
//void qianqu(linklist L, int n)
//{
//	node* p, * pr = nullptr;
//	int i = 0;
//	p = L->next;
//	while (p != NULL)
//	{
//		if (p->data == n && i != 0)
//		{
//			cout << "��Ԫ�ص�ֱ��ǰ���ǣ�" << pr->data << endl;
//			break;
//		}
//		else if (p->data == n && i == 0)          //nΪ�����е�һ��Ԫ��ʱ
//		{
//			cout << "��Ԫ��û��ֱ��ǰ��" << endl;
//			break;
//		}
//		pr = p;
//		p = p->next;
//		i++;
//	}
//	if (p == NULL)
//		cout << "��Ԫ�ز�����" << endl;
//}     
//
////��Ԫ�ص�ֱ�Ӻ��
//void houji(linklist L, int n)
//{
//	node* p;
//	p = L->next;
//	while (p != NULL)
//	{
//		if (p->data == n)
//		{
//			if (p->next != NULL)            //n��Ϊ�����е����һ��Ԫ��
//				cout << "��Ԫ�ص�ֱ�Ӻ���ǣ�" << p->next->data << endl;
//			else
//				cout << "��Ԫ��û��ֱ�Ӻ��" << endl;
//			break;
//		}
//		p = p->next;                   //p���κ���ֱ���ҵ�n
//	}
//	if (p == NULL)
//		cout << "��Ԫ�ز�����" << endl;
//}
//
////�������е�i��λ�ò���Ԫ��
//int insert(linklist L, int place, int n)
//{
//	int j;
//	node* pr, * p;
//	pr = L; j = 0;
//	while (pr && j < place - 1)          //++j        ֱ��        j=Ҫ�����λ�õĴ����һ
//	{
//		pr = pr->next;
//		++j;
//	}
//	if (!pr || j > place - 1)
//		return 0;
//	p = new node;
//	if (p == NULL)
//		cout << "�����ڴ�ռ�ʧ��" << endl;
//	p->data = n;                             //���в������
//	p->next = pr->next;
//	pr->next = p;
//	cout << "�����Ԫ���ǣ�" << n << endl;
//	return 1;
//}
//
////ɾ�������е�i��Ԫ��
//int del(linklist L, int i)
//{
//
//	int j;
//	node* p, * o;
//	p = L; j = 0;
//	while (p->next && j < i - 1)                       //++j        ֱ��        j=Ҫ�����λ�õĴ����һ
//	{
//		p = p->next;
//		++j;
//	}
//	if (!(p->next) || j > i - 1)
//	{
//		cout << "��λ�򲻴���" << endl;
//		return 0;
//	}
//	o = p->next;                                            
//	p->next = o->next;                               //p->next=p->next->next.
//	cout << "ɾ����Ԫ���ǣ�" << o->data << endl;
//	delete(o);
//	return 1;
//}
//
////��������е�Ԫ��
//int output(linklist L)
//{
//	linklist p;
//	p = L->next;
//	if (p == NULL)
//	{
//		cout << "��������û��Ԫ�ء�" << endl;
//		return 1;
//	}
//	cout << "����Ԫ�����£�" << endl;
//	while (p)
//	{
//		cout << p->data << "  ";
//		p = p->next;
//	}
//	return 1;
//}
//
////�����������
//void Tips()
//{
//	cout << "��ִ�в����У�" << endl;
//	cout << "*********************************************************" << endl;
//	cout << "***************  1.��ʼ������������      ****************" << endl;
//	cout << "***************  2.��������              ****************" << endl;
//	cout << "***************  3.����������Ԫ�ظ���    ****************" << endl;
//	cout << "***************  4.��ָλ���Ԫ��ֵ      ****************" << endl;
//	cout << "***************  5.�����Ѵ���Ԫ�ص�λ��  ****************" << endl;
//	cout << "***************  6.������Ԫ��,��ֱ��ǰ�� ****************" << endl;
//	cout << "***************  7.������Ԫ��,��ֱ�Ӻ�� ****************" << endl;
//	cout << "***************  8.�ڵ�i��λ�ò���Ԫ��   ****************" << endl;
//	cout << "***************  9.ɾ����i��Ԫ��         ****************" << endl;
//	cout << "***************  10.��������������Ԫ�� ****************" << endl;
//	cout << "***************  11.��ʼ������������Ԫ�� ****************" << endl;
//	cout << "***************  12.�˳�                 ****************" << endl;
//	cout << "*********************************************************" << endl;
//}
////�������е���
//int main()
//{
//	linklist L = NULL;
//	int i, place, pla, element, n5, eleme, placee, ele, elem;
//	int just = 0;
//	do
//	{
//		system("cls");
//		Tips();
//		cout << "��������Ĳ�����";
//		cin >> i;
//		switch (i)
//		{
//		case 1:
//		{
//			chushi(&L);
//			cout << "�ɹ���ʼ��һ���յ�����" << endl;
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
//				cout << "��������" << endl;
//			break;
//		}
//		case 4:
//		{
//			if (just)
//			{
//				cout << "��������ҪԪ�ص�λ��";
//				cin >> place;
//				rut(L, place);
//			}
//			else
//				cout << "��������" << endl;
//			break;
//		}
//		case 5:
//		{
//			if (just)
//			{
//				cout << "����������Ҫ���ҵ�Ԫ�أ�";
//				cin >> element;
//				find(L, &element);
//			}
//			else
//				cout << "�������ڡ�" << endl;
//			break;
//		}
//		case 6:
//		{
//			if (just)
//			{
//				cout << "������Ԫ�أ�";
//				cin >> ele;
//				qianqu(L, ele);
//			}
//			else
//				cout << "�������ڡ�" << endl;
//			break;
//		}
//		case 7:
//		{
//			if (just)
//			{
//				cout << "������Ԫ�أ�";
//				cin >> elem;
//				houji(L, elem);
//			}
//			else
//				cout << "�������ڡ�" << endl;
//			break;
//		}
//		case 8:
//		{
//			if (just)
//			{
//				cout << "���������Ԫ�أ�";
//				cin >> eleme;
//				cout << "���������Ԫ�ص�λ�ã�" << endl;
//				cin >> placee;
//				insert(L, placee, eleme);
//			}
//			else
//				cout << "�������ڡ�" << endl;
//			break;
//		}
//		case 9:
//		{
//			if (just)
//			{
//				cout << "������ɾ��Ԫ�ص�λ�ã�" << endl;
//				cin >> pla;
//				del(L, pla);
//			}
//			else
//				cout << "�������ڡ�" << endl;
//			break;
//		}
//		case 10:
//		{
//			if (just)
//				output(L);
//			else
//				cout << "�������ڡ�" << endl;
//			break;
//		}
//		case 11:
//		{
//			chushi(&L);
//			cout << "�����������ȣ�";
//			cin >> n5;
//			creat(L, n5);
//			just = 1;
//			break;
//		}
//		case 12:
//		{
//			cout << "����������" << endl;
//			exit(0);
//		}
//		default:
//		{
//			cout << "û�и�ѡ�������ѡ��" << endl;
//			break;
//		}
//		}
//		system("pause");
//	} while (1);
//	
//}

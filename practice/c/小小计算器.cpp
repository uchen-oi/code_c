//#include<iostream>
//using namespace std;
//#define PI 3.14
//void jiafa();
//void jianfa();
//void chengfa();
//void chufa();
//void pdws(int n);
//void mianji();
//int pdrn(int n);
//void cjzh();
//void qjsh();
//void qosh();
//void bs3();
//void zc();
//void sxh();
//int max(int a, int b);
//void maxmin(int a,int b);
//void mppx();
//void jzzz();
//void qdjx();
//void tjdc();
//void yhsj();
//void dtlb();
//int main()
//{
//	int a;
//	cout << " ***********************************"<<endl;
//    cout << "    СС������" << endl;
//    cout << "        1 �ӷ�" << endl;
//    cout << "        2 ����" << endl;
//    cout << "        3 �˷�" << endl;
//    cout << "        4 ����" << endl;
//    cout << "        5 �ж����ֵ�λ��" << endl;
//    cout << "        6 ����Բ���" << endl;
//    cout << "        7 �ж�����" << endl;
//    cout << "        8 �ɼ�ת��" << endl;
//    cout << "        9 �����1��������֮��������� ��for��" << endl;
//    cout << "        10 �����1��������֮���ż���� ��while��" << endl;
//    cout << "        11 �����1��������֮������3�ı��� ��do - while��" << endl;
//    cout << "        12 �󼴱�3�����ֱ�5��������" << endl;
//    cout << "        13 ��ˮ�ɻ���" << endl;
//    cout << "        14 �����ֵ" << endl;
//    cout << "        15 �������Сֵ" << endl;
//    cout << "        16 ð������" << endl;
//    cout << "        17 ����ת��" << endl;
//    cout << "        18 ��Խ��ߺ�" << endl;
//    cout << "        19 ͳ�Ƶ��ʸ���" << endl;
//    cout << "        20 ����������" << endl;
//    cout << "        21 ��̬��������" << endl;
//    cout << " ***********************************" << endl;
//    cout << "��ѡ��Ҫִ�еĲ���" << endl;
//    cin >> a;
//    switch (a)
//    {
//    case 1:jiafa(); break;
//    case 2:jianfa(); break;
//    case 3:chengfa(); break;
//    case 4:chufa(); break;
//    case 5:
//    {
//        int n;
//        cout << "����һ������������λ���ڣ�����λ)" << endl;
//        cin >> n;
//        pdws(n);
//        break;
//    }
//    case 6:mianji(); break;
//    case 7:
//    {
//        int n;
//        cout << "���������" << endl;
//        cin >> n;
//        if (pdrn(n)) cout << n << "������" << endl;
//        else cout << n << "��ƽ��" << endl; 
//        break;
//    }
//    case 8:cjzh(); break;
//    case 9:qjsh(); break;
//    case 10:qosh(); break;
//    case 11:bs3(); break;
//    case 12:zc(); break;
//    case 13:sxh(); break;
//    case 14:
//    {
//        int a, b;
//        cout << "input two numbers" << endl;
//        cin >> a >> b;
//        cout<<"���ֵΪ��"<<max(a, b); break;
//    }
//    case 15:
//    {
//        int a, b ;
//        cout << "input two numbers" << endl;
//        cin >> a >> b;
//        maxmin(a,b); break;
//    }
//    case 16:mppx(); break;
//    case 17:jzzz(); break;
//    case 18:qdjx(); break;
//    case 19:tjdc(); break;
//    case 20:yhsj(); break;
//    case 21:dtlb(); break;
//    }
//
//}
//void jiafa()
//{
//    int a, b,c;
//    cout << "input two numbers" << endl;
//    cin >> a >> b;
//    c = a + b;
//    cout << a << "+" << b << "=" << c;
//}
//void jianfa()
//{
//    int a, b, c;
//    cout << "input two numbers" << endl;
//    cin >> a >> b;
//    c = a - b;
//    cout << a << "-" << b << "=" << c;
//}
//void chengfa()
//{
//    int a, b, c;
//    cout << "input two numbers" << endl;
//    cin >> a >> b;
//    c = a * b;
//    cout << a << "*" << b << "=" << c;
//}
//void chufa()
//{
//    int a, b, c;
//    cout << "input two numbers" << endl;
//    cin >> a >> b;
//    if (b == 0) cout << "����Ϊ0���޷����г�������" << endl;
//    else
//    {
//        c = a / b;
//        cout << a << "/" << b << "=" << c;
//    }
//}
//void pdws(int n)
//{
//    int a,b,c;
//   if (n > 999 || n < 0) cout << "Ҫ���������Ϊ3λ���ڵ�������" << endl;
//   else
//   {
//       a = n % 10; b = n / 10 % 10; c = n / 100 % 10;
//        if (c != 0)
//       {
//        cout << n << "��3λ��" << endl;
//        cout << "��λ��" << c << "   " << "ʮλ��" << b << "   " << "��λ��" << a << endl;
//       }
//       else if (b != 0)
//       {
//       cout << n << "����λ��" << endl;
//       cout << "ʮλ��" << b << "   " << "��λ��" << a << endl;
//       }
//        else
//        {
//        cout << n << "��1λ��" << endl;
//        cout << "��λ��" << a << endl;
//        }
//   }
//    
//}
//void mianji()
//{
//    int n;
//    cout << "������Բ�İ뾶" << endl;
//    cin >> n;
//    cout << "Բ�����Ϊ��" << PI * n * n;
//}
//int pdrn(int n)
//{
//    if (n % 4 == 0 || n % 400 == 0) return 1;
//    else return 0;
//}
//void cjzh()
//{
//    int n;
//    cout << "������ɼ�" << endl;
//    cin >> n;
//    if (n > 100 || n < 0) cout << "�ɼ��������";
//    else
//    {
//        switch (n / 10)
//        {
//        case 10:
//        case 9: cout << "����" << endl; break;
//        case 8: cout << "��" << endl; break;
//        case 7: cout << "��" << endl; break;
//        case 6: cout << "����" << endl; break;
//        default: cout << "������" << endl; break;
//        }
//    }
//}
//void qjsh()
//{
//    int i, n,s=0;
//    cout << "input n" << endl;
//    cin >> n;
//    for (i = 1; i <= n; i++)
//    {
//        s += i;
//     }
//    if (n % 2 == 0) cout << "������Ϊ��" << (s - n / 2) / 2;
//    else cout << "������Ϊ��" << (s+n+1 - (n+1) / 2) / 2;
//}
//void qosh()
//{
//    int i=0, n,s=0;
//    cout << "input n" << endl;
//    cin >> n;
//    while (i <= n)
//    {
//        s += i;
//        i = i + 2;
//    }
//    cout << "ż����Ϊ��" << s;
//}
//void bs3()
//{
//    int i=0 , n, s ;
//    cout << "input n" << endl;
//    cin >> n;
//    do
//    {
//        i += 1;
//         if(i % 3 == 0)
//            cout << i << " "; 
//    } while (i <=n);
//}
//void zc()
//{
//    int a, b,i;
//    cout << "input two numbers(b>a)" << endl;
//    cin >> a >> b;
//    for (i = a; i <= b; i++)
//    {
//        if (i % 3 == 0 && i % 5 == 0)
//        {
//            cout << i << endl; break;
//        }
//    }
//}
//void sxh()
//{
//    int i, a, b, c;
//    for (i = 100; i < 1000; i++)
//    {
//        a = i % 10;
//        b = i / 10 % 10;
//        c = i / 100;
//        if (i == a * a * a + b * b * b + c * c * c)
//            cout << i << " ";
//    }
//}
//int max(int a,int b)
//{
//    int c;
//    if (a > b) c = a;
//    else c = b;
//    return c;
//}
//void maxmin(int a,int b)
//{
//    if (a > b) cout <<"���ֵΪ��" <<a<<"  "<<"��СֵΪ��" <<b<< endl;
//    else cout <<"���ֵΪ��"<< b <<"��СֵΪ��"<<a<< endl;
//}
//void mppx()
//{
//    int i, j, t;
//    int a[5];
//    cout << "input 5 numbers" << endl;
//    for (i = 0; i < 5; i++)
//        cin >> a[i];
//    for (i = 0; i < 4; i++)
//    {
//        for (j = 0; j < 4 - i; j++)
//        {
//            if (a[j] > a[j + 1])
//            {
//                t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
//            }
//        }
//    }
//    for (i = 0; i < 5; i++)
//        cout << a[i] <<" ";
//}
//void jzzz()
//{
//    int a[3][4];
//    int i, j;
//    cout << "������һ��3*4�ľ���" << endl;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 4; j++)
//            cin >> a[i][j];
//    }
//    cout << endl;
//    for (i = 0; i < 4; i++)
//    {
//        for (j = 0; j < 3; j++)
//            cout << a[j][i]<<"\t";
//        cout << endl;
//    }
//}
//void qdjx()
//{
//    int a[3][3];
//    int i, j,s=0;
//    cout << "������һ��3*3�ľ���" << endl;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//            cin >> a[i][j];
//    }
//    for (i = 0; i < 3; i++)
//        s += a[i][i];
//    cout << "�Խ��ߺ�Ϊ��" << s << endl;
//}
//void tjdc()
//{
//    char aa[30] = { 0 };
//    int i,count=0;
//    cout << "input strings" << endl;
//    getchar();
//    gets_s(aa);
//    for (i = 0; aa[i] != '\0'; i++)
//    {
//        if (aa[i + 1] == ' ' && aa[i] != ' ')
//            count++;
//    }
//    cout << "���ʸ���Ϊ��" << count + 1;
//}
//void yhsj()
//{
//    int a[20][20] = { 0 };
//    int i, j,n;
//    cout << "input a number(<20)" << endl;
//    cin >> n;
//    for (i = 0; i < n; i++)
//    {
//        a[i][0] = 1; a[i][i] = 1;
//    }
//    for(i=2;i<n;i++)
//    {
//        for (j = 1; j < i; j++)
//        {
//            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//        }
//        cout << endl;
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j <= i; j++)
//            cout << a[i][j] << "\t";
//        cout << endl;
//    }
//}
//void dtlb()
//{
//    struct node
//    {
//        int data;
//        struct node* next;
//    };
//        struct node* p, * pre, * head;
//        pre = head = new node;
//        head->next = NULL;
//        int x;
//        cout << "��������������" << endl;
//        while (1)
//        {
//            cin >> x;
//            if (x == -1) break;
//            p = (struct node*)malloc(sizeof(struct node));
//            p->data = x;
//            pre->next = p;
//            p->next = NULL;
//            pre = p;
//        }
//        struct node* o;
//    o = head->next;
//    while (o != NULL)
//    {
//        cout << o->data << " ";
//        o = o->next;
//    }
//}
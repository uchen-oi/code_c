//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string.h>
//#include<stdlib.h>
//#include<conio.h>
//using namespace std;
//
//void checkfile();
//int fir();
//int sec(int i);
//void write();
//void search();
//
//
////����ṹ�壬���ڼ�¼ѧ������Ϣ
//typedef struct student
//{
//	char num[9];
//	char name[20];
//	char sex[10];
//	int score[4];
//} stu;
//
//int main()
//{
//	int flag = 0;
//
//	while (flag != 3)                                 //flag=3��ʾ�˳�
//	{
//		system("cls");
//		flag = sec(fir());
//	}
//}
//
////������˵�
//int fir()
//{
//	int i; 
//	cout << "*****************************************************" << endl;
//	cout << "*                                                   *" << endl;
//	cout << "*            1    ¼��ѧ���ɼ�                      *" << endl;
//	cout << "*            2    ��ѯѧ���ɼ�                      *" << endl;
//	cout << "*            3    �˳�                              *" << endl;
//	cout << "*****************************************************" << endl;
//	cout << "����ѡ���������֣���";
//	cin >> i;
//	return i;                        //�����û���������
//}
//
////�������˵����û���ѡ����ʾ��Ӧ�Ĳ˵�
//int sec(int i)
//{
//	system("cls");
//	switch (i)
//	{
//	case 1:
//	{
//		write();
//		break;
//	}
//	case 2:
//	{
//		search();
//		break;
//	}
//	case 3:
//	{
//		cout << "�����Ѿ��˳���" << endl;
//		break;
//	}
//	}
//	return i;                           //�����û���������
//
//}
//
////¼��ѧ���ɼ�
//void write()
//{
//	FILE* fp;
//	stu s, * p;
//	char s1;
//	char s2 = 'n';                 //��ʱ�ؼ�¼�û�������
//	p = &s;
//	if ((fp = fopen("ѧ����Ϣ.dat", "ab")) == NULL)
//	{
//		if ((fp = fopen("ѧ����Ϣ.dat", "wb")) == NULL)
//		{
//			cout << "���ļ�ʱ����" << endl;
//			exit(1);
//		}
//	}
//	do
//	{
//		cout << "������ѧ������Ϣ��" << endl;
//		cout << "ѧ�ţ�";
//		cin >> s.num;
//		cout << "������";
//		cin >> s.name;
//		cout << "�Ա�";
//		cin >> s.sex;
//		cout << "������ɼ�,Ҫ������Ǹ�������" << endl;
//		cout << "��ѧ��";
//		cin >> s.score[0];
//		cout << "Ӣ�";
//		cin >> s.score[1];
//		cout << "�������";
//		cin >> s.score[2];
//		cout << "������";
//		cin >> s.score[3];
//		cout << "�Ƿ�ȷ���������룺y/n��" << endl;
//		cin >> s1;
//		if (s1 == 'y')
//		{
//			fwrite(p, sizeof(stu), 1, fp);
//			system("cls");
//			cout << "¼��ɹ����Ƿ����¼�룿�����룺y/n��" << endl;
//			cin >> s2;
//			system("cls");
//		}
//	} while (s2 == 'y');
//	fclose(fp);
//}
//
////��ѯѧ���ɼ�
//void search()
//{
//	FILE* fp;
//	stu s, * p;
//	char num1[9];                                //��¼�û������ѧ��
//	int option;                                     //��¼�û���ѡ��
//	p = &s;
//	cout << "������ѧ�ţ�";
//	cin >> num1;
//	if ((fp = fopen("ѧ����Ϣ.dat", "rb")) == NULL)
//	{
//		cout << "���ļ�ʱ����";
//		exit(1);
//	}
//	else
//	{
//		int k;
//		do
//		{
//			fread(p, sizeof(stu), 1, fp);
//		} while (strcmp(p->num, num1) != 0 && feof(fp) == 0);     //���ļ�ָ�뵽���ļ�ĩβʱfeof(fp)��ֵ��Ϊ��
//		if (strcmp(p->num, num1) != 0)
//		{
//			cout << "�޴�ѧ����Ϣ��" << endl;
//			cout << "�������ȷ����";
//			_getch();
//			return;
//		}
//		cout << endl;
//		cout << endl;
//
//		//����˵�
//		cout << "++++++++++++++++++++++" << endl;
//		cout << "+  1  �����ѧ�ɼ�   +" << endl;
//		cout << "+  2  ���Ӣ��ɼ�   +" << endl;
//		cout << "+  3  ���������ɼ� +" << endl;
//		cout << "+  4  ��������ɼ�   +" << endl;
//		cout << "+  5  ������гɼ�   +" << endl;
//		cout << "++++++++++++++++++++++" << endl;
//		cout << "��ѡ��";
//		cin >> option;
//		cout << endl;
//		cout << "ѧ��" << '\t' << "����" << '\t' << "�Ա�" << endl;
//		cout << p->num << '\t' << p->name << '\t' << p->sex << endl;
//		
//		//�����û���ѡ��,������Ӧ�Ĺ���
//		switch (option)
//		{
//		case 1:
//		{
//			cout << "��ѧ" << endl << p->score[0] << endl;
//			break;
//		}
//		case 2:
//		{
//			cout << "Ӣ��" << endl << p->score[1] << endl;
//			break;
//		}
//		case 3:
//		{
//			cout << "�����" << endl << p->score[2] << endl;
//			break;
//		}
//		case 4:
//		{
//			cout << "����" << endl << p->score[3] << endl;
//			break;
//		}
//		case 5:
//		{
//			cout << "��ѧ" << '\t' << "Ӣ��" << '\t' << "�����" << '\t' << "����" << '\t' << endl;
//			for (k = 0; k < 4; k++)
//				cout << p->score[k] << '\t';
//			cout << endl;
//		}
//		}
//		cout << "�������ȷ����";
//		_getch();
//	}
//}
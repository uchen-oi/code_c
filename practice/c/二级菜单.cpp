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
////定义结构体，用于记录学生的信息
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
//	while (flag != 3)                                 //flag=3表示退出
//	{
//		system("cls");
//		flag = sec(fir());
//	}
//}
//
////输出主菜单
//int fir()
//{
//	int i; 
//	cout << "*****************************************************" << endl;
//	cout << "*                                                   *" << endl;
//	cout << "*            1    录入学生成绩                      *" << endl;
//	cout << "*            2    查询学生成绩                      *" << endl;
//	cout << "*            3    退出                              *" << endl;
//	cout << "*****************************************************" << endl;
//	cout << "请您选择（输入数字）：";
//	cin >> i;
//	return i;                        //返回用户的输入结果
//}
//
////根据主菜单下用户的选择显示相应的菜单
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
//		cout << "程序已经退出！" << endl;
//		break;
//	}
//	}
//	return i;                           //返回用户的输入结果
//
//}
//
////录入学生成绩
//void write()
//{
//	FILE* fp;
//	stu s, * p;
//	char s1;
//	char s2 = 'n';                 //临时地记录用户的输入
//	p = &s;
//	if ((fp = fopen("学生信息.dat", "ab")) == NULL)
//	{
//		if ((fp = fopen("学生信息.dat", "wb")) == NULL)
//		{
//			cout << "打开文件时出错！" << endl;
//			exit(1);
//		}
//	}
//	do
//	{
//		cout << "请输入学生的信息：" << endl;
//		cout << "学号：";
//		cin >> s.num;
//		cout << "姓名：";
//		cin >> s.name;
//		cout << "性别：";
//		cin >> s.sex;
//		cout << "请输入成绩,要求输入非负整数：" << endl;
//		cout << "数学：";
//		cin >> s.score[0];
//		cout << "英语：";
//		cin >> s.score[1];
//		cout << "计算机：";
//		cin >> s.score[2];
//		cout << "体育：";
//		cin >> s.score[3];
//		cout << "是否确定？（输入：y/n）" << endl;
//		cin >> s1;
//		if (s1 == 'y')
//		{
//			fwrite(p, sizeof(stu), 1, fp);
//			system("cls");
//			cout << "录入成功，是否继续录入？（输入：y/n）" << endl;
//			cin >> s2;
//			system("cls");
//		}
//	} while (s2 == 'y');
//	fclose(fp);
//}
//
////查询学生成绩
//void search()
//{
//	FILE* fp;
//	stu s, * p;
//	char num1[9];                                //记录用户输入的学号
//	int option;                                     //记录用户的选择
//	p = &s;
//	cout << "请输入学号：";
//	cin >> num1;
//	if ((fp = fopen("学生信息.dat", "rb")) == NULL)
//	{
//		cout << "打开文件时出错！";
//		exit(1);
//	}
//	else
//	{
//		int k;
//		do
//		{
//			fread(p, sizeof(stu), 1, fp);
//		} while (strcmp(p->num, num1) != 0 && feof(fp) == 0);     //当文件指针到达文件末尾时feof(fp)的值不为零
//		if (strcmp(p->num, num1) != 0)
//		{
//			cout << "无此学生信息！" << endl;
//			cout << "按任意键确定。";
//			_getch();
//			return;
//		}
//		cout << endl;
//		cout << endl;
//
//		//输出菜单
//		cout << "++++++++++++++++++++++" << endl;
//		cout << "+  1  输出数学成绩   +" << endl;
//		cout << "+  2  输出英语成绩   +" << endl;
//		cout << "+  3  输出计算机成绩 +" << endl;
//		cout << "+  4  输出体育成绩   +" << endl;
//		cout << "+  5  输出所有成绩   +" << endl;
//		cout << "++++++++++++++++++++++" << endl;
//		cout << "请选择：";
//		cin >> option;
//		cout << endl;
//		cout << "学号" << '\t' << "姓名" << '\t' << "性别" << endl;
//		cout << p->num << '\t' << p->name << '\t' << p->sex << endl;
//		
//		//根据用户的选择,调用相应的功能
//		switch (option)
//		{
//		case 1:
//		{
//			cout << "数学" << endl << p->score[0] << endl;
//			break;
//		}
//		case 2:
//		{
//			cout << "英语" << endl << p->score[1] << endl;
//			break;
//		}
//		case 3:
//		{
//			cout << "计算机" << endl << p->score[2] << endl;
//			break;
//		}
//		case 4:
//		{
//			cout << "体育" << endl << p->score[3] << endl;
//			break;
//		}
//		case 5:
//		{
//			cout << "数学" << '\t' << "英语" << '\t' << "计算机" << '\t' << "体育" << '\t' << endl;
//			for (k = 0; k < 4; k++)
//				cout << p->score[k] << '\t';
//			cout << endl;
//		}
//		}
//		cout << "按任意键确定：";
//		_getch();
//	}
//}
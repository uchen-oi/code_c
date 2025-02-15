//#include<iostream>
//using namespace std;
//struct student
//{
//	int number;
//	char name[10];
//	int score[3];
//};
//void average(struct student stu[]);
//int main()
//{
//	int i,j;
//	struct student stu[100];
//	for(i=0;i<4;i++)
//	{
//		cout<<"input details"<<endl;
//		cin>>stu[i].number;
//		gets_s(stu[i].name);
//		for(j=0;j<3;j++)
//		{
//			cin>>stu[i].score[j];
//		}
//	}
//	average(stu);
//}
//void average(struct student stu[])
//{
//	int i,j,ave,sum;
//	for(i=0;i<4;i++)
//	{
//		ave=0;
//		sum=0;
//		for(j=0;j<3;j++)
//		{
//			sum+=stu[i].score[j];
//		}
//		ave=sum/3;
//		cout<<stu[i].name<<": "<<ave<<endl;
//	}
//}

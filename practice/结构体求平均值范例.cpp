//#include<iostream>
//using namespace std;
//
//struct student
//{
//	int number;
//	char name[10];
//	int score[3];
//};
// void  input_array(struct student stud[],int n);
// void  output_array(struct student stud[],int n);
//  void  average_array(struct student stud[],int n);
// int main()
// {
// 	struct student stu[2];
//	 input_array(stu,2);
//	 cout<<"output array:\n";
//	 output_array(stu,2);
//	 cout<<"output every student's average:\n";
//	 average_array(stu,2);
//	 	 return 0;
//
// }
// void  input_array(struct student stud[],int n)//struct student*stud
//  {
//  	int i,j;
//  	cout<<"input number,name(end of Enter),scores:\n";
//	 for(i=0;i<n;i++)
//	 {
//	 	cin>>stud[i].number;
//	 	gets_s(stud[i].name);
//	 	for(j=0;j<3;j++)
//	 	  cin>>stud[i].score[j];
//	 }
//  }
// void  output_array(struct student stud[],int n)//struct student*stud
//  {
//  	int i,j;
//	 for(i=0;i<n;i++)
//	 {
//	 	cout<<stud[i].number<<" "<<stud[i].name<<" ";
//	 	for(j=0;j<3;j++)
//	 	  cout<<stud[i].score[j]<<" ";
//	 	cout<<endl;
//	 }
//  }
//  void  average_array(struct student stud[],int n)//struct student*stud
//  {
//  	int i,j,sum;
//	 for(i=0;i<n;i++)
//	 {
//	 	sum=0;
//	 	for(j=0;j<3;j++)
//	 	  sum+=stud[i].score[j];
//	 	cout<<stud[i].number<<" "<<stud[i].name<<" "<<sum/3<<endl;
//	 }
//  }

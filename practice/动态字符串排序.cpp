//#include<iostream>
//#include<string.h>
//using namespace std;
//void input(char*aa[],int n);
//void sort(char* aa[],int n);
//void output(char*aa[],int n);
//char str[10][20];
//int main()
//{
//	char*p[10];
//	int n;
//	cout<<"input n"<<endl;
//	cin>>n;
//	input(p,n);
//	sort(p,n);
//	cout<<"after sort:"<<endl;
//	output(p,n);
//}
//void input(char*aa[],int n)
//{
//	int i;
//	cout<<"input "<<n<<" strings"<<endl;
//	for(i=0;i<n;i++)
//	{
//		aa[i]=str[i];
//		cin>>str[i];
//	}
//}
//void sort(char* aa[],int n)
//{
//	int i,j,min;
//	char*t;
//	for(i=0;i<n-1;i++)
//	{
//		min=i;
//		for(j=i+1;j<n;j++)
//		{
//			if(strcmp(aa[min],aa[j])>0) 
//			min=j;
//		}
//		if(min!=i)
//		{
//			t=aa[min];aa[min]=aa[i];aa[i]=t;
//		}
//	}
//}
//void output(char*aa[],int n)
//{
//	int i;
//	for(i=0;i<n;i++)
//	cout<<aa[i]<<" ";
//}

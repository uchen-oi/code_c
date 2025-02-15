//#include<iostream>
//#include<string.h>
//using namespace std;
//void sort(char* aa[],int n);
//void output(char*aa[],int n);
//int main()
//{
//	char a[10] = "Follow", b[10] = "Great", c[10] = "FORTRAN", d[10] = "Computer";	
//	char*name[4]={a,b,c,d};
//	cout<<"p[0]:"<<name[0]<<endl;
//	sort(name,4);
//	cout<<"after sort"<<endl;
//	output(name,4);
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

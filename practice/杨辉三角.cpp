//#include<iostream>
//using namespace std;
//int main()
//{
//	int i,j,n;
//	cout<<"input n(n<=20)"<<endl;
//	cin>>n;
//	int a[20][20]={0};
//	for(i=0;i<n;i++)
//	{
//		a[i][0]=a[i][i]=1;
//	}
//	for(i=2;i<n;i++)
//	{
//		for(j=1;j<i;j++)
//		{
//			a[i][j]=a[i-1][j-1]+a[i-1][j];
//		}
//	}
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<=i;j++)
//		printf("%-5d",a[i][j]);
//		cout<<endl;
//	}
//	
//	
//	
//	return 0;
//}

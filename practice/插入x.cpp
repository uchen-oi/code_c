//#include<iostream>
//using namespace std;
//int main()
//{
//	int i,j,n,t,a[1000],x;
//	cout<<"input n"<<endl;
//	cin>>n;
//	cout<<"input "<<n<<" numbers"<<endl;
//	for(i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//	for(i=0;i<n-1;i++)
//	{
//		for(j=0;j<n-i-1;j++)
//		{
//			if(a[j]>a[j+1])
//			{
//				t=a[j];a[j]=a[j+1];a[j+1]=t;
//			}
//		}
//	}
//	for(i=0;i<n;i++)
//	cout<<a[i]<<" ";
//	cout<<endl;
//	cout<<"input x"<<endl;
//	cin>>x;
//	for(i=n-1;i>=0;i--)
//	{
//		if(a[i]<x) break;
//		else a[i+1]=a[i];
//	}
//	a[i+1]=x;
//	for(i=0;i<=n;i++)
//	cout<<a[i]<<" ";
//	cout<<endl;
//	
//	
//	return 0;
// } 

//#include<iostream>
//using namespace std;
//int jc(int n);
//int dgjc(int n);
//void h(int n,char x,char y,char z);
//int main()
//{
//	int n;
//	cout<<"input n"<<endl;
//	cin>>n;
//	cout<<jc(n)<<endl;
//	cout<<dgjc(n)<<endl;
//	h(n,'a','b','c');
//}
//int jc(int n)
//{
//	int i,s;
//	for(s=1,i=2;i<=n;i++)
//	s*=i;
//	return s;
//}
//int dgjc(int n)
//{
//	if(n==1) return 1;
//	else return n*dgjc(n-1);
//}
//void h(int n,char x,char y,char z)
//{
//	if(n==1) cout<<n<<":"<<x<<"--->"<<z<<endl;
//	else
//	{
//		h(n-1,x,z,y);
//		cout<<n<<":"<<x<<"--->"<<z<<endl;
//		h(n-1,y,x,z);
//	}
//}

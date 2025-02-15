#include<iostream>
#define N 100
using namespace std;
int main()
{
	int i, j, n, k;
	int flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0,flag5=0;
	int arr[N][N] = { 0 };
	cout << "input n (n<=100)" << endl;
	cin >> n;
	cout << "input " << n * n << " numbers (0 or 1)" << endl;
		for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin>> arr[i][j];	
		}
	}
		cout << "what you input: " << endl;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				cout << (arr[i][j]!=0)<<"\t";
			}
			cout << endl;
		}
		for (i = 0; i < n; i++)
		{
			if (arr[i][i] == 0)
				flag1 = 1;
			if (arr[i][i] == 1)
				flag2 = 1;
		}
		if(flag1==0)
			cout << "具有自反性" << endl;
		if (flag2 == 0)
			cout << "具有反自反性" << endl;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (arr[i][j] != arr[j][i])
					flag3 = 1;
				if((arr[i][j] == 1) && (i != j) && (arr[j][i] == 1)) 
					flag4 = 1;
			}
			cout << endl;
		}
		if (flag3 == 0)
			cout << "具有对称性" << endl;
		if (flag4 == 0)
			cout << "具有反对称性" << endl;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				for (k = 0; k < n; k++)
				{
					if ((arr[i][j] == 1) && (arr[j][k] == 1) && (arr[i][k] == 1))
						flag5 = 1;
				}
			}
			cout << endl;
		}
		if (flag5 == 1)
			cout << "具有传递性" << endl;

		
	return 0;
}

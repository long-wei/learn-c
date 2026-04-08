#include<iostream>
using namespace std;
void append_arr(int n, int *arr)
{
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
}
void sort_arr(int n, int *arr)
{
	for(int i=0; i<n-1; i++)
	{
		for(int k=0; k<n-i-1; k++)
		{
			if(arr[k]>arr[k+1])
			{
				int a = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = a;
			}
		}
	}
}
void print_arr(int n, int *arr)
{
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<' ';
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int *p = arr;
	append_arr(n, p);
	sort_arr(n, p);
	print_arr(n, p);
	
	system("pause");
	return 0;
}

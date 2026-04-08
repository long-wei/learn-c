#include<iostream>
using namespace std;
//用函数的声明可以提前告诉编译器函数的存在 
int tip(int num1, num2);
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		arr[i] = x;
	}
	
	int a = arr[0];
	for(int i=0;i<n;i++){
		a = tip(a, arr[i]);
	}cout<<a;
	
	system("pause");
	return 0;
}

int tip(int x1,int x2){
	int a = max(x1, x2);
	return a;
}

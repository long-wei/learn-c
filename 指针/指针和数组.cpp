#include<iostream>
using namespace std;
int main()
{
	//利用指针访问数组中的元素
	int arr[5] = {1,2,3,4,5}; 
	
	int * p = arr;	 
	cout<<"利用指针输出第一个元素"<<* p<<endl;
	
	p++;	//让指针向后偏移4个字节 
	cout<<"访问第二个元素"<<*p<<endl; 
	
	int * p2 = arr;
	int a = sizeof(arr)/sizeof(arr[0]);
	//利用指针遍历数组 
	for(int i=0; i<a;i++)
	{
		//cout<<"数组第"<<i<<"个元素是"<<arr[i]<<endl;
		cout<<"数组第"<<i+1<<"个元素是"<<*p2<<endl;
		p2++; 
	}
	
	system("pause");
	return 0;
 } 

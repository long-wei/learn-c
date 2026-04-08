#include<iostream>
using namespace std;
int main()
{
	//利用冒泡排序实现升序 
	int arr[9] = {4,9,7,6,6,2,5,7,8};
	int length = sizeof(arr)/sizeof(arr[0]);
	//排序轮数为元素个数减一 
	for(int i=0; i<length-1; i++ )
	{
		//内存循环对比  次数 = 元素个数 - 单前轮数 -1 
		for(int k=0; k<length-i-1; k++)
		{
			//如果第一个数大于第二个数，则交换位置 
			if(arr[k]>arr[k+1])
			{
				int a = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = a;
			}
		}
	}
	for(int i=0; i<length; i++)
	{
		cout<<arr[i]<<" ";
	}
	system("pause");
	return 0;
}

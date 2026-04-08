#include<iostream>
using namespace std;
// 堆区由程序员分配释放，若程序员不释放，程序结束时由操作系统回收
// 可以利用new在堆区开辟内存
int* func()
{
	//new返回的是 该数据类型的指针
	int* p = new int(10);
	return p;
}
void test_1()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	//释放方法delete
	delete p;
	//	cout << *p << endl; // 已经释放，再访问会报错
}
//2.在堆区开辟数组
void test2()
{
	int* arr = new int[5];
	for(int i=0;i<5;i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	//释放数组
	delete[] arr;
//	cout << arr[1];
}
int main()
{
	test_1();
	test2();
	return 0;
}
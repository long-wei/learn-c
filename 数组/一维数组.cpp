#include<iostream>
using namespace std;
int main()
/*数组特点1：数组中每个元素都是相同的数据类型
      特点2：数组是由连续的内存位置组成的 */
{
	/*一维数组定义方式： 
	1. 数据类型 数组名[数组长度]； 
	2. 数据类型 数组名[数组长度] = {值1，值2...}；
	3. 数据类型 数组名[] = {值1，值2...}；*/
	//1.
	int arr[3];
	arr[1] = 1;
	arr[0] = 0;
	arr[2] = 2;
	for(int i=0;i<3;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	//2.
	string arr_0[3] = {"one","two","three"}; 
	for(int i=0;i<3;i++){
		cout<<arr_0[i]<<" ";
	}cout<<endl;
	
	//3.
	string arr_1[] = {"four","five","six"}; 
	for(int i=0;i<3;i++){
		cout<<arr_1[i]<<" ";
	}
	//数组所占空间：sizeof(arr_1)，除以元素所占空间：sizeof(arr_1[0]) ,得到数组长度 
	cout<<sizeof(arr_1)/sizeof(arr_1[0])<<endl;
	//查看数组地址
	cout<<arr_1<<endl;
	//看元素地址 （&是取地址符） 
	cout<<&arr_1[0]<<" "<<&arr_1[1]<<endl; 
	
	//arr_1 = 100 ; 错误，数组名是常量，不可以进行赋值 
	system("pause"); 
	return 0;
	
	
}


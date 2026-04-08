#include<iostream>
#include<string>
using namespace std;
// 结构体数组 
struct goods{
	string name;
	int price;
};
int main()
{
	// 创建结构体数组 
	struct goods arr[3]=
	{
		{"大米",100 }
	};
	// 结构体中的元素赋值 
	arr[1].name = "奶茶";
	arr[1].price = 20;
	
	arr[2].name = "玉米";
	arr[2].price = 8;
	// 遍历结构体数组 
	for(int i=0;i<3;i++)
	{
		cout<<"商品名称："<<arr[i].name
			<<"价格："<<arr[i].price<<endl;
	}
	system("pause");
	return 0;
} 

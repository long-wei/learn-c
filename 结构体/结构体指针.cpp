#include<iostream>
#include<string>
using namespace std;
// 结构体指针 
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
	// 定义结构体指针 
	struct goods *p = arr;
	// 遍历结构体数组 
	for(int i=0;i<3;i++)
	{
		cout<<"商品名称："<<p->name
			<<"价格："<<p->price<<endl;  //通过->操作符可以访问成员 
		p++;
	}
	system("pause");
	return 0;
} 

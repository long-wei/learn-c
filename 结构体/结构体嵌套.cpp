#include<iostream>
#include<string>
using namespace std;
// 结构体嵌套结构体 
struct goods{
	string name;
	int price;
};
struct seller{
	string name;
	string loaction;
	struct goods arr[3];
};
int main()
{
	// 创建结构体数组 并赋值 
	seller s;
	s.name = "万达广场";
	s.loaction = "红旗大道" ;
	
	s.arr[0]={"大米",100 };
	s.arr[1].name = "奶茶";
	s.arr[1].price = 20;
	s.arr[2].name = "玉米";
	s.arr[2].price = 8;
	// 定义结构体指针 
	struct seller *p = &s;
	cout<<"商店名称："<<p->name
		<<"  商店位置："<<p->loaction<<endl;
	struct goods *p1 = p->	arr;
	// 遍历结构体数组 
	for(int i=0;i<3;i++)
	{
		cout<<"商品名称："<<p1->name 
			<<"\t价格："<<p1->price<<endl;  //通过->操作符可以访问成员 
		p1++;
	}
	system("pause");
	return 0;
} 

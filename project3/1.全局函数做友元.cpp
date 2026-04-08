#include<iostream>
using namespace std;
//友元的目的是让一个函数或类 访问另一个类中私有成员 关键字friend
//全局函数做友元
class Building
{
	//告诉编译器全局函数void goodGay(Building *building)是类的好朋友
	friend void goodGay(Building * building);
public:
	Building()
	{
		m_BedRoom = "卧室";
		m_sittingRoom = "客厅";
	}
public:
	string m_sittingRoom;
private:
	string m_BedRoom; 
};
//全局函数
void goodGay(Building *building)
{
	cout << "好基友全局函数 正在访问：" << building->m_sittingRoom << endl;
	cout << "好基友全局函数 正在访问：" << building->m_BedRoom << endl;
}
void test0() 
{
	Building a;
	goodGay(&a);
}
int main()
{
	test0();
	return 0;
}

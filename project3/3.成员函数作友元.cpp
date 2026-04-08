#include<iostream>
using namespace std;
//友元的目的是让一个函数或类 访问另一个类中私有成员 关键字friend
//成员函数做友元
class Building;
class GoodGay
{
public:
	GoodGay();
	void visit(); //参观函数 访问Building中的函数
	Building* building;
};
class Building
{
	//告诉编译器GoodGay::visit();是Building类的好朋友
	friend void GoodGay::visit();
public:
	Building();
public:
	string m_sittingRoom;
private:
	string m_BedRoom;
};
Building::Building()
{
	m_BedRoom = "卧室";
	m_sittingRoom = "客厅";
}
GoodGay::GoodGay()
{
	//创建建筑物对象
	building = new Building;
}
void GoodGay::visit()
{
	cout << "好基友成员函数 正在访问：" << building->m_sittingRoom << endl;
	cout << "好基友成员函数 正在访问：" << building->m_BedRoom << endl;
}

void test0()
{
	GoodGay g;
	g.visit();
}
int main()
{
	test0();
	return 0;
}

#include<iostream>
using namespace std;
class Person {
public:
	int age;
	Person(int age) {
		//age = age;
		// this本质是指针常量
		//this指针指向被调用的成员函数所属的对象，形参和变量名相同时可以用来区分
		this->age = age;
	}

	Person& PersonAddage(const Person& p) {
		this->age += p.age;
		//返回对象本身用*this
		return *this;
	}
};
//调用
void test0() {
	Person p1(18);
	cout << p1.age<<endl;
}
void test1() {
	Person p1(10);
	Person p2(10);
	cout << p2.age << endl;
	p2.PersonAddage(p1).PersonAddage(p1).PersonAddage(p1);
	cout << p2.age << endl;
}
int main()
{
	test0();
	test1();
	return 0;
}


#include<iostream>
using namespace std;
class Person {
public:
	int age;
	void per() {
		cout << "per函数调用" << endl;
	}
	void qer() {
		if (this == NULL) { return; }	//防止空指针出错
		age = 10;
		cout << "qer函数调用" << endl;
	}
};
//调用
void test0() {
	Person *p = NULL;
	//空指针也可以访问函数
	p->per();
	//空指针没有属性age；不能访问
	p->qer();
}
int main()
{
	test0();
	return 0;
}


#include<iostream>
using namespace std;
//常函数、
//常对象
class Person {
public:
	int age;
	mutable int N_a;
	/*常函数：函数内不可以修改成员数性
	在成员函数后加const，修饰的是this指向，让指针指向的值也不可以修改
	*/
	void per() const
	{
		//声明关键字mutable后就可以修改了
		this->N_a = 10;
		cout << "per函数调用" << endl;
	}
	void qer() {
		this->age = 10;
		cout << "qer函数调用" << endl;
	}
};

void test0() {
	Person p;
	p.per();
	p.qer();
}
void test1() {
	//常对象：只能调用常函数
	const Person p;
	//p.age = 100;不能修改
	p.N_a = 100;  
	p.per();
	//p.qer();不能调用普通成员函数
}
int main()
{
	test0();
	test1();
	return 0;
}


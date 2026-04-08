#include<iostream>
using namespace std;
//有参构造函数，无参构造函数
//拷贝构造函数， 普通构造函数
//我们提供了拷贝构造，编译器不提供构造， 我们提供了普通构造，编译器会提供默认拷贝构造
class Person {
public:
	int age;
	Person() {
		cout << "person无参构造函数调用" << endl;
	}
	Person(int a) {
		age = a;
		cout << "person有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person& p) {
		//将传入的对象的所有属性拷贝到我身上
		age = p.age;
		cout << "person拷贝构造函数调用" << endl;
	}
	~Person() {
		cout << "person析构函数调用" << endl;
	}
};
//调用
void test0() {
	//1.括号法
	//Person p1; //**调用默认构造时不要加（）
	//Person p2(10);
	//Person p3(p2);
	//cout << "p2的年龄为：" << p2.age << endl;
	//cout << "p3的年龄为：" << p3.age << endl;

	//2.显示法
	Person p1;
	Person p2 = Person(10);
	Person p3 = Person(p2);
	
	//3.隐式转换法
	Person p4 = 10; //相当于Person p4 = Person(10);
	Person p5 = p4;
}

int main()
{
	test0();
	return 0;
}

